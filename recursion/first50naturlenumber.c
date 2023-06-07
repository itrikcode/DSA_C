#include<stdio.h>
void printFirst50(int n){
  if(n>=1){
    printf(" %d ",n);
    printFirst50(n-1);
  }
}
int main(){
    int n=85;
    printFirst50(n);
}