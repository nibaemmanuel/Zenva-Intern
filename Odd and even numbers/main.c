#include <stdio.h>
#include <stdlib.h>

   int main(){
int num;
printf("Welcome to our program:\n");
printf("Our program help to check if a number is odd or even:\n");
printf("Enter an integer:\n");
scanf("%d",&num);
//true if the number is perfectly divided by 2
if(num % 2 ==0)
{

    printf("%d is even.",num);
}
else{

    printf("%d is odd.",num);
}


    return 0;
}
