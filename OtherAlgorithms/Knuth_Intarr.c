void Knuth_Intarr(int arr[],int n)
{
    for(int i = n-1; i >=0; i--)
    {
        swap(arr[i],arr[rand(0,i)]);
    }
    return;
}
