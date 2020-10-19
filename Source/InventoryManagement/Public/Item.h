// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pool.h"

/// <summary>
/// Works like any object of a inventory
/// </summary>
class INVENTORYMANAGEMENT_API Item
{
public:
	Item();
	~Item();

private:

	
	static int id;			//Static variable to give an identification number and make each item unique.
	Pool pool;				//Pool to which the particular object belongs.
	size_t Stack_size;		//Size in which the object can be put together.
	bool usable;			//Check if the item can be used.
	int numberOfUses;		//Mark the number of uses that the item in question can have.
	float dropRate;			//percentage of drop of this item.
	FString	Icon;			//Icon with which the item will be represented.

public:
	FString name;			//Name of the item.
	///METHODS
	
	void Use();				//Use the item if can be used. call On


};
