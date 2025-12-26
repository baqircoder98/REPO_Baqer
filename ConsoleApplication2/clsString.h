#pragma once
#include<iostream>
using namespace std;

class clsString
{
private:
	string _Value;
public:
	clsString() {
		_Value = "";
	}
	clsString(string Value) {
		_Value = Value;
	}
	void SetValue(string value) {
		 _Value = value;
	}
	string  getValue() {
		return _Value;
	}
	__declspec(property(get = getValue, put = SetValue))string Value;
	string readString() {
		string s1;
		cout << "pleas Enter Your String " << endl;
		getline(cin,s1);
		return s1;
	}

	static string  upperFirstLetterOfEachWord(string S1) {

		bool FirstLetter = true;
		
		for(short i=0;i<S1.length();i++){
			if (S1[i] != ' ' && FirstLetter) {
				S1[i]=toupper(S1[i]);
			}
			FirstLetter = (S1[i] == ' ' ? true : false);
		}
	
		return S1;
	}
	void upperFirstLetterOfEachWord() {
		cout << _Value << endl << endl;
		upperFirstLetterOfEachWord(_Value);

	}
	static string  lowerFirstLetterOfEachWord(string S1) {

		bool FirstLetter = true;

		for (short i = 0; i < S1.length(); i++) {
			if (S1[i] != ' ' && FirstLetter) {
				S1[i] = tolower(S1[i]);
			}
			FirstLetter = (S1[i] == ' ' ? true : false);
		}

		return S1;
	}
	void lwoerFirstLetterOfEachWord() {
		cout << _Value << endl << endl;
		lowerFirstLetterOfEachWord(_Value);

	}
	static void  printFirstLetterOfEachWord(string S1) {

		bool FirstLetter = true;

		for (short i = 0; i < S1.length(); i++) {
			if (S1[i] != ' ' && FirstLetter) {
				cout << S1[i] << endl;
			}
			FirstLetter = (S1[i] == ' ' ? true : false);
		}

		
	}
	
	void printFirstLetterOfEachWord() {

		printFirstLetterOfEachWord(_Value);
	};
	int baqeahmedmrint () {
		int x;
		cout << "pleas Enter an Integer " << endl;
		cin >> x;
		return x;
	}

};
