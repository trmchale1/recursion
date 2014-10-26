#include <iostream>
using namespace std;
double harmonic(int n)
{
	if(n ==0) return 0.0;

	else{
		double x = (1.0/n) + harmonic(n-1);
		return x;
	}
}
int main()
{
	double a = harmonic(2);
	cout << a << endl;

	return 0;
}

