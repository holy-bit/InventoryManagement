// Copyright 2020 Holy-bit. All Rights Reserved.


#include "Inventory.h"

Inventory::Inventory()
{

}

Inventory::Inventory(int& size)
{
	inventoryId = 1; //id++
	this->size = size;
	//CreateSlots(size);
	TArray<Slot> newslots;

	for (int numberOfSlot = 0; numberOfSlot < size; numberOfSlot++)
	{
		newslots.Emplace(inventoryId, numberOfSlot);
	}

	slots = newslots;
}

Inventory::~Inventory()
{
}


FString Inventory::Print()
{
	FString string;
	for (auto& slot : slots)
	{
		string += "\n";
		string += slot.Print();
	}
	return string;
}

TArray<Slot> Inventory::CreateSlots(int& numberOfSlots)
{
	TArray<Slot> newslots;

	for (int numberOfSlot = 0; numberOfSlot < numberOfSlots; numberOfSlot++)
	{
		newslots.Emplace(inventoryId, numberOfSlot);
	}

	return newslots;
}
