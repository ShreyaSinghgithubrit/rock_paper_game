#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissors(char you, char comp)
{
    //condition for draw
    //RR
    //PP
    //SS
    if(you==comp)
    return 0;
    //condition for non draw
    //RP
    //PR
    //RS
    //SR
    //PS
    //SP
    if(you=='R' && comp=='P')
    return -1;
    else if(you=='P'&& comp=='R')
    return 1;
    if(you=='R' && comp=='S')
    return 1;
    else if(you=='S' && comp=='R')
    return -1;
    if(you=='P'&& comp=='S')
    return-1;
    else if(you=='S'&& comp=='P')
    return 1;
}
int main()
    {
char comp, you;
srand(time(0));
int number=rand()%100+1;
if(number<33)
comp='R';
else if(number<33 && number>66)
comp='P';
else
comp='S';
printf("Enter R for rock P for paper and S for scissors");
scanf("%c",&you);
int result=RockPaperScissors(you,comp);
printf(" you chose %c and computer chose %c",you,comp);
if(result==0)
printf("game draw");
else if(result==1)
printf("you win");
else
printf("you lose");
return 0;
    }
