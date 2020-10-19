// Copyright 2020 Holy-bit. All Rights Reserved.


#include "Slot.h"



Slot::~Slot()
{
}

FString Slot::Print()
{
	UE_LOG(InventoryManagement, Error, TEXT("Slot print enter"));
	FString string;
	string += FString::Printf(TEXT("Slot number: %d, of inventory with id: %d"), slotNumber, inventoryId);
	
	if(item == nullptr)
		string += " Slot is empty";
	else string += FString::Printf(TEXT(" Slot have %d of item: %s"), size, *(item->name));

	return string;
}
