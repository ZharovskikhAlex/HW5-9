#include "VendingMachine.h"
#include <iostream>

using namespace std;

VendingMachine::VendingMachine(int size)
{
	this->size = size;
	this->slotCount = 0;
	this->emptySlotsCount = this->size;
	this->snacksCount = 0;
	slots = new SnackSlot * [size];
}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize() const
{
	return this->size;
}

int VendingMachine::getEmptySlotsCount() const
{
	return this->emptySlotsCount;
}

int VendingMachine::getSnacksCount() const
{
	return this->snacksCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	slots[this->slotCount] = slot;
	--this->emptySlotsCount;
	++this->slotCount;
	this->snacksCount += slot->getSnackCount();
}

void VendingMachine::giveSnack()
{
	--this->snacksCount;
	slots[this->slotCount - 1]->giveSnack();
	if (slots[this->slotCount - 1]->getSnackCount() == 0)
	{
		++this->emptySlotsCount;
	}
}

