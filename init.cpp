#include<iostream>
using namespace std;
void init(int x[], int y)
{
	if (y == 0){return;}
	else{
		x[y-1] = y - 1;
		init(x, y-1);
	}	
}
int main (){

	int x[] = {4,3,2,1,0};
	init(x,5);
	for(int i = 0; i < 5; i++){
		cout << x[i] << endl;
	}
	
	init(x,5);
	
	for(int i = 0; i < 5; i++){
		cout << x[i] << endl;
	}
	
	return 0;
}
