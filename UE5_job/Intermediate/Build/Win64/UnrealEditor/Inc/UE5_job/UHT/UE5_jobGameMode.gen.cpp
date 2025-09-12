// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_job/UE5_jobGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_jobGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_JOB_API UClass* Z_Construct_UClass_AUE5_jobGameMode();
	UE5_JOB_API UClass* Z_Construct_UClass_AUE5_jobGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_job();
// End Cross Module References
	void AUE5_jobGameMode::StaticRegisterNativesAUE5_jobGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_jobGameMode);
	UClass* Z_Construct_UClass_AUE5_jobGameMode_NoRegister()
	{
		return AUE5_jobGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_jobGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_jobGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_job,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_jobGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_jobGameMode.h" },
		{ "ModuleRelativePath", "UE5_jobGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_jobGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_jobGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_jobGameMode_Statics::ClassParams = {
		&AUE5_jobGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_jobGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_jobGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUE5_jobGameMode()
	{
		if (!Z_Registration_Info_UClass_AUE5_jobGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_jobGameMode.OuterSingleton, Z_Construct_UClass_AUE5_jobGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_jobGameMode.OuterSingleton;
	}
	template<> UE5_JOB_API UClass* StaticClass<AUE5_jobGameMode>()
	{
		return AUE5_jobGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_jobGameMode);
	AUE5_jobGameMode::~AUE5_jobGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_jobGameMode, AUE5_jobGameMode::StaticClass, TEXT("AUE5_jobGameMode"), &Z_Registration_Info_UClass_AUE5_jobGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_jobGameMode), 1476143114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobGameMode_h_764696142(TEXT("/Script/UE5_job"),
		Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gsimp_OneDrive_Desktop_Job_Horror_UE5_job_Source_UE5_job_UE5_jobGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
