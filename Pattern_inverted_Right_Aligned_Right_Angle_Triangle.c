/*      Inverted Right-Aligned Right angle Triangle Shape 

* * * * *
  * * * *
    * * *
      * *
        *              */

#include<stdio.h>
int main(){
int n;
printf("Enter number of row=");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=1;j<=(n-i);j++){
        printf("  ");
    }
    for(int k=1;k<=i;k++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}