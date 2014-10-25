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
int main()
{
	recursion(5);


}
