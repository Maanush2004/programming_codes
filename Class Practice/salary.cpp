/* Write a C++ program by creating an 'Employee' class having the following functions and print the final salary
 * 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters.
 * 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
 * 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day
 *      is more than 6 hours 
 *
 * Input constraints :
 * - The initial salary of the employee is an integer between 0 and 1000 (inclusive)
 * - The number of work hours per day is an integer between 1 and 10 (inclusive)
 *
 * Output constraints :
 * - The final salary of the employee is an integer between 0 and 1000 (inclusive)
 **/
 
#include <iostream>

using namespace std;

class Employees {
    public :
            int salary, hours, final_salary;

            void getInfo() {
                salary_input :
                    cout << "Enter the salary" <<endl;
                    cin >> salary;
                if (salary < 0 | salary > 1000) {
                    cout << "Enter salary between 0 and 1000" << endl;
                    goto salary_input;
                }
                hours_input:
                    cout << "Enter work hours" <<endl;
                    cin >> hours;
                if (hours < 0 | hours > 10) {
                    cout << "Enter the work hours between 1 and 10" << endl;
                    goto hours_input;
                }
                final_salary = salary;
            }
            
            void AddSal() {
                if (salary < 500) {
                    final_salary += 10;
                }
            }
            
            void AddWork() {
                if (hours > 6) {
                    final_salary += 5;
                }
            }
            
            int Final_salary() {
                getInfo();
                AddSal();
                AddWork();
                if (final_salary > 1000) {
                    final_salary = 1000;
                }
                return final_salary;
            }
};

int main() {
    // Write C++ code here
    int salary;
    Employees Employee1;
    cout << Employee1.Final_salary();
    return 0;
}

