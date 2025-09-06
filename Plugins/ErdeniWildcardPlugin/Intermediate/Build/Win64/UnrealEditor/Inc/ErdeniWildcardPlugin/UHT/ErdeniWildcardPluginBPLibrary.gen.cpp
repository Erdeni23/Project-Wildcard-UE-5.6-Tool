// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ErdeniWildcardPluginBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeErdeniWildcardPluginBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
ERDENIWILDCARDPLUGIN_API UClass* Z_Construct_UClass_UErdeniWildcardPluginBPLibrary();
ERDENIWILDCARDPLUGIN_API UClass* Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_ErdeniWildcardPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UErdeniWildcardPluginBPLibrary Function Wildcard *************************
struct Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics
{
	struct ErdeniWildcardPluginBPLibrary_eventWildcard_Parms
	{
		UPrimaryDataAsset* TargetDataAsset;
		UDataTable* SourceDataTable;
		FName RowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ErdeniWildcardPlugin" },
		{ "DisplayName", "Input Prorepries In Data Asset" },
		{ "Keywords", "Wildcard, Erdeni, Plugin" },
		{ "ModuleRelativePath", "Public/ErdeniWildcardPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_TargetDataAsset = { "TargetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ErdeniWildcardPluginBPLibrary_eventWildcard_Parms, TargetDataAsset), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_SourceDataTable = { "SourceDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ErdeniWildcardPluginBPLibrary_eventWildcard_Parms, SourceDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ErdeniWildcardPluginBPLibrary_eventWildcard_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_TargetDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_SourceDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UErdeniWildcardPluginBPLibrary, nullptr, "Wildcard", Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::ErdeniWildcardPluginBPLibrary_eventWildcard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::ErdeniWildcardPluginBPLibrary_eventWildcard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UErdeniWildcardPluginBPLibrary::execWildcard)
{
	P_GET_OBJECT(UPrimaryDataAsset,Z_Param_TargetDataAsset);
	P_GET_OBJECT(UDataTable,Z_Param_SourceDataTable);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UErdeniWildcardPluginBPLibrary::Wildcard(Z_Param_TargetDataAsset,Z_Param_SourceDataTable,Z_Param_RowName);
	P_NATIVE_END;
}
// ********** End Class UErdeniWildcardPluginBPLibrary Function Wildcard ***************************

// ********** Begin Class UErdeniWildcardPluginBPLibrary *******************************************
void UErdeniWildcardPluginBPLibrary::StaticRegisterNativesUErdeniWildcardPluginBPLibrary()
{
	UClass* Class = UErdeniWildcardPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Wildcard", &UErdeniWildcardPluginBPLibrary::execWildcard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary;
UClass* UErdeniWildcardPluginBPLibrary::GetPrivateStaticClass()
{
	using TClass = UErdeniWildcardPluginBPLibrary;
	if (!Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ErdeniWildcardPluginBPLibrary"),
			Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.InnerSingleton,
			StaticRegisterNativesUErdeniWildcardPluginBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_NoRegister()
{
	return UErdeniWildcardPluginBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ErdeniWildcardPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ErdeniWildcardPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UErdeniWildcardPluginBPLibrary_Wildcard, "Wildcard" }, // 4227262178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UErdeniWildcardPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ErdeniWildcardPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::ClassParams = {
	&UErdeniWildcardPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UErdeniWildcardPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UErdeniWildcardPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UErdeniWildcardPluginBPLibrary);
UErdeniWildcardPluginBPLibrary::~UErdeniWildcardPluginBPLibrary() {}
// ********** End Class UErdeniWildcardPluginBPLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Unreal_Projects_Dojo_Plugins_ErdeniWildcardPlugin_Source_ErdeniWildcardPlugin_Public_ErdeniWildcardPluginBPLibrary_h__Script_ErdeniWildcardPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UErdeniWildcardPluginBPLibrary, UErdeniWildcardPluginBPLibrary::StaticClass, TEXT("UErdeniWildcardPluginBPLibrary"), &Z_Registration_Info_UClass_UErdeniWildcardPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UErdeniWildcardPluginBPLibrary), 1435166057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Unreal_Projects_Dojo_Plugins_ErdeniWildcardPlugin_Source_ErdeniWildcardPlugin_Public_ErdeniWildcardPluginBPLibrary_h__Script_ErdeniWildcardPlugin_3011037259(TEXT("/Script/ErdeniWildcardPlugin"),
	Z_CompiledInDeferFile_FID_Games_Unreal_Projects_Dojo_Plugins_ErdeniWildcardPlugin_Source_ErdeniWildcardPlugin_Public_ErdeniWildcardPluginBPLibrary_h__Script_ErdeniWildcardPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Unreal_Projects_Dojo_Plugins_ErdeniWildcardPlugin_Source_ErdeniWildcardPlugin_Public_ErdeniWildcardPluginBPLibrary_h__Script_ErdeniWildcardPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
