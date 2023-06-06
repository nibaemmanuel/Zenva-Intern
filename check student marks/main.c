#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello welcome to my average calculation!\n");
    printf("enter the number of students:");
    int studNum,coef[50];
    float totalmark[50], average[50];
    int totalcoefficient[50];
    scanf("%d",&studNum);
    while(studNum<0){
        printf("the number you entered is wrong,so enter another one");
        scanf("%d",&studNum);
    }

    printf("Enter the number of subjects for each student\n");
    for(int i=0;i<studNum;i++){
         printf("enter the number of subjects for student  %d:  ",i+1);
         int subNum;
         scanf ("%d",&subNum);
         while(subNum<4 || subNum>10){
            printf("wrong input\n Enter valid number of subjects\n");
            scanf("%d",&subNum);
         }
            float marks;
            int coefficient;
            totalmark[i] = 0.0;
            totalcoefficient[i] = 0.0;
            for(int j = 0; j<subNum;j++){
                printf("enter the marks for subject %d:",j+1);
                scanf("%f",&marks);
                printf("Enter its coefficient: ");
                scanf("%d",&coefficient);
                totalmark[i]+= (marks*coefficient);
                totalcoefficient[i] = totalcoefficient[i] + coefficient;
            }

        }


        for(int i=0;i<studNum; i++){
            average[i] = totalmark[i] / totalcoefficient[i];
        }
        printf("******Result*******\n");

        for(int i =0; i<studNum; i++){
            printf("Student %d\n", i+1);
            printf("total marks %.2f\n",totalmark[i]);
            printf("total coefficients %d\n", totalcoefficient[i]);
            printf("Average %.2f\n", average[i]);
        }




    return 0;
}
