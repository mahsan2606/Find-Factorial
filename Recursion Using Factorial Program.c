/*Program to Find Factorial Using Recursion*/
#include<stdio.h>
int fact (int); //Function Prototype//
main ()
{
    int n, facto;
    printf("Enter any Numbers: ");
    scanf("%d", &n);
    facto = fact(n);
    printf("\nFactorial is: %d\n", facto);
}
/*Function Declaration*/
int fact(int k)
{
    int f;
    if (k==1)   //Terminating Condition//
    {
        return(1);
    }
    else
    {
        f = k*fact(k-1);    //Recursive Call//
        return(f);
    }
}
