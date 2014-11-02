#include<iostream>
using namespace std;
int sum(int x[], int y){
	if(y == 0){return 0;}
else{	int sum1 = 0;
	cout << sum1 << endl;
	sum1 = x[0] + sum(x+1, y-1);
	return sum1;
}
}
int main(){
	int x[] = {1,1,2,3,4,5,6,7,8,9};
	int j = 0;
	j = sum(x,10);
	cout << j << endl;
}
