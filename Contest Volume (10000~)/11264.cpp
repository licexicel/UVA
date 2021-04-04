#include<cstdio>

int c[1005];

int main()
{
	int t, n, i, sum, count;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
			scanf("%d", &c[i]);
		if (n <= 2) printf("%d\n", n);
		else
		{
			sum = c[0], count = 2;
			for (i = 1; i < n - 1; ++i)
				if (sum < c[i] && sum + c[i] < c[i + 1])
					sum += c[i], ++count;
			printf("%d\n", count);
		}
	}
	return 0;
}
