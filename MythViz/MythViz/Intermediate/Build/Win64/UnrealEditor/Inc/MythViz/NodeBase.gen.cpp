// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MythViz/Public/NodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeBase() {}
// Cross Module References
	MYTHVIZ_API UClass* Z_Construct_UClass_ANodeBase_NoRegister();
	MYTHVIZ_API UClass* Z_Construct_UClass_ANodeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MythViz();
// End Cross Module References
	void ANodeBase::StaticRegisterNativesANodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANodeBase);
	UClass* Z_Construct_UClass_ANodeBase_NoRegister()
	{
		return ANodeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MythViz,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NodeBase.h" },
		{ "ModuleRelativePath", "Public/NodeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANodeBase_Statics::ClassParams = {
		&ANodeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANodeBase()
	{
		if (!Z_Registration_Info_UClass_ANodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANodeBase.OuterSingleton, Z_Construct_UClass_ANodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANodeBase.OuterSingleton;
	}
	template<> MYTHVIZ_API UClass* StaticClass<ANodeBase>()
	{
		return ANodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANodeBase);
	struct Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANodeBase, ANodeBase::StaticClass, TEXT("ANodeBase"), &Z_Registration_Info_UClass_ANodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANodeBase), 263266542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeBase_h_926062181(TEXT("/Script/MythViz"),
		Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MythViz_Source_MythViz_Public_NodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
