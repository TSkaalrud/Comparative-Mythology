// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MythViz/Public/NodeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeManager() {}
// Cross Module References
	MYTHVIZ_API UClass* Z_Construct_UClass_ANodeManager_NoRegister();
	MYTHVIZ_API UClass* Z_Construct_UClass_ANodeManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MythViz();
// End Cross Module References
	void ANodeManager::StaticRegisterNativesANodeManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANodeManager);
	UClass* Z_Construct_UClass_ANodeManager_NoRegister()
	{
		return ANodeManager::StaticClass();
	}
	struct Z_Construct_UClass_ANodeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANodeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MythViz,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NodeManager.h" },
		{ "ModuleRelativePath", "Public/NodeManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANodeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANodeManager_Statics::ClassParams = {
		&ANodeManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANodeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANodeManager()
	{
		if (!Z_Registration_Info_UClass_ANodeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANodeManager.OuterSingleton, Z_Construct_UClass_ANodeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANodeManager.OuterSingleton;
	}
	template<> MYTHVIZ_API UClass* StaticClass<ANodeManager>()
	{
		return ANodeManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANodeManager);
	struct Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANodeManager, ANodeManager::StaticClass, TEXT("ANodeManager"), &Z_Registration_Info_UClass_ANodeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANodeManager), 2476014189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeManager_h_3410204570(TEXT("/Script/MythViz"),
		Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
