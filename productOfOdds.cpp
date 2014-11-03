#include<iostream>
using namespace std;
int productOfOdds(int x[], int y){
	int product = 0;
	int isOdd;
	if (y == 1 && x[0] % 2 == 1){return x[0];}
	else if (y==1 && x[0] % 2 != 1){return 1;}
	else if(x[0] % 2 != 1){
		return  productOfOdds(x+1,y-1);
	}
	else{	
		isOdd = x[0] * productOfOdds(x+1,y-1); 
	
		return isOdd;
	}
}
int main(){
	int x[] = {1,2,3,4,5,6,7};
	int y = 7;
	int product = 0;
	product = productOfOdds(x,y);
	cout << product << endl;
	return 0 ;
}
