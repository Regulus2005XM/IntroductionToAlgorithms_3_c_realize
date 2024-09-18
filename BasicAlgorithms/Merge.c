void Merge(A, p, q, r)//把已排好序的A(p,q)和A(q+1,r)合并
{
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1], R[n2];//创造两个比原数组多一个位置的空数组存放数据
	for(int i = 0; i < n1; i++)
	{
		L[i] = A[p+i];
	}
	for(int j = 0; j < n2; j++)
	{
		R[j] = A[q+j+1];
	}
	L[n1] = INT_MAX;//把最后一位设置为无限大
	R[n2] = INT_MAX;
	int i = 0;
	int j = 0;
	for(int k = p; k <= r; k++)//存放排好的数据
	{
		if(L[i] <= R[j])//先放入小的数据
		{
			A[k] = L[i];
			i++;//取出排好的数据
		}
		else
		{
			A[k] = R[j]
			j++;
		}
	}
}
