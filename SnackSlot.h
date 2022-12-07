#pragma once
#include"Snack.h"

class SnackSlot
{
public:
	SnackSlot(short slotSize);
	~SnackSlot();

	short getSize() const;
	short getSnackCount() const;

	void addSnack(Snack* snack);
	void giveSnack();

private:
	short size;
	short snackCount;
	Snack** snacks;
};

