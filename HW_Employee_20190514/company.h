#pragma once
#include"employee.h"
#include<vector>

class company
{
	string name;
	vector<employee*> emps;
	int sales;

public:
	company(string name, int sales) {
		this->name = name;
		this->sales = sales;
	}
	void setName(string name) { this->name = name; }
	string getName() const { return this->name; }

	void setSales(string name) { this->sales = sales; }
	int getSales() const { return this->sales; }

	void addEmployee(employee*e) {
		emps.push_back(e);
	}

	void removeEmployee(string name) {
		int count = 0;
		for (employee*e : emps) {
			count++;
			if (e->getName() == name){
				delete e;
				emps.erase(emps.cbegin() + count - 1);
				break;
			}
		}
	}

	void info() {
		cout << "\n Company:\t" << name
			<< "\n Sales:\t" << sales << "$";
		for (employee*e : emps)
		{
			cout << "\n ---------------------------------\n";
			cout << " position: " << string(typeid(*e).name()).substr(6) << endl;
			e->info();
			cout << "\n Salary: " << e->getCoeff()*sales << " $" << endl;
		}

	}

	void report() {
		cout << "\n--------------------------------------\n"
			<< "\n Report about Company - " << name
			<< "\n Number of employees:\t" << emps.size()<<endl;
		for (employee*e : emps) {
			cout <<" -"<< string(typeid(*e).name()).substr(5) << endl;
			}
			cout<<"\n Sales:\t"<<sales
			<< "\n--------------------------------------\n";
	}

	company(const company&) = delete;
	company& operator=(const company&) = delete;

	~company() {
		for (employee*e : emps) {
			delete e;
		}
	}
};