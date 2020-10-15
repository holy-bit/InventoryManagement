// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "InventoryManagement.h"

#define LOCTEXT_NAMESPACE "InventoryManagement"

DEFINE_LOG_CATEGORY(InventoryManagement)

void FInventoryManagementModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(InventoryManagement, Warning, TEXT("inventoryManagement started"));
	Test();
}

void FInventoryManagementModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

void FInventoryManagementModule::Test()
{
	
	//	Test:
	UE_LOG(InventoryManagement, Error, TEXT("Test"));

	//		1.Create an Inventory(player).
	UE_LOG(InventoryManagement, Error, TEXT("1.Create an Inventory(player)."));

	//		2.Create random inventory(loot).
	UE_LOG(InventoryManagement, Error, TEXT("2.Create random inventory(loot)."));

	//		3.Create inventory(chest).
	UE_LOG(InventoryManagement, Error, TEXT("3.Create inventory(chest)."));

	//		4.Collect lootand add it to the player.
	UE_LOG(InventoryManagement, Error, TEXT("4.Collect lootand add it to the player."));

	//		5.Organize the player's inventory.
	UE_LOG(InventoryManagement, Error, TEXT("5.Organize the player's inventory."));

	//		6.Split all player items.
	UE_LOG(InventoryManagement, Error, TEXT("6.Split all player items."));

	//		7.Make move of 1 object to the chest.
	UE_LOG(InventoryManagement, Error, TEXT("7.Make move of 1 object to the chest."));

	//		8.Subtract the chest from the player.
	UE_LOG(InventoryManagement, Error, TEXT("8.Subtract the chest from the player."));

	//		9.Make use of the objects that can be used.
	UE_LOG(InventoryManagement, Error, TEXT("9.Make use of the objects that can be used."));

	//		10.Chest each of the duplicate stacks.
	UE_LOG(InventoryManagement, Error, TEXT("10.Chest each of the duplicate stacks."));

	//		11.Merge Inventory(Merge Stacks) Player → Chest.
	UE_LOG(InventoryManagement, Error, TEXT("11.Merge Inventory(Merge Stacks) Player → Chest."));

	//		12.make a chest moveallOut to the character.
	UE_LOG(InventoryManagement, Error, TEXT("12.Make a chest moveallOut to the character."));

	//		13.split all the character's stacks.
	UE_LOG(InventoryManagement, Error, TEXT("13.Split all the character's stacks."));

	//		14.pass each of the duplicate stacks to the chest and one without leaving a duplicate.
	UE_LOG(InventoryManagement, Error, TEXT("14.Pass each of the duplicate stacks to the chest and one without leaving a duplicate."));

	//		15.Make a subtract from the player's inventory by collecting the common items from the chest.
	UE_LOG(InventoryManagement, Error, TEXT("15.Make a subtract from the player's inventory by collecting the common items from the chest."));

	//		16.make a moveallIn from the character to the chest.
	UE_LOG(InventoryManagement, Error, TEXT("16.Make a moveallIn from the character to the chest."));

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FInventoryManagementModule, InventoryManagement)