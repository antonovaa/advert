// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef ADVERT_MyStandActor_generated_h
#error "MyStandActor.generated.h already included, missing '#pragma once' in MyStandActor.h"
#endif
#define ADVERT_MyStandActor_generated_h

#define advert_Source_advert_MyStandActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgimg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->gimg(Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsendimg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->sendimg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetimg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->getimg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define advert_Source_advert_MyStandActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgimg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->gimg(Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsendimg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->sendimg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetimg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->getimg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define advert_Source_advert_MyStandActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyStandActor(); \
	friend ADVERT_API class UClass* Z_Construct_UClass_AMyStandActor(); \
public: \
	DECLARE_CLASS(AMyStandActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/advert"), NO_API) \
	DECLARE_SERIALIZER(AMyStandActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define advert_Source_advert_MyStandActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMyStandActor(); \
	friend ADVERT_API class UClass* Z_Construct_UClass_AMyStandActor(); \
public: \
	DECLARE_CLASS(AMyStandActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/advert"), NO_API) \
	DECLARE_SERIALIZER(AMyStandActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define advert_Source_advert_MyStandActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyStandActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyStandActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStandActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStandActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyStandActor(AMyStandActor&&); \
	NO_API AMyStandActor(const AMyStandActor&); \
public:


#define advert_Source_advert_MyStandActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyStandActor(AMyStandActor&&); \
	NO_API AMyStandActor(const AMyStandActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStandActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStandActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyStandActor)


#define advert_Source_advert_MyStandActor_h_24_PRIVATE_PROPERTY_OFFSET
#define advert_Source_advert_MyStandActor_h_21_PROLOG
#define advert_Source_advert_MyStandActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	advert_Source_advert_MyStandActor_h_24_PRIVATE_PROPERTY_OFFSET \
	advert_Source_advert_MyStandActor_h_24_RPC_WRAPPERS \
	advert_Source_advert_MyStandActor_h_24_INCLASS \
	advert_Source_advert_MyStandActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define advert_Source_advert_MyStandActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	advert_Source_advert_MyStandActor_h_24_PRIVATE_PROPERTY_OFFSET \
	advert_Source_advert_MyStandActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	advert_Source_advert_MyStandActor_h_24_INCLASS_NO_PURE_DECLS \
	advert_Source_advert_MyStandActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID advert_Source_advert_MyStandActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
