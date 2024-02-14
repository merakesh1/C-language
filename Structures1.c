#include<stdio.h>
#include<string.h>

void main(){
    /* int matrix[3][4];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++){
            matrix[i][j]=i+j;
        }
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 4; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n\n");
    } */
    /* char names[2][10];
    char dummy;
    int rollNumbers[2];
    float marks[2];

    int i;
    for(i=0;i<3;i++){
        printf("enter name, roll number and marks: ");
        scanf("%s %d %f",&names[i],&rollNumbers[i],&marks[i]);
    }

    for(i=0;i<3;i++){
        printf("name: %s\n",names[i]);
        printf("roll number: %d\n",rollNumbers[i]);
    } */
    struct student
    {
        /* data_type nameothemember */
        int id;
        char name[10];
        float marks;
    }

    typedef struct student student;

    student s1;
    student s2;

    s1.id=1;
    strcpy(s1.name,"rakesh");
    s1.marks=96;

    s2.id=2;
    strcpy(s2.name,"bushra");
    s2.marks=98;

    printf("id: %d\n",s1.id);
    printf("name: %s\n",s1.name);
    printf("marks: %f\n",s1.marks);

    printf("id: %d\n",s2.id);
    printf("name: %s\n",s2.name);
    printf("marks: %f\n",s2.marks);

}