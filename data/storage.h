#ifndef STORAGE_H
#define STORAGE_H

void saveEmployee(int id, const char *name, double salary);
void loadEmployees(void);

void saveBudget(double revenue, double expenses);
void loadBudgets(void);

#endif
