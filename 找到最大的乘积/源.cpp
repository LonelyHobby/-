#include<stdio.h>
void pai(int a[], int n)
{
	int i, j, t;
	for(j=0;j<n-1;j++)
		for (i = 0; i < n - j - 1; i++)
		{
			if (a[i] < a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
}
int main()
{
	int count;
	int n, m;
	int a[20];
	scanf("%d",&count);
	while (count--)
	{
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	int x = 1, t1, t2;
	pai(a, n);
	for (int j = n - 1, k = 0; m > 0;)
	{
		if (m >= 2)
		{
			t1 = a[j] * a[j - 1];
			t2 = a[k] * a[k + 1];
			if (t1 > t2)
			{
				x = t1;
				m -= 2;
				j -= 2;
			}
			else
			{
				x *= a[k ++];
				m--;
			}
		}
		else
		{
			x = a[k++];
			m--;
		}
	}
	printf("%d\n", x);

}