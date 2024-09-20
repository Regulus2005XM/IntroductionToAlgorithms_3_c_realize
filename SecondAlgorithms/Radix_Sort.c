void Radix_Sort(int A[], int C[], int n, int d)//基数排序
{
	int B[d][n];
	int *B[0] = *A[0];
	for(int i = 0; i < d; i++)
	{
		Digit_Counting_Sort(B[i][n], B[i+1][n], n, 10);
	}
	int *C[0] = *B[d-1];
}
