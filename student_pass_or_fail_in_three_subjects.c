/*Q2 Write a programe to determine whether a student has passed or failed . To pass a student requires a total of 40% and at least 33% in each subject . Assume there are three subjects and take the marks as input from the user. (each subject 100 marks) */

#include<stdio.h>
int main(){
int m1,m2,m3; // m1,m2,m3 is variable for store marks 
printf("Enter the all three marks=");
scanf("%d %d %d",&m1,&m2,&m3);  //Takeinput all subjects marks 
printf("The marks are %d , %d and %d \n",m1,m2,m3);
if(m1<33 || m2<33 || m3<33){//Check themarks are less than 33 or not
printf("You are fail due to less marks in aIndividual subject\n");
}
else if((m1+m2+m3)/3 < 40){ //check ifpercentage is less than 40
printf("You are fail due to lesspercentage");
}
else{ //If marks percentage is greater orequal than 40
printf("You are passed !");
}
return 0;
}