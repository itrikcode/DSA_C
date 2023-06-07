#include<stdio.h>
void toh(int n ,char s,char d, char t){
    if(n>=1){
        //move  n-1 disk from source to temproal with the help destination
        toh(n-1,s,t,d);
        printf("\n Move the disk from Tower %c to Tower %c ",s,d);
        toh(n-1,s,d,t);
    }
}
int main(){
    int n =0;
    printf("Enter Number of Disk :");
    scanf("%d",&n);
    toh(n,'S','D','T');
    return 0;
}