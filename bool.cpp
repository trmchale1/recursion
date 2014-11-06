#include<iostream>
using namespace std;
bool equals(int x, int y)
{
	 if(x > 0 && y >0){
	return  equals(x-1, y-1);	
	}
	if (x == 0 && y == 0){return true;}
	else {return false;}
}
int main () {
	int x = 0;
	int y = 0;

	cin >> x;
	cin >> y;

	bool z;
	z = equals(x,y);
	cout << z << endl;	

}
