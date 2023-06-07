#include<stdio.h>
#include<stdlib.h>

struct Student
{
   int roll;
   float marks;
   int age;
   char name[20];
   char cname[30];
};

struct Book{
    int no_page;
    float price;
    char aname[20];
    char name[30];
};

struct Employee
{
    int eno;
    char ename[30];
    float esal;
};


 
int main(void){
    struct Student s;
    s.roll=100;
    s.age=23;
      printf("%d ,%d,%f, \n",s.age,s.roll,s.marks);
   struct Student *std;
   std = &s;
   std->age=1;
   std->roll=12;
   std->marks=50.0;
   printf("%d ,%d,%f,",s.age,s.roll,s.marks);
}

 