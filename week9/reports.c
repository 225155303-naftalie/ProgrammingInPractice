#include <stdio.h>
#include "reports.h"
#include "employees.h"
#include "budget.h"

void employeeReport(void)
{
    printf("\n--- EMPLOYEE REPORT ---\n");
    printf("Payroll total: %.2f\n", calculatePayrollTotal());
}

void budgetReport(void)
{
    printf("\n--- BUDGET REPORT ---\n");
    printf("Budget balance: %.2f\n", calculateBudgetBalance(500000, 350000));
}