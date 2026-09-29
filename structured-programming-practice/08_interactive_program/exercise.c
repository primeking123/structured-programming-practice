#include <stdio.h>

int main(){
    float principal =0;
    double rate,interest;
    int days;


   while(true){

    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&principal);

    if(principal == -1){
        break;
    }

    printf("Enter interest rate: ");
    scanf("%lf",&rate);

    printf("Enter term of the loan in days: ");
    scanf("%d",&days);

    interest = principal * rate * days / 365;

    printf("The interest charge is UGX %f\n",interest);



   }













    return 0;
}