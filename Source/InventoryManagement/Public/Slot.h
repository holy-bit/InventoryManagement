// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"

/// <summary>
/// Set of a number of the same Item.
/// </summary>
class INVENTORYMANAGEMENT_API Slot
{
public:
	Slot();						//When creating a slot it can be empty, but it must always have an inventory id to which it belongs and the slot number within said inventory.
	~Slot();					//Destroyer the Item.
	
	void Split();				//Divide a slot in two differents slot of the item. if the new slot drop to no one inventory, the split is cancel.
	void Merge();				//Merge two stack in one, if the size exceed the maximum, one of these should be full of capacity and in other the rest.
	void Move();				//Move this stack from a slot to another, if the move it’s to a slot with a different item stacks should switch the positions, if is the same should call merge method. if the new stack drop to no one inventory, the split is cancel.
	void Use();					//Use the item it has, if it is spent subtract one from the size of the stack, if it reaches 0, it will become an empty stack.
	bool isfull();				//Returns if the stack has reached its maximum capacity.
	void ResetStack();			//Reset the stack values ​​to be an empty one.
private:
	Item item;					//Reference to the type of item that contains the slot.
	size_t size;				//Number of items that the slot contains.
	int inventoryID;			//The Id of the inventory where the slot is.
	int slotNumber;				//Number of the position in the inventory.

	///EVENTS
	/// OnUse()					//Call when use a item of the stack.
	/// OnStackUpdate()			//Call on split, merge or move.
};
