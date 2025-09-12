// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_job/UE5_jobPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_jobPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_JOB_API UClass* Z_Construct_UClass_AUE5_jobPlayerController();
	UE5_JOB_API UClass* Z_Construct_UClass_AUE5_jobPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_job();
// End Cross Module References
	void AUE5_jobPlayerController::StaticRegisterNativesAUE5_jobPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_jobPlayerController);
	UClass* Z_Construct_UClass_AUE5_jobPlayerController_NoRegister()
	{
		return AUE5_jobPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_jobPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_jobPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_job,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_jobPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UE5_jobPlayerController.h" },
		{ "ModuleRelativePath", "UE5_jobPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_jobPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "UE5_jobPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_jobPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_jobPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AUE5_jobPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_jobPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_jobPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_jobPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_jobPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_jobPlayerController_Statics::ClassParams = {
		&AUE5_jobPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUE5_jobPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_jobPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUE5_jobPlayerController()
	{
		if (!Z_Registration_Info_UClass_AUE5_jobPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_jobPlayerController.OuterSingleton, Z_Construct_UClass_AUE5_jobPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_jobPlayerController.OuterSingleton;
	}
	template<> UE5_JOB_API UClass* StaticClass<AUE5_jobPlayerController>()
	{
		return AUE5_jobPlayerController::StaticClass();
	}
	AUE5_jobPlayerController::AUE5_jobPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_jobPlayerController);
	AUE5_jobPlayerController::~AUE5_jobPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_jobPlayerController, AUE5_jobPlayerController::StaticClass, TEXT("AUE5_jobPlayerController"), &Z_Registration_Info_UClass_AUE5_jobPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_jobPlayerController), 3010327265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobPlayerController_h_1957160910(TEXT("/Script/UE5_job"),
		Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
