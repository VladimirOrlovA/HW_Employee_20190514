#include"company.h"
#include"director.h"
#include"manager.h"
#include"worker.h"

void main() {

	company a("Celebration", 1000);
	a.addEmployee(new director("John", 35, 10, "university", 10));
	a.addEmployee(new manager("Bill", 25, 5, "college", 5));
	a.addEmployee(new worker("Daniel", 23, 5, "secondary school", 3));
	a.addEmployee(new worker("Brad", 27, 15, "secondary school", 10));
	

	a.info();
	a.report();
	a.removeEmployee("Brad");
	a.report();

	cout << "\n\n<<<<<<<<<-------->>>>>>>>>\n\n";

	system("pause");
}