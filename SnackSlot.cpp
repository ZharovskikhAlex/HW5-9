#include "SnackSlot.h"
#include <iostream>

using namespace std;

SnackSlot::SnackSlot(short size)
{
	this->size = size;
	snackCount = 0;
	this->snacks = new Snack * [size];
}

SnackSlot::~SnackSlot()
{
	delete[] snacks;
}

short SnackSlot::getSize() const
{
	return size;
}

short SnackSlot::getSnackCount()const
{
	return snackCount;
}

void SnackSlot::addSnack(Snack* snack)
{
	if (snackCount < size)
	{
		snacks[snackCount] = snack;
		++snackCount;
		cout << "Добавлен батончик: " << snack->getName() << endl;
	}
}

void SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		--snackCount;
		cout << "Батончиков осталось: " << snacks[snackCount]->getName() << endl;
	}
}