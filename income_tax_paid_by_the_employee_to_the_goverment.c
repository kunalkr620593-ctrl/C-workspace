/*Calculate income tax paid by an employee to the government as per the slabs mentioned below:

Income Slab	    Tax 
 
0   - 2.5L 

2.5 — 5.0L       5%

5.0L- 10.0       20%

Above 10.0 L     30%
(Note:- That there is no tax below 2.5L .Take income ammount as input from user)
*/
#include<stdio.h>
int main(){
int income;
float tax=0;
printf("Enter income:");
scanf("%d",&income); //take income input
if(income <= 250000){ 
    tax=0;      
}
else if(income > 250000 && income <= 500000){
    tax=0.05*(income - 250000);  //First slab income tax
}
else if(income > 500000 && income <= 1000000){
    tax=(0.05*(500000 - 250000))+ (0.2*(income -500000)); //First slab + Second slab tax
}
else{
        //First slab          +  Second slab           + Third slab taxes
    tax=(0.05*(500000-250000))+ (0.2*(1000000-500000) )+ (0.3*(income-1000000)) ;
}
//Goverment take tax slab by slab so total correct tax is slab1+slab2+slab3
printf("The total tax you need to pay is %.3f Rs.",tax);
    return 0;
}