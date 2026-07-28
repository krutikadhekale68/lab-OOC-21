#include<stdio.h>
int main()
{
    char name[50];
    int rollNo;
    char division;
    printf("Enter Name:");
    scanf("%s",name);
    printf("Enter Roll Number:");
    scanf("%d",&rollNo);
    printf("Enter Division:");
    scanf("%c",&division);
    printf("\nStudent Details\n");
    printf("Name:%s\n",name);
    printf("Roll Number:%d\n",rollNo);
    printf("Division:%c\n",division);
    return 0;
}