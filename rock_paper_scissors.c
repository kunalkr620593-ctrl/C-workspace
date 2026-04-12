//         -: Rock, Paper, Scissor 🎮:-    
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int n;
printf("Enter the number of round=");
scanf("%d",&n);
for(int i=1;i<=n;i++){
srand(time(0));
int player,computer=rand()%3;
//(0 --> rock , 1 --> paper , 2 --> scissor)   
printf("Choose 0 for rock, 1 for paper, 2 for scissor\n");
scanf("%d",&player);
printf("%d\n",computer);
if(player == 0 && computer ==0){
printf("It's a draw!\n");
} 
else if(player == 0 && computer == 1 ){
printf("You  lose!\n");
}
else if(player == 0 && computer == 2 ){
printf("You  win!\n");
}
else if(player == 1 && computer == 0 ){
printf("You  win!\n");
}
else if(player == 1 && computer == 1 ){
printf("It's a draw!\n");
}
else if(player == 1 && computer == 2 ){
printf("You  lose!\n");
}
else if(player == 2 && computer == 0 ){
printf("You  lose!\n");
}
else if(player == 2 && computer == 1 ){
printf("You  win!\n");
}
else if(player == 2 && computer == 2 ){
printf("It's a draw!\n");
}
}
return 0;
}