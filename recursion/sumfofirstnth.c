#include<stdio.h>
int sumOfNth(int);

int main(){
   int n;
   int sum ;
   printf("Enter Number : ");
   scanf("%d ",&n);
  sum = sumOfNth(n);
  printf("sum of %d is %d: ",n,sum); 
  return (0);
}
int sumOfNth(int n){
    int res;
     if(n==1){
        return (1);
     }else
        res = n+sumOfNth(n-1);
    return (res);
}