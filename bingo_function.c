#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bing(int,int);
void play(int,int);
void cls(void);
void end(void);
main(void)
{
	system("COLOR 43");
	int a[20],num,bingo[10][10];
	int i,j,k,h,ans,ans1,u,p,sum=0,count=0;
	do
	{
		printf("Menu : \n");
		printf("1.) Create a bingo table \n");
		printf("2.) Play the game \n");
		printf("3.) Clear Screen\n");
		printf("4.) Exit\n");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
				printf("Enter the number of rows and colums(from 2 to 5) : ");
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
			}
				else
				{
					printf("Invalid choice!\nTry again\n");
				}
				bing(u,num);
				break;
			case 2:
				play(u,num);
				break;
			case 3:
				cls();
				break;	
			case 4:
				end();
				break;
			default:
				printf("Invalid choice!\n");
				break;	
		}
	}while(ans != 4);
}
void bing(int ui,int numi)
{
	int a[20],num,bingo[10][10];
	int i,j,k,h,ans,ans1,u,p,sum=0,count=0;
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
	int a[20],num,bingo[10][10];
	int i,j,k,h,ans,ans1,u,p,sum=0,count=0;
	do
				{
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
						printf("Row 1 is filled\n");
						if(bingo[1][0]==0 && bingo[1][1]==0)
						printf("Row 2 is filled\n");
						if(bingo[0][0]==0 && bingo[1][0]==0)
						printf("Column 1 is filled\n");
						if(bingo[0][1]==0 && bingo[1][1]==0)
						printf("Column 2 is filled\n");
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
							printf("Bingo! in %d steps\nNot Bad!\n",count+1);
						}
					}
					else if(numi==9)
					{
						sum=0;
						if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0)
						{
							sum=sum+1;
							printf("Row 1 is filled\n");
						}
						if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0)
						{
							sum=sum+1;
							printf("Row 2 is filled\n");
						}
						if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0)
						{
							sum=sum+1;
							printf("Row 3 is filled\n");
						}
						if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0)
						{
							sum=sum+1;
							printf("Column 1 is filled\n");
						}
						if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[3][1]==0)
						{
							sum=sum+1;
							printf("Column 2 is filled\n");
						}
						if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0)
						{
							sum=sum+1;
							printf("Column 3 is filled\n");
						}
						if(sum>=3)
						{
							system("cls");
							printf("Bingo! in %d steps\nNot Bad!\n",count+1);
						}
					}
					else if(numi==16)
					{
						sum=0;
						if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0)
						{
							sum=sum+1;
							printf("Row 1 is filled\n");
						}
						if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0)
						{
							sum=sum+1;
							printf("Row 2 is filled\n");
						}
						if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0)
						{
							sum=sum+1;
							printf("Row 3 is filled\n");
						}
						if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0)
						{
							sum=sum+1;
							printf("Row 4 is filled\n");
						}
						if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0)
						{
							sum=sum+1;
							printf("Column 1 is filled\n");
						}
						if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0)
						{
							sum=sum+1;
							printf("Column 2 is filled\n");
						}
						if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0)
						{
							sum=sum+1;
							printf("Column 3 is filled\n");
						}
						if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0)
						{
							sum=sum+1;
							printf("Column 4 is filled\n");
						}
						if(sum>=4)
						{
							printf("Bingo! in %d steps\nNot Bad!\n",count+1);
						}
					}
					else if(numi==25)
					{
						sum=0;
						if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0 && bingo[0][4]==0)
						{
							sum=sum+1;
							printf("Row 1 is filled\n");
						}
						if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0 && bingo[1][4]==0)
						{
							sum=sum+1;
							printf("Row 2 is filled\n");
						}
						if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0 && bingo[2][4]==0)
						{
							sum=sum+1;
							printf("Row 3 is filled\n");
						}
						if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0 && bingo[3][4]==0)
						{
							sum=sum+1;
							printf("Row 4 is filled\n");
						}
						if(bingo[4][0]==0 && bingo[4][1]==0 && bingo[4][2]==0 && bingo[4][3]==0 && bingo[4][4]==0)
						{
							sum=sum+1;
							printf("Row 5 is filled\n");
						}
						if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0 && bingo[4][0]==0)
						{
							sum=sum+1;
							printf("Column 1 is filled\n");
						}
						if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0 && bingo[4][1]==0)
						{
							sum=sum+1;
							printf("Column 2 is filled\n");
						}
						if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0 && bingo[4][2]==0)
						{
							sum=sum+1;
							printf("Column 3 is filled\n");
						}
						if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0 && bingo[4][3]==0)
						{
							sum=sum+1;
							printf("Column 4 is filled\n");
						}
						if(bingo[0][4]==0 && bingo[1][4]==0 && bingo[2][4]==0 && bingo[3][4]==0 && bingo[4][4]==0)
						{
							sum=sum+1;
							printf("Column 5 is filled\n");
						}
						if(sum>=5)
						{
							printf("Bingo! in %d steps\nNot Bad!\n",count+1);
						}
					}
					printf("Press '0' to exit to menu\n");
					printf("Press '1' countinue :");
					scanf("%d",&ans1);
					system("cls");
					if(ans1==1)
					count=count+1;
					if(ans1==4)
					system("cls");
				}while(ans1 == 1);
}
void cls()
{
	system("cls");
}
void end()
{
	exit(0);
}
