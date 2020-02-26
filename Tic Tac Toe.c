#include<stdio.h>
#include<stdlib.h>
int turn=1;
int error=0;
int loop;
char pos[9];
char ui;
void reset();
void draw();
void input();
void err();
void check();
int main()
{

	reset();
	for(loop=0;loop<=8;loop++)
	{
			
		draw();
		input();
		check();
	}
	return 0;
}
void check()
{
	if((pos[0] == 'X' && pos[3] == 'X' && pos[6] == 'X')||
		(pos[1] == 'X' && pos[4] == 'X' && pos[7] == 'X')||
		(pos[2] == 'X' && pos[5] == 'X' && pos[8] == 'X')||
		(pos[0] == 'X' && pos[1] == 'X' && pos[2] == 'X')||
		(pos[3] == 'X' && pos[4] == 'X' && pos[5] == 'X')||
		(pos[6] == 'X' && pos[7] == 'X' && pos[8] == 'X')||
		(pos[0] == 'X' && pos[4] == 'X' && pos[8] == 'X')||
		(pos[6] == 'X' && pos[4] == 'X' && pos[2] == 'X')
	)
	{
		system("cls");
		printf("Player 1 Wins!\n");
		printf("Press any key to restart...");
		getch();
		reset();
		loop=0;
	}
	else if((pos[0] == 'O' && pos[3] == 'O' && pos[6] == 'O')||
		(pos[1] == 'O' && pos[4] == 'O' && pos[7] == 'O')||
		(pos[2] == 'O' && pos[5] == 'O' && pos[8] == 'O')||
		(pos[0] == 'O' && pos[1] == 'O' && pos[2] == 'O')||
		(pos[3] == 'O' && pos[4] == 'O' && pos[5] == 'O')||
		(pos[6] == 'O' && pos[7] == 'O' && pos[8] == 'O')||
		(pos[0] == 'O' && pos[4] == 'O' && pos[8] == 'O')||
		(pos[6] == 'O' && pos[4] == 'O' && pos[2] == 'O')
	)
	{
		system("cls");
		printf("Player 2 Wins!\n");
		printf("Press any key to restart...");
		getch();
		reset();
		loop=0;
	}
	else if(loop==8)
	{
		system("cls");
		printf("It's a Draw!'\n");
		printf("Press any key to restart...");
		getch();
		reset();
	}
}
void draw()
{
	
	system("cls");
	printf("\t\t|\t\t|\t\t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",pos[0],pos[1],pos[2]);
	printf("\t\t|\t\t|\t\t\n");
	printf("-----------------------------------------------------\n");
	printf("\t\t|\t\t|\t\t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",pos[3],pos[4],pos[5]);
	printf("\t\t|\t\t|\t\t\n");
	printf("-----------------------------------------------------\n");
	printf("\t\t|\t\t|\t\t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",pos[6],pos[7],pos[8]);
	printf("\t\t|\t\t|\t\t\n\n");
}
void input()
{
	do
	{
		if(turn==1)
		{
			printf("Player 1:\n:>");
			ui=getch();
		}
		else
		{
			printf("Player 2\n:>");
			ui=getch();
		}
		switch (ui)
		{
			case '1':
			{
				error=0;
				if(turn==1)
				{
					if(pos[0]=='1')
					{
						pos[0]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[0]=='1')
					{
						pos[0]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '2':
			{
				error=0;
				if(turn==1)
				{
					if(pos[1]=='2')
					{
						pos[1]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[1]=='2')
					{
						pos[1]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '3':
			{
				error=0;
				if(turn==1)
				{
					if(pos[2]=='3')
					{
						pos[2]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[2]=='3')
					{
						pos[2]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '4':
			{
				error=0;
				if(turn==1)
				{
					if(pos[3]=='4')
					{
						pos[3]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[3]=='4')
					{
						pos[3]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '5':
			{
				error=0;
				if(turn==1)
				{
					if(pos[4]=='5')
					{
						pos[4]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[4]=='5')
					{
						pos[4]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '6':
			{
				error=0;
				if(turn==1)
				{
					if(pos[5]=='6')
					{
						pos[5]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[5]=='6')
					{
						pos[5]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '7':
			{
				error=0;
				if(turn==1)
				{
					if(pos[6]=='7')
					{
						pos[6]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[6]=='7')
					{
						pos[6]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '8':
			{
				error=0;
				if(turn==1)
				{
					if(pos[7]=='8')
					{
						pos[7]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[7]=='8')
					{
						pos[7]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			case '9':
			{
				error=0;
				if(turn==1)
				{
					if(pos[8]=='9')
					{
						pos[8]='X';
					}
					else
					{
						err();
					}
				}
				else
				{
					if(pos[8]=='9')
					{
						pos[8]='O';
					}
					else
					{
						err();
					}
				}
				break;
			}
			default:
			{
				err();
			}
		}
	}
	while(error==1);
	if(turn==1)
	{
		turn=2;
	}
	else
	{
		turn=1;
	}
}
void reset()
{
	turn=1;
	pos[0]='1';
	pos[1]='2';
	pos[2]='3';
	pos[3]='4';
	pos[4]='5';
	pos[5]='6';
	pos[6]='7';
	pos[7]='8';
	pos[8]='9';	
}
void err()
{
	system("cls");
	printf("\nInvalid Input!");
	printf("\npress any key to continue...");
	error=1;
	getch();
	system("cls");
	draw();
}
