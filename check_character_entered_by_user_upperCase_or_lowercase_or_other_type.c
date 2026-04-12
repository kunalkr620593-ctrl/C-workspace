/*Write a program to determine whether a character entered by the user is lowercase or upper Case or special character or not character.*/

#include<stdio.h>
int main(){
char ch;
printf("Enter a character=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){ //compare if character is UpperCase
        printf("Entered character is Uppercase character.");
    }
    else if(ch>='a' && ch<='z'){ //Compare if character is Lowercase
        printf("Entered character is Lowercase character.");
    }
    else if(ch>='0' && ch<='9'){ //compare if character is not character
        printf("Entered character is Digit (not character)");
            
    }
    else{ //If entered character is special character
        printf("Entered character is Special character.");  
    }
    return 0;
}