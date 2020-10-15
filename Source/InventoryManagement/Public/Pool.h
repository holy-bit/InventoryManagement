// Copyright 2020 Holy-bit. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/// <summary>
/// Class that closes where they can exit according to which objects or structr to the file, etc.
/// </summary>
class INVENTORYMANAGEMENT_API Pool
{
public:
	Pool();
	~Pool();

private:

	//enum type						//Different types of object pool that you can do (enumeration).

	///Methods
	void GenerateItemFromPool();	//Generate a random item from the given pool of items.
};
