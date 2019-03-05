#include<stdio.h>
main()
{
	int i,R=1,P=2,S=3,c,cc,Pscore=0,Cscore=0;
	srand(time(NULL));
	printf("1=rock\n2=paper\n3=scissor\n");
	for(i=0;i<5;i++)
	{
		printf("Enter your choice: \n");
		scanf("%d",&c);
		cc = rand()%3+1;
		if(c==1)
		{
		printf("Rock\n");
			if(cc==1)
			{
				printf("Rock\n");
				printf("Tie\n");
			}
			if(cc==2)
			{
				printf("Paper\n");
				printf("You lose\n");
				Cscore=Cscore+1;
			}
			if(cc==3)
			{
				printf("Scissor\n");
				printf("You win\n");
				Pscore=Pscore+1;
			}
		}
		else if(c==2)
		{
		printf("Paper\n");
			if(cc==1)
			{
				printf("Rock\n");
				printf("You win\n");
				Pscore=Pscore+1;
			}
			if(cc==2)
			{
				printf("Paper\n");
				printf("Tie\n");
			}
			if(cc==3)
			{
				printf("Scissor\n");
				printf("You lose\n");
				Cscore=Cscore+1;
			}
		}
		else if(c==3)
		{
		printf("Scissor\n");
			if(cc==1)
			{
				printf("Rock\n");
				printf("You lose\n");
				Cscore=Cscore+1;
			}
			if(cc==2)
			{
				printf("Paper\n");
				printf("You win\n");
				Pscore=Pscore+1;
			}
			if(cc==3)
			{
				printf("Scissor\n");
				printf("Tie\n");
			}
		}
		else 
		{
			printf("Error\n");
		}
		printf("Player score is %d Computer score is %d\n",Pscore,Cscore);
		printf("\n");
	}
}
