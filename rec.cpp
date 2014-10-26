#include <iostream>
using namespace std;
void recursion(int x)
{
	if(x < 1){}
	else{
	
	cout << "*";
	x--;
	recursion(x);
	
	}

}
void printTriangle(int n)
{
	if(n<1)
	{}
	else{
		recursion(n);
		cout << "\n";
		n--;
		printTriangle(n);
	}
}
int main()
{
	printTriangle(5);

}
