#include <stdio.h>
int main()
{
int num;
float sump=0,sumn=0,countp=0,countn=0;
printf("Enter -1 to exit...\n");

//loop to check the sum of postive and odd numbers
while(num!=-1)
{
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        sump=sump+num;
        countp++;
        float avgpos = sump/countp;
    }
    else if(num<0 && num!=-1)
    {
        sumn=num+sumn;
        countn++;
        float avgneg =sumn/countn;
    }
    }
printf("The average of negative numbers is: %.2f\n", avgneg);
printf("The average of positive numbers is: %.2f\n",avgpos);   
}