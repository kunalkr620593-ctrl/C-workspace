/*Write a programe to  print even number, oddnumber and count how many even numbers,odd numbers from to 1 to Nth number*/
#include<stdio.h>
int main(){
int n,E_C=0,O_C=0;
printf("Enter Nth number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%2==0){
    printf("%d\t",i);
    E_C += 1;
}
}
printf("\nTotal even numbers %d from 1 to %d .",E_C,n);
for(int i=1;i<=n;i++){
if(i%2 != 0){
    printf("%d\t",i);
    O_C += 1;
}
}
printf("\nTotal odd numbers %d from 1 to %d .",O_C,n);
return 0;
}