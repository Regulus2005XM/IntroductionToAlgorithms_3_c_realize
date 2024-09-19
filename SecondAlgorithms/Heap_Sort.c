void Build_Max_Heap(int A[], n)
{
	for(int i = floor(n/2); i>=0; i--)
		Max_Heapify(A, n, i);
}

void Heap_Sort(int A[], n)
{
	Build_Max_Heap(int A[], n);
	for(int i = n; i >= 1; i--)
	{
		Change_Int(*A[1], *A[i]);
		n--;
		Max_Heapify(A, n, 1);
	}
}
