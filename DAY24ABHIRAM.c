  /*#include<stdio.h>
int main(){
    int n;
printf("Enter a number:");
scanf("%d",&n);
if(n%2==0)
    printf("Even number");
else
    printf("Odd number");
return 0;}*/


#include<stdio.h>
int main(){
    int n,rem,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
if(temp=rev)
    printf("Palindrome number");
else
    printf("Not a palindrome number");
return 0;}
































































