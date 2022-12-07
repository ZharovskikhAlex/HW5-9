#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize() const;
	int getEmptySlotsCount() const;
	int getSnacksCount() const;

	void addSlot(SnackSlot* slot);
	void giveSnack();

private:
	int size;
	int slotCount;
	int emptySlotsCount;
	int snacksCount;
	SnackSlot** slots;
};

