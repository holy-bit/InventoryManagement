// Copyright 2020 Holy-bit. All Rights Reserved.

#include "InventoryManagementBPLibrary.h"
#include "InventoryManagement.h"

UInventoryManagementBPLibrary::UInventoryManagementBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UInventoryManagementBPLibrary::InventoryManagementSampleFunction(float Param)
{

	FInventoryManagementModule::Test();

	return -1;
}

