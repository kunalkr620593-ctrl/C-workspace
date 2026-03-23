/*Write a program to find greatest of four numbers entered by the user.*/
#include<stdio.h>
int main(){
int n1,n2,n3,n4;
printf("Enter 4 numbers=");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4); //Entered four numbers
if(n1>=n2 && n1>=n3 && n1>=n4){ //First number is compared by other three numbers
printf("%d number is greatest",n1);
}
else if(n2>=n1 && n2>=n3 && n3>=n4){ // Second number is compared by other three numbers
printf("%d number is greatest",n2);    
}
else if(n3>=n1 && n3>=n2 && n3>=n4){ //// Third number is compared by other three numbers
    printf("%d number is greatest",n3);
}
else{ //If all three number is small then fourth number is print
printf("%d number is greastest",n4);
}
    return 0;
}