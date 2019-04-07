#include<stdio.h>

int main()
{
	printf("number os processes\n");
	int n;
	scanf("%d",&n);
	int p[n],wt[n],tat[n],at[n],rt[n],bt[n];
	rt[0]=0;
	int i;
	printf("enter process id \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter arrival time fpor each process\n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter burst time\n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
		for(i=0;i<n;i++)
	{
	  wt[i]=rt[i]-at[i];
	  tat[i]=bt[i]+wt[i];
	  rt[i+1]=rt[i]+bt[i];
	 	
	}
	int sum_wt=0,sum_tat=0;
	printf("waiting time for each process\n");
		for(i=0;i<n;i++)
	{
		sum_wt=sum_wt+wt[i];
		printf("%d\n",wt[i]);
		
	}
		printf("turn around  time for each process\n");
		for(i=0;i<n;i++)
	{
		printf("%d\n",tat[i]);
		sum_tat=tat[i]+sum_tat;
		
	}
	float avg_tat=(float)sum_tat/n,avg_wt=(float)sum_wt/n;
	printf("avergae waiting time=%f",avg_wt);
		printf("avergae waiting time=%f",avg_tat);
	
	
	
	
}
