#include<iostream>

using namespace std;

void printPowerOfTwoStars(int N){
        if(N == 0){cout << "*"; return;}
        if(N>0){printPowerOfTwoStars(N-1); printPowerOfTwoStars(N-1);}

}
int main(int argc, char* argv[]){
	printPowerOfTwoStars(atoi(argv[1]));
	cout<<endl;
	return 0;
}
