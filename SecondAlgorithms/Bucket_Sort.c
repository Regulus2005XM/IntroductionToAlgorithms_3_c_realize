void Bucket_Sort(int A[], int n)
{
	int B[n];
	for(int i = 0; i < n; i++)
	{
		Create_List(B[i]);
	}
	for(int i = 0; i < n; i++)
	{
		Add_List(A[i], B[floor(nA[i])]);
	}
	for(int i = 0; i < n; i++)
	{
		_Sort(B[i]);
	}
	Lists_to_Array(B[]);
}
