#include <stdio.h>

float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void displayMenu();
void displayWelcome();
int searchEmployee(int id, int ids[], int size);

int main()
{
    int choice;
    float amount, vat;
    float basic, housing, transport, salary;
    float revenue, expenses, balance;
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int searchID, position;

    displayWelcome();

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                vat = calculateVAT(amount);
                printf("VAT: %.2f\n", vat);
                break;

            case 2:
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                salary = calculateSalary(basic, housing, transport);
                printf("Gross salary: %.2f\n", salary);
                break;

            case 3:
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);
                balance = calculateBudget(revenue, expenses);
                printf("Budget balance: %.2f\n", balance);
                if (balance > 0) {
                    printf("Status: SURPLUS\n");
                } else if (balance < 0) {
                    printf("Status: DEFICIT\n");
                } else {
                    printf("Status: BALANCED\n");
                }
                break;

            case 4:
                printf("Enter employee ID: ");
                scanf("%d", &searchID);
                position = searchEmployee(searchID, employeeIDs, 5);
                if (position != -1) {
                    printf("Employee found at position %d.\n", position);
                } else {
                    printf("Employee not found.\n");
                }
                break;

            case 5:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}

void displayWelcome()
{
    printf("=====================================\n");
    printf("Welcome to the Municipal Financial\n");
    printf("Management System\n");
    printf("=====================================\n");
}

void displayMenu()
{
    printf("\n=====================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("=====================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("=====================================\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount)
{
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size)
{
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}