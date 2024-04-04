#include<iostream>
using namespace std;

       union Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       }E;

       int main()
       {

                    cout << "\nEnter Employee Id : ";
                    cin >> E.Id;
                    cout << "Employee Id : " << E.Id;

                    cout << "\n\nEnter Employee Name : ";
                    cin >> E.Name;
                    cout << "Employee Name : " << E.Name;

                    cout << "\n\nEnter Employee Age : ";
                    cin >> E.Age;
                    cout << "Employee Age : " << E.Age;

                    cout << "\n\nEnter Employee Salary : ";
                    cin >> E.Salary;
                    cout << "Employee Salary : " << E.Salary;
			
			cout << endl << sizeof(E);
			cout << endl << sizeof(E.Id);
			cout << endl << sizeof(E.Name);
			cout << endl << sizeof(E.Age);
			cout << endl << sizeof(E.Salary);
			
			return 0;
       }
 
