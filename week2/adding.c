#include <stdio.h>
int main(){
   int num[4];
   int sum=0;
    float average;
     for(int i = 1; i <= 4; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num[i]);
          sum=sum + num[i];
 
    }
    printf("Number 1 is %d\n", num[0]);
    printf("Number 2 is %d\n", num[1]);
    printf("Number 3 is %d\n", num[2]);
    printf("Number 4 is %d\n", num[3]); 
    average = (float)sum / 4;

    printf("Sum=%.2f\n", sum);
    printf("Average=%.2f\n", average);

    return 0;
}