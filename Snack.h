#pragma once
#include <iostream>

class Snack
{
public:
	Snack(const std::string& name);
	Snack(const std::string& name, double priceValue);
	Snack(const std::string& name, double priceValue, double energyValue);
	~Snack() = default;

	void setName(const std::string& name);
	void setPrice(double value);
	void setEnergy(double value);

	std::string getName() const;
	double getPrice() const;
	double getEnergy() const;

private:
	std::string name;
	double price;
	double energy;
};

