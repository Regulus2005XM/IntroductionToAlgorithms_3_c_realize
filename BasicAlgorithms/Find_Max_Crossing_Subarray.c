struct subarray
{
	int left;
	int right;
	int sum;
}
void Find_Max_Crossing_Subarray(int A[], int low, int mid, int high, subarray _subarray)
{
	int left_sum = INT_MIN;
	int max_left;
	int sum = 0;
	for(int i = mid; i >= low; i--)//找到从左到中间的最大值
	{
		sum += A[i];
		if(sum > left_sum)
		{
			left_sum = sum;
			max_left = i;
		}
	}
	int right_sum = INT_MIN;
	int max_right;
	int sum = 0;
	for(int j = mid + 1; j < high; j++)//找到从中间到右的最大值
	{
		sum += A[j];
		if(sum > right_sum)
		{
			right_sum = sum;
			max_right = j;
		}
	}
	_subarray.left = max_left;
	_subarray.right = max_right;
	_subarray.sum = left_sum + right_sum;
}
