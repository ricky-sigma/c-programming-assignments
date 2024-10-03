//code to determine if someonne is suitable for loan
//author CT101/g/22039/24

#include <stdio.h>
int main (){
int age;
int income;

 printf("Hello Customer please enter your age : \n");
    scanf("%d" ,&age);

  if(age < 21 ){
    printf("unfortunately , we are unable to offer you a loan at this time \n");
  }else{
    printf("what is your annual income in Sh : ");
      scanf("%d" , &income);
      if(income < 21000){
          printf("unfortunately , we are unable to offer you a loan at this time \n");
        }else{
          printf("congratulations you qualify for a loan \n");
        }
  }

  return 0;
}