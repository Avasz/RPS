//RPSV_2.c
//###########################################################
//###########################################################
// Simple game of rock, paper & scissors
// Avash Mulmi <avashmulmi@gmail.com>
 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


void showoff() //This functions is just for showoff.
{
	printf("****************************************************************\n****************************************************************\n**************     PLAY ROCK,PAPER & SCISSORS     **************\n****************************************************************\n******************************     Prepared By: Avash     ******\n\n\n\n");
}


int main()
{
  int n=0,co,uw=0,cw=0,dr=0; //co=computer option, uw=user wins, cw=computer wins & dr=draw
  char a[10];
  showoff();
  srand(time(NULL));
  
  printf("Choose rock, paper or scissors as your weapon against computer.\n");
  printf("Rules:\nPaper covers rock and wins.\n");
  printf("Rock destroys the scissors and wins.\n");
  printf("Scissors cuts the papers and wins.\n");
  printf("Enter either rock, paper or scissors when prompted.\n");
  printf("\nThe game will now begin.\nYou will keep on playing untill you type exit to quit.\n\n");
  
  
  g:
  
 // do{
    printf("Your weapon: "); 
    scanf("%s",a);
   
    
    if(strcmp(a,"exit")==0)
    {
		printf("\nStatistics:\nTotal Game Played: %d\nNumber of times you won: %d\nNumber fo times computer won: %d\nNumber of draw: %d\n",uw+cw+dr,uw,cw,dr);
		
		if(cw>uw)
		{
			printf("Seems like you have lost...... Better luck next time\n");
		}
		else if(uw>cw)
		{
			printf("Good job!! You are the winner!! You may not be so lucky next time!!\n");
		}
		else
		{
			printf("The game was a draw..");
		}
		
		exit(0);
	}
  //}while((strcmp(a,"rock")!=0) && (strcmp(a,"paper")!=0) && (strcmp(a,"scissors")!=0));
  
  
  if(strcmp(a,"rock")==0)
  {
	  n=0;
  }
  
  else if(strcmp(a,"paper")==0)
  {
	  n=1;
  }
 
  else if(strcmp(a,"scissors")==0)
  {
	  n=2;
  }
  else
  {
	  printf("That weapon doesnt exist.\n\n");
	  goto g;
  }
	  
  co=rand() % 3;
  
  switch(co)
  {
    case 0:
      printf("Computer's weapon: ROCK.\n\n");
      break;
    case 1:
      printf("Computer's weapon: PAPER.\n\n");
      break;
    default:
      printf("Computer's weapon: SCISSORS.\n\n");
      break;
  }
  
  
  if(n==co)
  {
    printf("*****Its a draw!!!!!!!*****\n\n");
    dr++;
  }
  
  
  else if((n==0 && co==1) || (n==1 && co==2) || (n==2 && co==0))
  {
    printf("******Sorry!! YOU LOST!!!****** :(\n\n");
    cw++;
  }
  
  
  else
    {
		printf("######Congratulations!! YOU WON!!!###### :D\n\n\n");
		uw++;
     } 
    
  
  goto g;
  return 0;
}
