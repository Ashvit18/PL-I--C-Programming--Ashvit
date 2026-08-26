*
write a program to make use of basic input output function using different data type 
solution (2) user defined  value 
*/
#include <stdio.h>
int main()
{
int rollnum;
float per;
char grade;
printf("\n Enter student roll number:");
scanf(" %d", &rollnum);
printf("\n Enter students percentage:");
scanf("%f", &per );
printf("\nEnter student grade:");
scanf ("%c", &grade);
printf("/n---- student information---\n");
printf("\n roll number is :%d", rollnum);
printf("\n percentage is %f", per); 
printf("\ngrade :%c", grade);
return 0;
}

