#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    
}
int main(){
    int n=0;
    printf("Enter Number :");
    scanf("%d",&n);
    int f =fact(n);
    printf("factorial of %d is %d",n,f);
}