#include<stdio.h>
 
int max(int A,int B)
{
	return (A > B) ? A : B;
}
 
int main(void)
{
	int T,i,j,H,W;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&H,&W);
		int A[H+1][W+1];
		for(i=0;i<H;i++)
			for(j=0;j<W;j++)
				scanf("%d",&A[i][j]);
		for(i=1;i<H;i++)
		{
			for(j=0;j<W;j++)
			{
				if(j == 0)
					A[i][j] += max(A[i-1][j],A[i-1][j+1]);
				else if(j == W-1)
					A[i][j] += max(A[i-1][j-1],A[i-1][j]);
				else
					A[i][j] += max(max(A[i-1][j-1],A[i-1][j]),A[i-1][j+1]);
			}
		}
		int max = -1;
		for(i=0;i<W;i++)
		{
			if(A[H-1][i] > max)
				max = A[H-1][i];
		}
		printf("%d\n",max);
	}
	return 0;
}