#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	int a[20],num,bingo[10][10];
	int i,j,k,h,ans,u,p,flag = 0,flag1 = 0,count,count1,o=0;
	int ans1;
	do
	{
	printf("Menu : \n");
	printf("1.) Create a bingo table \n");
	printf("2.) Generate random numbers(to play the game)\n");
	printf("3.) Clear Screen\n");
	printf("4.) Exit\n");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1:
			printf("Enter the number of rows and colums(from 2 to 7) : ");
			scanf("%d",&u);
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
			else if(u == 6)
			{
				num = 36;
			}
			else if(u == 7)
			{
				num = 49;
			}
		for(i=0;i<num;i++)
		{
			a[i] = rand()%num+1;
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
		for(k=0;k<u;k++)
		{
			for(h=0;h<u;h++)
			{
				bingo[k][h] = a[i++];
			}
		}
		for(k=0;k<u;k++)
		{
			for(h=0;h<u;h++)
			{
				printf("%d\t",bingo[k][h]);
			}
			printf("\n");
		}
		break;
		case 2:
			do
			{
			p = rand()%num+1;
			printf("\n\bNo. is : %d\n",p);
			for(k=0;k<u;k++)
			{
				for(h=0;h<u;h++)
				{
					if(bingo[k][h] == p)
					{
						bingo[k][h] = 0;
					}
					printf("%d\t",bingo[k][h]);
				}
			printf("\n");
			}
			
				if(num==4)
			{
			if(bingo[0][0]==0 && bingo[0][1]==0){
			printf("Row 1 is filled\n");
			o = o+1;
		}
			if(bingo[1][0]==0 && bingo[1][1]==0){
			printf("Row 2 is filled\n");
			o = o+1;
		}
			if(bingo[0][0]==0 && bingo[1][0]==0){
			printf("Column 1 is filled\n");
			o = o + 1;
		}
			if(bingo[0][1]==0 && bingo[1][1]==0){
			printf("Column 2 is filled\n");
			o = o + 1;
		}
		if(o==2)
		{
			printf("BINGO !!\n");
			exit(0);
		}
			}
			else if(num==9)
			{
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0){
			printf("Row 1 is filled\n");
			o = o + 1;
		}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0){
			printf("Row 2 is filled\n");
			o = o + 1;
		}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0){
			printf("Row 3 is filled\n");
			o = o + 1;
		}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0){
			printf("Column 1 is filled\n");
			o = o + 1;
		}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[3][1]==0){
			printf("Column 2 is filled\n");
			o = o + 1;
		}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0){
			printf("Column 3 is filled\n");
			o = o + 1;
	}
			if(o==4)
			{
				printf("BINGO !!!\n");
				exit(0);
			}
			
		}
			else if(num==16)
			{
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0){
			printf("Row 1 is filled\n");
			o = o + 1;
		}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0){
			printf("Row 2 is filled\n");
			o = o + 1;
		}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0){			
			printf("Row 3 is filled\n");
			o = o + 1;
		}
			if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0){			
			printf("Row 4 is filled\n");
			o = o + 1;
		}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0){
			printf("Column 1 is filled\n");
			o = o + 1;
		}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0){
			printf("Column 2 is filled\n");
			o = o + 1;
		}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0){
			printf("Column 3 is filled\n");
			o = o + 1;
		}
			if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0){
			printf("Column 4 is filled\n");
			o = o + 1;
		}
			if(o==4)
			{
				printf("BINGO !!!!");
			}
			}
			else if(num==25)
			{
			if(bingo[0][0]==0 && bingo[0][1]==0 && bingo[0][2]==0 && bingo[0][3]==0 && bingo[0][4]==0){
			printf("Row 1 is filled\n");
			o = o + 1;
		}
			if(bingo[1][0]==0 && bingo[1][1]==0 && bingo[1][2]==0 && bingo[1][3]==0 && bingo[1][4]==0){
			printf("Row 2 is filled\n");
			o = o + 1;
		}
			if(bingo[2][0]==0 && bingo[2][1]==0 && bingo[2][2]==0 && bingo[2][3]==0 && bingo[2][4]==0){
			printf("Row 3 is filled\n");
			o = o + 1;
		}
			if(bingo[3][0]==0 && bingo[3][1]==0 && bingo[3][2]==0 && bingo[3][3]==0 && bingo[3][4]==0){
			printf("Row 4 is filled\n");
			o = o + 1;
		}
			if(bingo[4][0]==0 && bingo[4][1]==0 && bingo[4][2]==0 && bingo[4][3]==0 && bingo[4][4]==0){
			printf("Row 5 is filled\n");
			o = o + 1;
		}
			if(bingo[0][0]==0 && bingo[1][0]==0 && bingo[2][0]==0 && bingo[3][0]==0 && bingo[4][0]==0){
			printf("Column 1 is filled\n");
			o = o + 1;
		}
			if(bingo[0][1]==0 && bingo[1][1]==0 && bingo[2][1]==0 && bingo[3][1]==0 && bingo[4][1]==0){
			printf("Column 2 is filled\n");
			o = o + 1;
		}
			if(bingo[0][2]==0 && bingo[1][2]==0 && bingo[2][2]==0 && bingo[3][2]==0 && bingo[4][2]==0){
			printf("Column 3 is filled\n");
			o = o + 1;
		}
			if(bingo[0][3]==0 && bingo[1][3]==0 && bingo[2][3]==0 && bingo[3][3]==0 && bingo[4][3]==0){
			printf("Column 4 is filled\n");
			o = o + 1;
		}
			if(bingo[0][4]==0 && bingo[1][4]==0 && bingo[2][4]==0 && bingo[3][4]==0 && bingo[4][4]==0){
			printf("Column 5 is filled\n");
			o = o + 1;
		}
		if(o == 5)
		{
			printf("BINGO !!!!!");
		}
			}
			printf("Press '1' to continue : ");
			scanf("%d",&ans1);
		}while(ans1 == 1);
		break;
		case 3:
			system("cls");
			break;	
		case 4:
			exit(0);
			break;
}
}while(ans != 10);
}
