#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    int *ptr;
    printf("Enter range");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("%d",ptr);
    printf("Enter the element in the array ");
    for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));
    free(ptr);
    return 0;

}