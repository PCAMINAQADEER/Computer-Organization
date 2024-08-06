#include<iostream>
using namespace std;
//Function to calculate the monthly salary
double MonthlySalary(char department)
{
	double initial_salary;
	if (department == 'd')
	{
		initial_salary = 800;
	}
	if (department == 'm')
	{
		initial_salary = 700;
	}
	if (department == 'h')
	{
		initial_salary = 600;
	}
	return initial_salary;
}
//Function to calculate annual salary, takes department and monthly salary as input
double annual_salary(char department, double month_sal)
{
	double annual_salary;
	if (department == 'd')
	{
		annual_salary = (month_sal*12) + 2*(0.1*month_sal);//incremented by 10 pc twice
	}
	if (department == 'm')
	{
		annual_salary = (month_sal * 12) + 2*(0.08*month_sal);//incremented by 8 pc twice
	}
	if (department == 'h')
	{
		annual_salary = (month_sal * 12) + 2*(0.06*month_sal);//incremented by 6 pc twice
	}
	return annual_salary;
}
//Function to calculate total expense on salaries of all three departments
double total_expense(double total_annual_sal, int no_of_employees)
{
	double TOTAL_EXP = total_annual_sal*no_of_employees;
	return TOTAL_EXP;
}
int main()
{
	//Display the menu
	cout << "Choose your department: " << " type 'd' for DEVELOPER" << endl<< " 'm' for marketing" <<endl<< "'h' for Human Resource" << endl;
	char department;
	cin >> department;
	double salary;
	salary = MonthlySalary(department);
	cout << "Enter your experience in years" << endl;
	int experience;
	cin >> experience;
	if (experience > 2)
	{
		salary = salary + (50*(experience-2));// 50 increment per each year over 2 years
		cout << "Your new salary is " << salary << endl;
	}
	else
	{
		cout << "Your salary is same as before " << endl;
	}
	//Calculate Annual salary
	double ANNUAL_SAL;
	ANNUAL_SAL = annual_salary(department, salary);
	cout << "Your annual salary, including all bonuses is equal to " << ANNUAL_SAL << endl;
	//Calculate total expense for a department
	double Total_exp;
	int no_employees;
	cout << "How many employees the depatment has?" << endl;
	cin >> no_employees;
	Total_exp = total_expense(ANNUAL_SAL, no_employees);
	cout << "The total expense of the department on salaries is " << Total_exp << endl;
	return 0;
}