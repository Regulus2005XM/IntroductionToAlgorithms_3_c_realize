void Randomized_Quick_Sort(int A[], int p, int r)
{
	if(p < r)
	{
		q = Randomized_Partition(A[], p, r);
		Randomized_Quick_Sort(A[], p, q - 1);
		Randomized_Quick_Sort(A[], q + 1; r);
	}
}

int Randomized_Partition(int A[], int p, int r)
{
	int i = random(p, r);
	Change_Int(A[r], A[i]);
	return Partition(A[], p, r);
}
