#include <iostream>
using namespace std;
int isMax(int x[], int y){
	if(y == 1){return x[0];}
	else {
//		d =  isMax(x, y-1);
//	 	cout << d << endl;	
		if (isMax(x, y-1) > x[y-1]){return isMax(x,y-1);} 
		else {return x[y-1];}
	}
}
int main()
{
	int x[] = {1,2,3,4,5,6,7,8,9,0};
	int z = 0;
	z = isMax(x, 10);
	cout << z << endl;
	return 0;
}
