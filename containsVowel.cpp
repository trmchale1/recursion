#include <iostream>
using namespace std;
bool containsVowel(string x){
	bool hasVowel = 0;
	if(x.length() == 0){return 0;}
	else if(x.substr(0,1) == "a"){return 1;}	
	else if(x.substr(0,1) == "e"){return 1;}	
	else if(x.substr(0,1) == "i"){return 1;}	
	else if(x.substr(0,1) == "o"){return 1;}	
	else if(x.substr(0,1) == "u"){return 1;}	
	cout << x << endl;
	hasVowel = containsVowel(x.substr(0+1, x.length()));
	return hasVowel;
}

int main()
{
	string b;
	cin >> b;
	bool c = containsVowel(b);
	cout << c << endl;
	return 0;
}
