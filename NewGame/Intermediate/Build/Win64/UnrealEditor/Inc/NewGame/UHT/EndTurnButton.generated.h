// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndTurnButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWGAME_EndTurnButton_generated_h
#error "EndTurnButton.generated.h already included, missing '#pragma once' in EndTurnButton.h"
#endif
#define NEWGAME_EndTurnButton_generated_h

#define FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWinOrLoose); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execDealDamage); \
	DECLARE_FUNCTION(execRandDamageWith_WithoutShield); \
	DECLARE_FUNCTION(execSetAndBlockButtons); \
	DECLARE_FUNCTION(execEnableButtons); \
	DECLARE_FUNCTION(execRefreshStats); \
	DECLARE_FUNCTION(execButtonthirdClicked); \
	DECLARE_FUNCTION(execButtonsecondClicked); \
	DECLARE_FUNCTION(execButtonfirstClicked); \
	DECLARE_FUNCTION(execMenuButtonClicked); \
	DECLARE_FUNCTION(execEndTurnButtonClicked);


#define FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndTurnButton(); \
	friend struct Z_Construct_UClass_UEndTurnButton_Statics; \
public: \
	DECLARE_CLASS(UEndTurnButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NewGame"), NO_API) \
	DECLARE_SERIALIZER(UEndTurnButton)


#define FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndTurnButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEndTurnButton(UEndTurnButton&&); \
	UEndTurnButton(const UEndTurnButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndTurnButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTurnButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndTurnButton) \
	NO_API virtual ~UEndTurnButton();


#define FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_12_PROLOG
#define FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWGAME_API UClass* StaticClass<class UEndTurnButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_PROJECTS_NewGame_Source_NewGame_EndTurnButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
