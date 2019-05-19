#pragma once
#include "employee.h"

class manager :
	public employee
{
	int cntContracts;
public:
	manager(string name, int age, int experience, string education, int cntContracts)
		: employee(name, age, experience, education) {
		this->cntContracts = cntContracts;
	}
	void set�ntContracts(int cntSubordinates) { this->cntContracts = cntContracts; }
	int �et�ntContracts() const { return this->cntContracts; }

	double getCoeff() const override {
		double salesBonus(cntContracts * 0.05);
		return salesBonus;
	}
};

