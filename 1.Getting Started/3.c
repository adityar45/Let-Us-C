/*3.If the marks obtained by a student in five different subjects are input through keyboard, write a program 
to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can
be obtained by a student in each subject is 100.*/

#include<stdio.h>
 int main()
 {
  int sub1,sub2,sub3,sub4,sub5;
  float percent,total;
  
  printf("Enter the marks of 1st subject :\t");
  scanf("%d",&sub1);
  printf("Enter the marks of 2nd subject :\t");
  scanf("%d",&sub2);
  printf("Enter the marks of 3rd subject :\t");
  scanf("%d",&sub3);
  printf("Enter the marks of 4th subject :\t");
  scanf("%d",&sub4);
  printf("Enter the marks of 5th subject :\t");
  scanf("%d",&sub5);	
  
  total = sub1+sub2+sub3+sub4+sub5;
  percent = (total/500)*100;
  
  printf("\nAggregate marks out of 500 : %d\n",total);
  printf("Percentage : %f\n", percent); 
  
  
 }
