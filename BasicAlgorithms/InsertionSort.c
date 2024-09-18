void Insertion_Sort(int a[], int a_length)//插入排序
{
	for(int j = 1; j < a_length, j++)//从第二个开始排
	{
		int key = a[j];
		i = j - 1;//从排好的最后一个开始
		while(i >= 0 && a[i] > key)
		{
			a[i+1] = a[i];//有大于就往后站
			i--;
		}
		a[i+1] = key;//插入此次待排数
	}
}
