#include <stdio.h>
#include <string.h>

int main()
{
    float salaries[50];
    float budgets[10];
    char registrations[20][20];
    int i, j;
    float temp;
    float total, average, highest, lowest;
    float searchSalary;
    int found;
    char searchReg[20];

    printf("=====================================\n");
    printf("MUNICIPAL INFORMATION MANAGEMENT SYSTEM\n");
    printf("=====================================\n\n");

    printf("--- PART A: EMPLOYEE SALARIES ---\n\n");

    for (i = 0; i < 5; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\n--- All Salaries ---\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    total = 0;
    highest = salaries[0];
    lowest = salaries[0];

    for (i = 0; i < 5; i++) {
        total = total + salaries[i];
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    average = total / 5;

    printf("\n--- Salary Statistics ---\n");
    printf("Total:   %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Highest: %.2f\n", highest);
    printf("Lowest:  %.2f\n", lowest);

    printf("\nEnter salary to search: ");
    scanf("%f", &searchSalary);

    found = 0;
    for (i = 0; i < 5; i++) {
        if (salaries[i] == searchSalary) {
            found = 1;
            printf("Found at position %d\n", i + 1);
            break;
        }
    }
    if (!found) {
        printf("Salary not found.\n");
    }

    printf("\n--- PART B: DEPARTMENT BUDGETS ---\n\n");

    for (i = 0; i < 5; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\n--- All Budgets ---\n");
    for (i = 0; i < 5; i++) {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    total = 0;
    for (i = 0; i < 5; i++) {
        total = total + budgets[i];
    }

    average = total / 5;

    printf("\nTotal Budget:   %.2f\n", total);
    printf("Average Budget: %.2f\n", average);

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Sorted Budgets (Lowest to Highest) ---\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f\n", budgets[i]);
    }

    printf("\n--- PART C: VEHICLE REGISTRATIONS ---\n\n");

    for (i = 0; i < 3; i++) {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- All Registrations ---\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", registrations[i]);
    }

    printf("\nEnter registration to search: ");
    scanf("%19s", searchReg);

    found = 0;
    for (i = 0; i < 3; i++) {
        if (strcmp(registrations[i], searchReg) == 0) {
            found = 1;
            printf("Found at position %d\n", i + 1);
            break;
        }
    }
    if (!found) {
        printf("Registration not found.\n");
    }

    printf("\n=====================================\n");
    printf("END OF REPORT\n");
    printf("=====================================\n");

    return 0;
}