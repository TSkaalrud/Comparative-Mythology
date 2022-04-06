// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHVIZ_NodeBase_generated_h
#error "NodeBase.generated.h already included, missing '#pragma once' in NodeBase.h"
#endif
#define MYTHVIZ_NodeBase_generated_h

#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_SPARSE_DATA
#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_RPC_WRAPPERS
#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANodeBase(); \
	friend struct Z_Construct_UClass_ANodeBase_Statics; \
public: \
	DECLARE_CLASS(ANodeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MythViz"), NO_API) \
	DECLARE_SERIALIZER(ANodeBase)


#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANodeBase(); \
	friend struct Z_Construct_UClass_ANodeBase_Statics; \
public: \
	DECLARE_CLASS(ANodeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MythViz"), NO_API) \
	DECLARE_SERIALIZER(ANodeBase)


#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANodeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANodeBase(ANodeBase&&); \
	NO_API ANodeBase(const ANodeBase&); \
public:


#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANodeBase(ANodeBase&&); \
	NO_API ANodeBase(const ANodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANodeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANodeBase)


#define FID_MythViz_Source_MythViz_Public_NodeBase_h_9_PROLOG
#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_SPARSE_DATA \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_RPC_WRAPPERS \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_INCLASS \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MythViz_Source_MythViz_Public_NodeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_SPARSE_DATA \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_MythViz_Source_MythViz_Public_NodeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHVIZ_API UClass* StaticClass<class ANodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MythViz_Source_MythViz_Public_NodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
