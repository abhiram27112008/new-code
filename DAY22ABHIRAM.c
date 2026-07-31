//FIND THE FACTORIAL OF A NUMBER
/*#include <stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    print
    f("Factorial=%d",factorial(n));
    return 0;
}
*/


//FIBONACCI SERIES
/*#include<stdio.h>
int main(){
int n,i;
int a=0,b=1,c;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Fibonacci series:");
for(i=1;i<=n;i++){
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;}
    return 0;
}
*/


//PROGRAM TO CHECK IF A NUMBER IS PALINDROME
/*#include<stdio.h>
int main(){
    int n,temp,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;}*/



//PROGRAM TO REVERSE A NUMBER
/*#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse = %d",rev);
    return 0;
    }
*/


//SWAP TWO NUMBERS
/*#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter two number:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;}
*/






























































































































































































































































































