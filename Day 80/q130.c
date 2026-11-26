//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int n,rollno,marks,i;
    fp=fopen("student.txt","w");
    if(fp==NULL){
        printf("Error\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter details of students %d:\n",i+1);
        printf("Name: ");
        scanf("%s",name);
        printf("Roll no: ");
        scanf("%d",&rollno);
        printf("Marks: ");
        scanf("%d",&marks);
        fprintf(fp,"%s %d %d\n",name,rollno,marks);
    }
    fclose(fp);
    fp=fopen("student.txt","r");
    if(fp==NULL){
        printf("Error\n");
        return 1;
    }
    printf("Student records: \n");
    while(fscanf(fp,"%s %d %d",name,&rollno,&marks)==3){
        printf("Name:%s||Roll:%d||Marks:%d\n",name,rollno,marks);
    }
    fclose(fp);
    return 0;
}
