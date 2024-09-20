void Counting_Sort(int A[], int B[], int n, int k)//计数排序
{
	int C[k] = { 0 };
	for(int j = 0; j < n; j++)
	{
		C[A[j]]++;
	}
	for(int i = 0; i < k; i++)
	{
		C[i] += C[i-1];
	}
	for(int j = n-1; j >= 0; j--)
	{
		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
}
