#include <iostream>
#include<vector>
#include<string >
#include"clsString.h"

using namespace std;
class clsA
{
public:
	int x;
	clsA() {};
	clsA(int value) {
		x = value;
	}

	void print1() {
	
		cout << "the value of X= " << x << endl;

	}

};

int main(){


clsString string1;
	clsString string2("Baqer");
	string s1 = string1.readString();
	cout << "Letter After uppercase\n\n";
	cout << endl;
	cout<<string1.upperFirstLetterOfEachWord(s1);
	cout << endl;
	cout << "First Letter Of The String \n\n ";
	string1.printFirstLetterOfEachWord(s1);

}

