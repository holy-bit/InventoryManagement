// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "Inventory.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "InventoryManagement"

DECLARE_LOG_CATEGORY_EXTERN(InventoryManagement, All, All);


/// <summary>
/// Manages all the inventories of the game, this class must manageand interface with all the events of the plugin, 
/// in addition to declaring all the public functions necessary for the use of the public through blueprints.
/// </summary>
class FInventoryManagementModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static TArray<Pool> pools;
	static TArray<Inventory*> inventories;

	static void Test();				//Function test of the whole system.
	void CreateAinventory();		//Create a new inventory by necessarily passing the size of this inventory to it.
	void CreateAlootDrop();			//Create an inventory with X space, which will start to generate objects from a pool and add them to this inventory.

	static bool Find(Item item);					//Return list of pointers to stacks of this item
	static bool FindByID(int& id);					//Return list of pointers to stacks of this item
	static bool FindByName(FString s);				//Return list of pointers to stacks of this item
	


};
