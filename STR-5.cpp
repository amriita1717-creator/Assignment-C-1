#include <stdio.h>

// Define a structure for employee salary components
struct EmployeeSalary {
    float basic_salary;
    float da; // Dearness Allowance
    float hra; // House Rent Allowance
    float gross_salary;
};

int main() {
	printf("AMRITA and 125113019\n");
    struct EmployeeSalary emp_salary;

    // Input basic salary
    printf("Enter the Basic Salary: ");
    scanf("%f", &emp_salary.basic_salary);

    // Calculate DA and HRA (example percentages)
    // You can modify these percentages or add conditional logic based on basic_salary
    emp_salary.da = 0.40 * emp_salary.basic_salary; // 40% of basic salary
    emp_salary.hra = 0.20 * emp_salary.basic_salary; // 20% of basic salary

    // Calculate Gross Salary
    emp_salary.gross_salary = emp_salary.basic_salary + emp_salary.da + emp_salary.hra;

    // Display the results
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary: %.2f\n", emp_salary.basic_salary);
    printf("Dearness Allowance (DA): %.2f\n", emp_salary.da);
    printf("House Rent Allowance (HRA): %.2f\n", emp_salary.hra);
    printf("Gross Salary: %.2f\n", emp_salary.gross_salary);

    return 0;
}
