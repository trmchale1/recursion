long power(int x, int n)
{
	if(n==0){
		return 1;
	}

	else {
		x = x * power(x, n-1);
		return;
	}
}
