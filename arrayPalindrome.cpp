#include <iostream>
using namespace std;
bool isPalindrome(int x[], int y){
	if(y == 0 || y == 1){return true;}
	else if(x[0] == x[y-1]){
		
		return isPalindrome(x+1, y-2);
	}
	return false;
}
int main ()
{
	int x[] = {1,2,3,4,5,5,4,3,2,1};
	bool j = 0;
	j = isPalindrome(x, 10);
	cout << j << endl;
	return 0;
}
