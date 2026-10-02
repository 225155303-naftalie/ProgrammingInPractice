#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void)
{
    int choice;

    do {
        printf("\n=====================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Add Budget\n");
        printf("4. Employee Report\n");
        printf("5. Budget Report\n");
        printf("6. Exit\n");
        printf("=====================================\n");
        printf("Enter choice: ");

        choice = readInt();

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                listEmployees();
                break;
            case 3:
                addBudget();
                break;
            case 4:
                employeeReport();
                break;
            case 5:
                budgetReport();
                break;
            case 6:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 6);

    return 0;
}