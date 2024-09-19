void Merge_Sort(int A[], int p, int r)
{
	if(p<r)
	{
		int q = (p+r)/2;
		Merge_Sort(A[], p, q);//递归
		Merge_Sort(A[], q+1, r);
		Merge(A[], p, q, r): 
	}
}
