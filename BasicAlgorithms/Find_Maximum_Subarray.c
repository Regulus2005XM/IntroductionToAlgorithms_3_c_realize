void Find_Maximum_Subarray(int A[], int low, int high, subarray xsubarray)
{
	if(high == low)
	{
		xsubarray.left = low;
		xsubarray.right = high;
		xsubarray.sum = A[low];
	}
	else
	{
		int mid = (low+high)/2;
		subarray left_subarray;
		subarray right_subarray;
		subarray cross_subarray;
		Find_Maximum_Subarray(A[], low, mid, left_subarray);
		Find_Maximum_Subarray(A[], mid + 1, high, left_subarray);
		Find_Max_Crossing_Subarray(A[], low, mid, high, cross_subarray);
		if(left_subarray.sum >= right_subarray.sum && left_subarray.sum >= cross_subarray.sum)
		{
			xsubarray.left = left_subarray.low;
			xsubarray.right = left_subarray.high;
			xsubarray.sum = left_subarray.sum;
		}
		else if(right_subarray.sum >= left_subarray.sum && right_subarray.sum >= cross_subarray.sum)
		{
			xsubarray.left = right_subarray.low;
			xsubarray.right = right_subarray.high;
			xsubarray.sum = right_subarray.sum;
		}
		else
		{
			xsubarray.left = cross_subarray.low;
			xsubarray.right = cross_subarray.high;
			xsubarray.sum = cross_subarray.sum;
		}
	}
}
```

![image](assets/image-20240919171617-sgi17zi.png)
