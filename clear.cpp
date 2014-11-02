#include<iostream>
using namespace std;
void clear(int x[], int j){
	if(j == 0){cout << "empty" << endl; return;}
	else {
		x[0] = 0;
		clear(x+1, j--);
	return;
	}
}
int main(){
	int x[] = {1,1,2,3,4,5,6,7,8,9};
	
	clear(x, 10);
	for (int i = 0; i < 10; i++)
	{cout << x[i] << endl; }
}
