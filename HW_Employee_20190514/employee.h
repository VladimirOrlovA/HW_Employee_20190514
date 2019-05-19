#pragma once
#include"human.h"

using namespace std;

class employee abstract :
	public human
{
	int experience;
	string education;
public:
	employee(string name, int age, int experience, string education)
		: human(name, age) {
		this->experience = experience;
		this->education = education;
	}
	void setExperience(int experience) { this->experience = experience; }
	int getExperience() const { return this->experience; }

	void setEducation(string education) { this->education = education; }
	string getEducation() const { return this->education; }

	virtual double getCoeff() const = 0;

	void info() const override {
		human::info();
		cout << "\n Work experience:\t" << experience << "\n Education:\t" << education;
	}
};
