// Fill out your copyright notice in the Description page of Project Settings.

#include "MyStandActor.h"


// Sets default values
AMyStandActor::AMyStandActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMyStandActor::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("start")));

}

void AMyStandActor::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Hit")));
}
// Called every frame
void AMyStandActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyStandActor::getimg()
{
	/*TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("login"), *FString::Printf(TEXT("%s"), "dfgdfg"));
	FString OutputString;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);


	JsonWriter->WriteObjectStart();
	JsonWriter->WriteValue("ImageData", "hi");
	JsonWriter->WriteObjectEnd();
	JsonWriter->Close();*/

	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

	HttpRequest->SetVerb("POST");
	//FHttpModule::Get().GetHttpThreadActiveFrameTimeInSeconds
	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetURL("81.5.93.32:8080/game/setupnewimg");
	//HttpRequest->SetContentAsString(OutputString);

	HttpRequest->OnProcessRequestComplete().BindUObject(this, &AMyStandActor::OnYourFunctionCompleted);
	HttpRequest->ProcessRequest();
}

void AMyStandActor::sendimg()
{
	FString FileName = "phuke";
	TArray<uint8> UpFileRawData;
	//TArray<uint8> UpFileRawData2;


	FFileHelper::LoadFileToArray(UpFileRawData, *pngfile);

	// prepare json data
	FString JsonString2;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&JsonString2);


	FString testenc = FBase64::Encode(UpFileRawData);
	//FBase64::Decode(testenc, UpFileRawData2);


	JsonWriter->WriteObjectStart();
	JsonWriter->WriteValue("FileToUpload", FileName);
	JsonWriter->WriteValue("ImageData", testenc);
	JsonWriter->WriteObjectEnd();
	JsonWriter->Close();

	// the json request
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

	HttpRequest->SetVerb("POST");

	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetURL("81.5.93.32:8080/game/setupnewimg");
	HttpRequest->SetContentAsString(JsonString2);

	HttpRequest->OnProcessRequestComplete().BindUObject(this, &AMyStandActor::OnYourFunctionCompleted);
	HttpRequest->ProcessRequest();
}

void AMyStandActor::OnYourFunctionCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	FString JsonString = Response->GetContentAsString();

	if (bWasSuccessful)// && response->getcontenttype() == "application/json")
	{
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

		FJsonSerializer::Deserialize(JsonReader, JsonObject);
		FString tex0 = "";
		tex0 = JsonObject->GetStringField("imgbytes0");
		if (tex0 != "")
		{
			TArray <uint8> RawFileData0;

			FBase64::Decode(tex0, RawFileData0);

			IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
			IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

			if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData0.GetData(), RawFileData0.Num()))
			{

				const TArray<uint8>* UncompressedBGRA = NULL;
				if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
				{
					Width = ImageWrapper->GetWidth();
					Height = ImageWrapper->GetHeight();

					LoadedT2D = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
					if (!LoadedT2D)
					{
						return;
					}

					//Out!


					//Copy!
					void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
					FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
					LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

					//Update!
					LoadedT2D->UpdateResource();
				}

			}
		}
	}
}

void AMyStandActor::gimg(FString s)
{

	FString pngfile2;
	pngfile2 = FString::Printf(TEXT("e:\\temp33\\%s"), *s);
	TArray <uint8> RawFileData;
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	// Note: PNG format.  Other formats are supported
	IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

	if (FFileHelper::LoadFileToArray(RawFileData, *pngfile2))
	{
		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{

			const TArray<uint8>* UncompressedBGRA = NULL;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
				if (!LoadedT2D)
				{
					return;
				}

				//Out!
				Width = ImageWrapper->GetWidth();
				Height = ImageWrapper->GetHeight();

				//Copy!
				void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

				//Update!
				LoadedT2D->UpdateResource();
			}
		}
	}
}

