#include<stdio.h>
int main(){
    char municipality[50];
    char mayor[50];
    int population;

printf("Municipal Financial Management system\n");

printf("Welcome to Windhoek Municipality\n\n");

printf("Enter Municipality: ");
scanf("%49s", municipality);

printf("Enter Mayor's Name: ");
scanf("%49s", mayor);
 
printf("Enter Population: ");
scanf("%d", &population);

printf("\n--------\n"); 

printf("MUNICIPALITY REPORT\n");
printf("------\n");
printf("Municipality: %s\n", municipality);
printf("Mayor's Name: %s\n", mayor);
printf("Population  : %d\n", population);

return 0;

}