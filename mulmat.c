#include <stdio.h>
int main()
{
	int a[100][100], b[100][100], j, i, p, q, mul[100][100], k, r;
	printf("ù��° ���\n");
	printf("��:");
	scanf("%d", &p);
	printf("��:");
	scanf("%d", &q);
	//ù��° ��� �Է�
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	//�ι�° ���
	printf("�ι�° ���\n");
	printf("��:");
	scanf("%d", &q);
	printf("��:");
	scanf("%d", &k);
	//�ι�° ��� �Է�
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf("b[%d][%d]:", i, j);
			scanf("%d", &b[i][j]);//pxq X qxk
		}
	}
    
	//����� �� ���
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
	printf("����� �� ���\n");
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