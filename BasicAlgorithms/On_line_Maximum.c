int On_line_Maximum(int score(), int n)
{
	int bestscore = INT_MIN;
	double e = 2.718;
	int k = floor(n/e);
	for(int i = 0; i < k; i++)
	{
		if(score(i) > beatscore)
			bestscore = score(i);
	}
	for(int i = k; i < n; i++)
	{
		if(score(i) > bestscore
			return i;
	}
	return n-1;
}
