// Fill out your copyright notice in the Description page of Project Settings.

//#pragma once

#include "runtime/imagewrapper/public/interfaces/iimagewrappermodule.h"
#include "runtime/imagewrapper/public/interfaces/iimagewrapper.h"
#include "runtime/core/public/misc/filehelper.h"
#include "runtime/core/public/misc/base64.h"
#include "runtime/json/public/dom/jsonobject.h"
#include "runtime/json/public/serialization/jsonwriter.h"
#include "Json.h"
//#include "JsonUtilities.h"


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "MyStandActor.generated.h"


UCLASS()
class ADVERT_API AMyStandActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyStandActor();

	UFUNCTION(BlueprintCallable)
		void OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	//protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void getimg();

	UFUNCTION(BlueprintCallable)
		void sendimg();

	UFUNCTION(BlueprintCallable)
		void gimg(FString s);

	void OnYourFunctionCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UPROPERTY(BlueprintReadWrite)
		UTexture2D* LoadedT2D;

	int32 Width;
	int32 Height;

	FString pngfile = "e:\\phuke.jpg";

	TArray <uint8> RawFileData;

};
