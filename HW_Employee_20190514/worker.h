#pragma once
#include "employee.h"

class worker :
	public employee
{
	int cntProducts;
public:
	worker(string name, int age, int experience, string education, int cntProducts)
		: employee(name, age, experience, education) {
		this->cntProducts = cntProducts;
	}
	void setCntProducts(int cntProducts) { this->cntProducts = cntProducts; }
	int getCntProducts() const { return this->cntProducts; }

	double getCoeff() const override {
		double salesBonus(cntProducts * 0.01);
		return salesBonus;
	}
};

