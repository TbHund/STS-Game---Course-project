// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewGame/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}

// Begin Cross Module References
NEWGAME_API UClass* Z_Construct_UClass_UMainMenu();
NEWGAME_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NewGame();
// End Cross Module References

// Begin Class UMainMenu Function QuitGame
struct Z_Construct_UFunction_UMainMenu_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenu_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class UMainMenu Function QuitGame

// Begin Class UMainMenu Function StartGame
struct Z_Construct_UFunction_UMainMenu_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa4\xd0\xa3\xd0\x9d\xd0\x9a\xd0\xa6\xd0\x98\xd0\x98\n" },
#endif
		{ "ModuleRelativePath", "MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa4\xd0\xa3\xd0\x9d\xd0\x9a\xd0\xa6\xd0\x98\xd0\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenu_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenu::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class UMainMenu Function StartGame

// Begin Class UMainMenu
void UMainMenu::StaticRegisterNativesUMainMenu()
{
	UClass* Class = UMainMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "QuitGame", &UMainMenu::execQuitGame },
		{ "StartGame", &UMainMenu::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
UClass* Z_Construct_UClass_UMainMenu_NoRegister()
{
	return UMainMenu::StaticClass();
}
struct Z_Construct_UClass_UMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainMenu.h" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9a\xd0\x9d\xd0\x9e\xd0\x9f\xd0\x9a\xd0\x98\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\x9d\xd0\x9e\xd0\x9f\xd0\x9a\xd0\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa2\xd0\x95\xd0\x9a\xd0\xa1\xd0\xa2 \xd0\x98 \xd0\xa4\xd0\x9e\xd0\x9d\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa2\xd0\x95\xd0\x9a\xd0\xa1\xd0\xa2 \xd0\x98 \xd0\xa4\xd0\x9e\xd0\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_QuitGame, "QuitGame" }, // 2934888036
		{ &Z_Construct_UFunction_UMainMenu_StartGame, "StartGame" }, // 4284930293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, StartGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameButton_MetaData), NewProp_StartGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitGameButton = { "QuitGameButton", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, QuitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitGameButton_MetaData), NewProp_QuitGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_StartGameText = { "StartGameText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, StartGameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameText_MetaData), NewProp_StartGameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitGameText = { "QuitGameText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, QuitGameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitGameText_MetaData), NewProp_QuitGameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuBackground = { "MainMenuBackground", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, MainMenuBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuBackground_MetaData), NewProp_MainMenuBackground_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_StartGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_StartGameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitGameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NewGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
	&UMainMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenu()
{
	if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
}
template<> NEWGAME_API UClass* StaticClass<UMainMenu>()
{
	return UMainMenu::StaticClass();
}
UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
UMainMenu::~UMainMenu() {}
// End Class UMainMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_PROJECTS_NewGame_Source_NewGame_MainMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 1292043120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_PROJECTS_NewGame_Source_NewGame_MainMenu_h_223875688(TEXT("/Script/NewGame"),
	Z_CompiledInDeferFile_FID_UE5_PROJECTS_NewGame_Source_NewGame_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_PROJECTS_NewGame_Source_NewGame_MainMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
