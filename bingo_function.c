//Topic-Function with Arrays
//Question- Bingo game (Chapter-Arrays)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
int bingo[10][10];
void bing(int,int);
void play(int,int);
void color(int);
void hplay(void);
void cls(void);
void end(void);
main(void)
{
	SetConsoleTitle("Bingo!");
	char ans;
	int u,num;
	printf("*********************************************\n");
	printf("            Welocme to BINGO!!\n");
	printf("*********************************************\n");
	do
	{
		printf("\t\tMenu : \n");
		printf("\t1.) How to play the game\n");
		printf("\t2.) Create a bingo table \n");
		printf("\t3.) Play the game \n");
		printf("\t4.) Clear Screen\n");
		printf("\t5.) Exit\n");
		ans=getche();
		switch(ans)
		{
			case '1':
				hplay();
				break;
			case '2':
				printf("\nEnter the number of rows and colums(from 2 to 5) : ");
				scanf("%d",&u);
				if(u==2||u==3||u==4||u==5)
				{
				
				if(u == 2)
				{
					num = 4;
				}
				else if(u == 3)
				{
					num = 9;
				}
				else if(u == 4)
				{
					num = 16;
				}
				else if(u == 5)
				{
					num = 25;
				}
				bing(u,num);
			}
				else
				{
					printf("Invalid choice!\nTry again\n");
				}
				
				break;
			case '3':
				play(u,num);
				break;
			case '4':
				cls();
				break;	
			case '5':
				end();
			default:
				printf("Invalid choice!\n");
				break;	
		}
	}while(ans != '5');
}
void bing(int ui,int numi)
{
	int a[20],i,j,k,h,p,sum=0;
	for(i=0;i<numi;i++)
				{
					a[i] = rand()%numi+1;
					for(j=0;j<i;j++)
					{
						if(a[i] == a[j])
						{
						i--;
						break;
					}
					}
				}
				i = 0;
				for(k=0;k<ui;k++)
				{
					for(h=0;h<ui;h++)
					{
						bingo[k][h] = a[i++];
					}
				}
				for(k=0;k<ui;k++)
				{
					for(h=0;h<ui;h++)
					{
						printf("%d\t",bingo[k][h]);
					}
					printf("\n");
				}
}
void play(int ui,int numi)
{
	int i,j,k,h,p,sum=0,count=0,count1=0;
	char ans1,ans2;
	do
	{
		color(count1);
		count1=count1+1;
		p = rand()%numi+1;
		printf("\n\bNo. is : %d\n",p);
		for(k=0;k<ui;k++)
		{
			for(h=0;h<ui;h++)
			{
				if(bingo[k][h] == p)
				{
					bingo[k][h] = 0;
				}
				printf("%d\t",bingo[k][h]);
			}
			printf("\n");
		}
		if(numi==4)
		{
			sum=0;
			if(bingo[0][0]==0 && bingo[0][1]==0)
			printf("\tRow 1 is filled\n");
			if(bingo[1][0]==0 && bingo[1][1]==0)
			printf("\tRow 2 is filled\n");
			if(bingo[0][0]==0 && bingo[1][0]==0)
			printf("\tColumn 1 is filled\n");
			if(bingo[0][1]==0 && bingo[1][1]==0)
			printf("\tColumn 2 is filled\n");
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					if(bingo[i][j]==0)
					sum=sum+1;
				}
			}
			if(sum>=3)
			{
				printf("Bingo!!!!\n\tIn %d steps\n\tNot Bad!\n",count+1);
			}
		}
		else if(numi==9)
		{
			sum=0;
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0)
			{
				sum=sum+1;
				printf("\tRow 1 is filled\n");
			}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0)
			{
				sum=sum+1;
				printf("\tRow 2 is filled\n");
			}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0)
			{
				sum=sum+1;
				printf("\tRow 3 is filled\n");
			}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0)
			{
				sum=sum+1;
				printf("\tColumn 1 is filled\n");
			}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[3][1]==0)
			{
				sum=sum+1;
				printf("\tColumn 2 is filled\n");
			}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0)
			{
				sum=sum+1;
				printf("\tColumn 3 is filled\n");
			}
			if(sum>=3)
			{
				printf("Bingo!!!!\n\tIn %d steps\n\tNot Bad!\n",count+1);
			}
		}
		else if(numi==16)
		{
			sum=0;
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0)
			{
				sum=sum+1;
				printf("\tRow 1 is filled\n");
			}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0)
			{
				sum=sum+1;
				printf("\tRow 2 is filled\n");
			}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0)
			{
				sum=sum+1;
				printf("\tRow 3 is filled\n");
			}
			if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0)
			{
				sum=sum+1;
				printf("\tRow 4 is filled\n");
			}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0)
			{
				sum=sum+1;
				printf("\tColumn 1 is filled\n");
			}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0)
			{
				sum=sum+1;
				printf("\tColumn 2 is filled\n");
			}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0)
			{
				sum=sum+1;
				printf("\tColumn 3 is filled\n");
			}
			if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0)
			{
				sum=sum+1;
				printf("\tColumn 4 is filled\n");
			}
			if(sum>=4)
			{
				printf("Bingo!!!!\n\tIn %d steps\n\tNot Bad!\n",count+1);
			}
		}
		else if(numi==25)
		{
			sum=0;
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0 && bingo[0][4]==0)
			{
				sum=sum+1;
				printf("\tRow 1 is filled\n");
			}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0 && bingo[1][4]==0)
			{
				sum=sum+1;
				printf("\tRow 2 is filled\n");
			}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0 && bingo[2][4]==0)
			{
				sum=sum+1;
				printf("\tRow 3 is filled\n");
			}
			if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0 && bingo[3][4]==0)
			{
				sum=sum+1;
				printf("\tRow 4 is filled\n");
			}
			if(bingo[4][0]==0 && bingo[4][1]==0 && bingo[4][2]==0 && bingo[4][3]==0 && bingo[4][4]==0)
			{
				sum=sum+1;
				printf("\tRow 5 is filled\n");
			}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0 && bingo[4][0]==0)
			{
				sum=sum+1;
				printf("\tColumn 1 is filled\n");
			}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0 && bingo[4][1]==0)
			{
				sum=sum+1;
				printf("\tColumn 2 is filled\n");
			}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0 && bingo[4][2]==0)
			{
				sum=sum+1;
				printf("\tColumn 3 is filled\n");
			}
			if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0 && bingo[4][3]==0)
			{
				sum=sum+1;
				printf("\tColumn 4 is filled\n");
			}
			if(bingo[0][4]==0 && bingo[1][4]==0 && bingo[2][4]==0 && bingo[3][4]==0 && bingo[4][4]==0)
			{
				sum=sum+1;
				printf("\tColumn 5 is filled\n");
			}
			if(sum>=5)
			{
				printf("Bingo!!!!\n\tIn %d steps\n\tNot Bad!\n",count+1);
			}
		}
		printf("Press '1' countinue\n");
		printf("Press any other key to exit to menu\n");
		ans1=getche();
		system("cls");
		if(ans1=='1')
		count=count+1;
	}while(ans1 == '1');
}
void color(int count1)
{
	if(count1%10==0||count1==0)
	system("COLOR 34");
	else if(count1%10==1||count1==1)
	system("COLOR F2");
	else if(count1%10==2||count1==2)
	system("COLOR E6");
	else if(count1%10==3||count1==3)
	system("COLOR A0");
	else if(count1%10==4||count1==4)
	system("COLOR B4");
	else if(count1%10==5||count1==5)
	system("COLOR C1");
	else if(count1%10==6||count1==6)
	system("COLOR F3");
	else if(count1%10==7||count1==7)
	system("COLOR 71");
	else if(count1%10==8||count1==8)
	system("COLOR B4");
	else if(count1%10==9||count1==9)
	system("COLOR 91");
}
void hplay()
{
	printf("\nNow we will see how to play \n");
	printf("this game : \n");
	printf("1.)At first generate a BINGO table by choosing option '1' \n");
	printf("2.)Enter the number of rows of bingo table you want to play with\n");
	printf("3.)Automatically a BINGO table is generated\n");
	printf("4.)Now choose option '2' to play the game\n");
	printf("5.)As you press option '2' a random number is generated and that number gets cut \n cut number is denoted by 0 in the BINGO table\n");
	printf("6.)Keep pressing 1 and new random number will be generated and cut from bingo table \n");
	printf("7.)As a row or column is cut fully, it will be shown which one of them is cut\n");
	printf("8.)As more rows and colums are cut after certain row and colums \n are cut(depending on your bingo table)\n");
	printf("9.)You will win and number of steps you won in will be shown\n\n");
}
void cls()
{
	system("cls");
}
void end()
{
	printf("\n\t\t\t\t***************");
	printf("\n\t\t\t\t*             *");
	printf("\n\t\t\t\t*SEE YOU SOON!*");
	printf("\n\t\t\t\t*             *");
	printf("\n\t\t\t\t***************");
	printf("\n<--------------------------------------------------------------------------------------------------------------------->");
	exit(0);
}
