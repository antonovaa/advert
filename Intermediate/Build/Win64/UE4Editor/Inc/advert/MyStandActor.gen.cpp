// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyStandActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStandActor() {}
// Cross Module References
	ADVERT_API UFunction* Z_Construct_UFunction_AMyStandActor_getimg();
	ADVERT_API UClass* Z_Construct_UClass_AMyStandActor();
	ADVERT_API UFunction* Z_Construct_UFunction_AMyStandActor_gimg();
	ADVERT_API UFunction* Z_Construct_UFunction_AMyStandActor_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVERT_API UFunction* Z_Construct_UFunction_AMyStandActor_sendimg();
	ADVERT_API UClass* Z_Construct_UClass_AMyStandActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_advert();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AMyStandActor::StaticRegisterNativesAMyStandActor()
	{
		UClass* Class = AMyStandActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "getimg", (Native)&AMyStandActor::execgetimg },
			{ "gimg", (Native)&AMyStandActor::execgimg },
			{ "OnHit", (Native)&AMyStandActor::execOnHit },
			{ "sendimg", (Native)&AMyStandActor::execsendimg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyStandActor_getimg()
	{
		UObject* Outer = Z_Construct_UClass_AMyStandActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getimg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyStandActor_gimg()
	{
		struct MyStandActor_eventgimg_Parms
		{
			FString s;
		};
		UObject* Outer = Z_Construct_UClass_AMyStandActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("gimg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyStandActor_eventgimg_Parms));
			UProperty* NewProp_s = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("s"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(s, MyStandActor_eventgimg_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyStandActor_OnHit()
	{
		struct MyStandActor_eventOnHit_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_AMyStandActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MyStandActor_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, MyStandActor_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, MyStandActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, MyStandActor_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MyStandActor_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyStandActor_sendimg()
	{
		UObject* Outer = Z_Construct_UClass_AMyStandActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("sendimg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyStandActor_NoRegister()
	{
		return AMyStandActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyStandActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_advert();
			OuterClass = AMyStandActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyStandActor_getimg());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyStandActor_gimg());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyStandActor_OnHit());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyStandActor_sendimg());

				UProperty* NewProp_LoadedT2D = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoadedT2D"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LoadedT2D, AMyStandActor), 0x0010000000000004, Z_Construct_UClass_UTexture2D_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyStandActor_getimg(), "getimg"); // 1583857586
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyStandActor_gimg(), "gimg"); // 3866298112
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyStandActor_OnHit(), "OnHit"); // 4029084383
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyStandActor_sendimg(), "sendimg"); // 3345726789
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyStandActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyStandActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
				MetaData->SetValue(NewProp_LoadedT2D, TEXT("Category"), TEXT("MyStandActor"));
				MetaData->SetValue(NewProp_LoadedT2D, TEXT("ModuleRelativePath"), TEXT("MyStandActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyStandActor, 2283846659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyStandActor(Z_Construct_UClass_AMyStandActor, &AMyStandActor::StaticClass, TEXT("/Script/advert"), TEXT("AMyStandActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyStandActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
