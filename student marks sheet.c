#include<stdio.h>
void main()
{
    int marks;
    char grade;
    printf("Enter the marks obtained by the student:\n");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
        grade = 'A';
    else if(marks>=70 && marks<=84)
        grade = 'B';
    else if(marks>=55 && marks<=69)
        grade = 'C';
    else if(marks>=40 && marks<=54)
        grade = 'D';
    else if(marks>=0 && marks<=39)
        grade = 'F';
    else if(marks<0 || marks>100)
    {
        printf("INVALID MARKS//please enter valid marks//");
        return 0;
    }
    printf("Grade: %c\n",grade);
    return 0;
}
