#include <stdio.h>
int main()
{
	int a[100][100], b[100][100], j, i, p, q, mul[100][100], k, r;
	printf("첫번째 행렬\n");
	printf("행:");
	scanf("%d", &p);
	printf("열:");
	scanf("%d", &q);
	//첫번째 행렬 입력
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	//두번째 행렬
	printf("두번째 행렬\n");
	printf("행:");
	scanf("%d", &q);
	printf("열:");
	scanf("%d", &k);
	//두번째 행렬 입력
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf("b[%d][%d]:", i, j);
			scanf("%d", &b[i][j]);//pxq X qxk
		}
	}
    
	//행렬의 곱 계산
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < k; j++)
		{
			mul[i][j] = 0;
			for (r = 0; r < q; r++)
			{
				mul[i][j]+=a[i][r] * b[r][j];
			}
		}
	}
	printf("행렬의 곱 결과\n");
	printf("==============\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < k; j++)
		{
             printf("%3d",mul[i][j]);
		}
			
			
		if (r = p - 1)
				puts("");
		}
	
	return 0;
}