void Monkey_Sort(int A[], int n)
{
	while(1)
	{
		int i_1 = random(0,n-1);
		int i_2 = random(0,n-1);
		int tem = A[i_1];
		int A[i_1] = A[i_2];
		int A[i_2] = tem;
		int false_1 = 1;
		for(int i = 0; i < n-1; i++)
		{
			if(A[i]>A[i+1])
			{
				false_1 = 0;
				break;
			}
		}
		if(false_1 == 1)
		{
			break;
		}
	}
}
