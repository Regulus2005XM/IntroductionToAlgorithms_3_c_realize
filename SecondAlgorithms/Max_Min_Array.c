void Max_Min_Array(int A[], int n, int i_max, int i_min)
{//只用3[N/2]次比较而不是2*(n-1)次就找出最大值和最小值
	int max;
	int min;
	i_max = 0;
	i_min = 0;
	if((n%2)==1)//对奇数个元素。取第一个元素为max和min，再把剩余元素成对比较
	{
		max = A[0];
		min = A[0];
	}
	else//对偶数个元素，前比较前两个
	{
		if(A[0]>=A[1])
		{
			max = A[0];
			min = A[1];
		}
		else
		{
			max = A[1];
			min = A[0];
		}
	}
	for(int i = 2-(n%2); i < n; i += 2)
	{
		if(A[i]>=A[i+1])
		{
			if(A[i]>max)
			{
				max = A[i];
				i_max = i;
			}
			if(A[i+1]<min)
			{
				min = A[i+1];
				i_min = i+1;
			}
		}
		else if(A[i]<A[i+1])
		{
			if(A[i+1]>max)
			{
				max = A[i+1];
				i_max = i+1;
			}
			if(A[i]<min)
			{
				min = A[i];
				i_min = i;
			}
		}
	}
}
