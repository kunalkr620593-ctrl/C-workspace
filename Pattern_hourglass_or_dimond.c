/*     Diamond / Hourglass(⌛) pattern 

* * * * * 
  * * * 
    * 
  * * * 
* * * * *

*/
#include<stdio.h>
int main(){
int n,m;
printf("Enter Number of rows (only odd number)=");
scanf("%d",&m);
if(m%2==1){
n=(m+1)/2;
    for(int i=n;i>=1;i--){
    for(int j=n;j>i;j--){
        printf("  ");
    }
    for(int k=1;k<=2*i-1;k++){
        printf("* ");
    }
    printf("\n");
    }
    for(int a=2;a<=n;a++){
        for(int b=n;b>a;b--){
            printf("  ");
        }
        for(int c=1;c<=2*a-1;c++){
            printf("* ");
        }
        printf("\n");
}  
}  else{
    printf("Entered number of rows is not odd !");
        
}
    return 0;
}