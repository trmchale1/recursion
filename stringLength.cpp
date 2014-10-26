#include<iostream>
using namespace std;
int len(string x){
	
	if(x.length() == 0){return 0;}
	else if(x.length() == 1){return 1;}
	else{
		int g = 0;
		g = (x.substr(0,1)).size() + len(x.substr(0, x.length()-1));
//		cout << g << endl;
		return g;
	}
}
int main()
{
	string z = "habedashery";
	int y = 0;
	y = len(z);
	cout << y << endl;

}
