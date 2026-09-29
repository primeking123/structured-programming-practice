#include <stdio.h>

int main(){
    int count ;
    int num;
    int sum = 0;
    printf("How many numbers: ");
    scanf("%d",&count);

    for(int i=0;i<count;i++){

        printf("Enter the number:");
        scanf("%d",&num);
        

        sum +=num;
        
    }

    double average = (double)sum / count;
    printf("Sum:%d\n",sum);

    printf("Average: %.2f\n", average);
    





    return 0;
}