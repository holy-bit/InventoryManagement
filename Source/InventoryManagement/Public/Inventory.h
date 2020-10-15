// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Slot.h"



/// <summary>
/// Works as container and controller of items
/// </summary>
class INVENTORYMANAGEMENT_API Inventory
{
public:
	Inventory();							//Constructor overload, being able to create an empty one by passing only the size (As if it were a bag), or being able to create it with a random loot
	~Inventory();							//Destroyer the inventory

private:
	static int id;							//Static variable to give an identification number and make each inventory unique.
	int size;								//Inventory size.
	TArray<Slot> slots;						//List of slots with maximum length the size of the bag.


public:
	static bool Sort();						//Sort the items found in inventory following a specific filter (alphabet, id, quantity, type).
	static bool Merge();					//Merge two different inventories leaving it in one, so the elements that they have in common with the other inventory are added (merge the inventory stacks).
	static bool Subtract();					//Subtract the inventory so it sends to the other inventory the objects they have in common. (It is the inverse of merge)
	static bool Add();						//Add a Stack to inventory (only used with inventories that are created with loot, such as enemies or chests.)
	static bool Move();						//Move a stack from one inventory to another
	static bool MoveAllIn();				//Move all items from one inventory to another (move in all stacks), or until it is filled.
	static bool MoveAllOut();				//Move all items from one inventory to another (move out all stacks), or until it is filled.
	static bool IsFull();					//Return if there is space in the invetory.
	static bool Find(Item item);			//Return list of pointers to stacks of this item
	static bool FindByID(int id);			//Return list of pointers to stacks of this item
	static bool FindByName(FString s);		//Return list of pointers to stacks of this item
	bool Delete();							//Clears all inventory.

	//Events

	//	OnOpen								//Call on OpentheInventory
	//	OnClose								//Call on close the inventory
	//	OnSorted							//Call when the sort ended
	//	OnStackUpdate						//Call on any action of a stack : merge, add, subtract, move.

};
