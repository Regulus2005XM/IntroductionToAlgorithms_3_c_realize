int Parent(i){
	return floor(i/2);
}
int Left_Child(){
	return 2i;
}
int Right_Child(){
	return 2i + 1;
}

void Change_Int(int* a, int* b)
{
	int tem = &a;
	&a = &b;
	&b = tem;
}

void Max_Heapify(int A[], int n, int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	int largest;
	if(l <= n && A[l] > A[i])
		largest = l;
	else
		largest = i
	if(r <= n && A[r] > A[largest])
		largest = r;
	if(largest != i)
	{
		Change_Int(*A[i], *A[largest])
		Max_Heapify(A, n, largest);
	}
}
