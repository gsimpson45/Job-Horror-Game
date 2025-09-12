// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_job_init() {}
	UE5_JOB_API UFunction* Z_Construct_UDelegateFunction_UE5_job_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_job;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_job()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_job.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_job_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_job",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0862063D,
				0x81ADD22A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_job.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_job.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_job(Z_Construct_UPackage__Script_UE5_job, TEXT("/Script/UE5_job"), Z_Registration_Info_UPackage__Script_UE5_job, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0862063D, 0x81ADD22A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
