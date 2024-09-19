void Quick_Sort(int A[], int p, int r)
{
	if(p < r)
	{
		q = Partition(A[], p, r);
		Quick_Sort(A[], p, q - 1);
		Quick_Sort(A[], q + 1; r);
	}
}

int Partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p - 1;
	for(int j = p; j < r; j++)
	{
		if(A[j] <= x)
		{
			i++;
			Change_Int(*A[i], *A[j]);
		}
	}
	Change_Int(*A[i+1], A[r]);
	return i+1;
}
