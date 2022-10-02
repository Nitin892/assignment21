1. Define a structure Employee with member variables id, name, salary

struct Employee{
   int id;
   char name[20];
   float salary;
};
#include <stdio.h>
int main()
{

   return 0;
}

2. Write a function to take input employee data from the user. [ Refer structure from
  question 1 ]

struct Employee{
   int id;
   char name[20];
   float salary;
};
#include <string.h>
#include <stdio.h>
int main()
{
   struct Employee e;
   printf("Enter id: ");
   scanf("%d",&e.id);
   printf("Enter name: ");
   fflush(stdin);
   fgets(e.name,20,stdin);
   printf("Enter salary: ");
   scanf("%f",&e.salary);
   printf("%d %s %f",e.id,e.name,e.salary);
   return 0;
}

3. Write a function to display employee data. [ Refer structure from question 1 ]

#include <stdio.h>
struct Employee{
   int id;
   char name[20];
   float salary;
};

void display(struct Employee data)
{
   printf("\nid is %d",data.id);
   printf("\nname is %s",data.name);
   printf("\nsalary is %.2f",data.salary);

}
#include <string.h>

int main()
{
   struct Employee e={1,"nitin",20000};
   display(e);
   return 0;
}

4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]

#include <stdio.h>
struct Employee{
   int id;
   char name[20];
   float salary;
};

int highSalEmployee(struct Employee e[],int size)
{
   float max =e[0].salary;
   int flag=0;
   for (int i = 1; i < size; ++i) {
       if(max < e[i].salary)
       {
           max=e[i].salary;
           flag=i;
       }
   }
   return flag;
}

int main() {
   struct Employee e[5];
   printf("id, name, salary: ");
   for (int i = 0; i < 5; ++i) {
       scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
   }

   int t=highSalEmployee(e,5);
   printf("%s ",e[t].name);

   return 0;
}


5. Write a function to sort employees according to their salaries [ refer structure from
question 1]

#include<stdio.h>
struct Employee {
   int id;
   char name[20];
   float salary;
};

void sortBySalary(struct Employee e[],int size)
{
   struct Employee temp;
   for (int i = 0; i < size-1; ++i)
   {
       for (int j = 0; j < size-i-1; ++j)
       {
           if(e[j].salary>e[j+1].salary)
           {
               temp = e[j];
               e[j]= e[j + 1];
               e[j + 1] = temp;
           }
       }
   }
}

int main()
{
   struct Employee e[3];
   printf("enter id ,name and salary");
   for (int i = 0; i < 3; ++i)
   {
       scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
   }



   sortBySalary(e,3);
   for (int i = 0; i < 3; ++i) {
       printf("%d %s %f\n",e[i].id,e[i].name,e[i].salary);
   }


   return 0;
}

6. Write a function to sort employees according to their names [refer structure from
question 1]


#include <stdio.h>
#include <string.h>
struct Employee{
   int id;
   char name[20];
   float salary;
};

void sortName(struct Employee e[])
{
   int r=0;
   struct Employee t;
   for (int i = 0; i < 3-1; ++i) {
       for (int j = 0; j < 3-1-i; ++j) {

           if(e[j].name[0]>e[j+1].name[0])
           {
               t=e[j];
               e[j]=e[j+1];
               e[j+1]=t;
           }
       }

   }
}
int main()
{
   struct Employee e[3];
   printf("Id ,name and salary");
   for (int i = 0; i < 3; ++i) {
       scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
   }
   sortName(e);
   for (int i = 0; i < 3; ++i) {
       printf("%d %s %f\n",e[i].id,e[i].name,e[i].salary);
   }
   return 0;
}


7. Write a program to calculate the difference between two time periods.

#include<stdio.h>
struct Time {
   int hour;
   int  minute;
   int second;
};


int main()
{
   struct Time start,stop,difference;
   printf("\nEnter starting  hour, minutes and second: ");
   scanf("%d %d %d",&start.hour,&start.minute,&start.second);

   printf("\nEnter ending  hour, minutes and second: ");
   scanf("%d %d %d",&stop.hour,&stop.minute,&stop.second);

   difference.hour=stop.hour-start.hour;
   difference.minute=stop.minute-start.minute;
   difference.second=stop.second-start.second;

   printf("\nhour-%d minute-%d second-%d",difference.hour,difference.minute,difference.second);
   return 0;
}

8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct Student {
   char name[20];
   char lastName[20];
   int rollno;
   int class;
};


int main()
{
   struct Student s[3];

   for (int i = 0; i < 3; ++i)
   {
       printf("Enter name :");
       fgets(s[i].name,20,stdin);
       fflush(stdin);

       printf("Enter lastName: ");
       fgets(s[i].lastName,20,stdin);
       fflush(stdin);

       printf("Enter rollno: ");
       scanf("%d",&s[i].rollno);
       printf("Enter class: ");
       scanf("%d",&s[i].class);
       fflush(stdin);
       printf("\n");

   }

   for (int i = 0; i < 3; ++i) {
       printf("%s %s %d %d\n",s[i].name,s[i].lastName,s[i].rollno,s[i].class);
   }
   return 0;
}

9. Write a program to store information of n students and display them using structure

#include<stdio.h>
struct Student {
   char name[20];
   char lastName[20];
   int rollno;
   int class;
};


int main()
{
   int size;
   scanf("%d",&size);
   fflush(stdin);
   struct Student s[size];

   for (int i = 0; i < size; ++i)
   {
       printf("Enter name :");
       fgets(s[i].name,20,stdin);
       fflush(stdin);

       printf("Enter lastName: ");
       fgets(s[i].lastName,20,stdin);
       fflush(stdin);

       printf("Enter rollno: ");
       scanf("%d",&s[i].rollno);
       printf("Enter class: ");
       scanf("%d",&s[i].class);
       fflush(stdin);
       printf("\n");

   }

   for (int i = 0; i < size; ++i) {
       printf("%s %s %d %d\n",s[i].name,s[i].lastName,s[i].rollno,s[i].class);
   }
   return 0;
}


10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student

#include<stdio.h>

struct Student{

   struct Marks{
       int rollno;
       char name[20];
       float chem_marks;
       float maths_marks;
       float phy_marks;
   } m;
};


int main()
{

   struct Student s[5];
   printf("Enter rollno,name,chem_marks,maths_marks,phy_marks");
   for (int i = 0; i < 5; ++i) {
       scanf("%d %s %f %f %f",&s[i].m.rollno,s[i].m.name,&s[i].m.chem_marks,&s[i].m.maths_marks,&s[i].m.phy_marks);
   }

   for (int i = 0; i < 5; ++i) {
       float percent=((s[i].m.phy_marks+s[i].m.maths_marks+s[i].m.chem_marks)/300)*100;
       printf("Student %s percent is %.2f\n",s[i].m.name,percent);
   }
   return 0;
}


