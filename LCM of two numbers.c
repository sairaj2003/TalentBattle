/*
LCM OF TWO NUMBERS
*/
#include <stdio.h>

int lcm(int num1,int num2)
{
    int low=(num1 < num2) ? num1 : num2;
    int lcm=1;
    while(1)
    {
        if(low%num1==0 && low%num2==0)
        {
            lcm=low;
            break;
        }
        low++;
    }
    return lcm;
}

int main() {
    int num1,num2;
    printf("\nEnter first number:");
    scanf("%d",&num1);
    
    printf("\nEnter Second number:");
    scanf("%d",&num2);
    
    int result=lcm(num1,num2);
    printf("\nLCM of %d and %d is %d",num1,num2,result);
    return 0;
}
