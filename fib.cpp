#include<iostream>
using namespace std;
int fib(int n)
{	if (n == 1 || n ==0) return n;
	else{
		n = fib(n-1) + fib(n-2);
		return n;
}

}
int main(){
	int x = 0;
	cin >> x;
	int k =	fib(x);
	cout << k << endl;
	return 0;
}
