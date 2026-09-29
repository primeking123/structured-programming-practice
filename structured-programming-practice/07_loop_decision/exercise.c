#include <stdio.h>

int main(){
int sum =0;


for(int count =1;count<=99;count++){

    if(count%2!=0){
         sum+=count;
        
    }
}
  printf("%d",sum);
return 0;
}