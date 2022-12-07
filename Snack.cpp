#include "Snack.h"
#include <iostream>
using namespace std;

Snack::Snack(const std::string& name)
{
	this->name = name;
	this->price = 0.0;
	this->energy = 0.0;
}

Snack::Snack(const std::string& name, double priceValue)
{
	this->name = name;
	this->price = priceValue;
	this->energy = 0.0;
}

Snack::Snack(const std::string& name, double priceValue, double energyValue)
{
	this->name = name;
	price = priceValue;
	energy = energyValue;
}

void Snack::setName(const std::string& name)
{
	this->name = name;
}

void Snack::setPrice(double value)
{
	this->price = value;
}

void Snack::setEnergy(double value)
{
	this->energy = value;
}

string Snack::getName()const
{
	return name;
}

double Snack::getPrice()const
{
	return price;
}

double Snack::getEnergy()const
{
	return energy;
}