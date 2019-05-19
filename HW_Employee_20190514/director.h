#pragma once
#include "employee.h"

class director :
	public employee
{
	int cntSubordinates;
public:
	director(string name, int age, int experience, string education, int cntSubordinates)
		: employee(name, age, experience, education){
		this->cntSubordinates = cntSubordinates;
	}
	void setCntSubordinates(int cntSubordinates) { this->cntSubordinates = cntSubordinates; }
	int getCntSubordinates() const { return this->cntSubordinates; }
	
	double getCoeff() const override {
		double salesBonus(0.3);
		return salesBonus;
	}

};

