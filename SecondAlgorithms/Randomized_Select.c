void Randomized_Select(int A[], int p, int r, int i)//返回A[p,r]中第i小的元素
{
	if(p===r)
		return A[p];
	int q = Randomized_Partition(A[],p,r);
	int k = q - p + 1;
	if(i==k)
		return A[q];
	else if(i<k)
		return Randomized_Select(A[],p,q-1,i);
	else
		return Randomized_Select(A[],q+1,r,i-k);
}
