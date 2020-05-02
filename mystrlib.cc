/*
string integerToString(int n)

int stringToInteger(string str)

string floatToString(float f)

string toUpperCase(string str)

string toLowerCase(string str)

bool equalsIgnoreCase(string str1, str2)

bool startsWith(string str, string prefix)

void trim(str)
*/
#include "mystrlib.hh"

bool endsWith(string str, string suffix) {

	int sfxlen = suffix.length();
	int strlen = str.length();

	if(sfxlen == 0) return true;

	if(sfxlen > strlen) return false;

	for(int i = 0; i < sfxlen; ++i) {
		if(suffix[i] != str[strlen - sfxlen + i]) {
			return false;
		}
	}

	return true;
}

int main() {
	string str = "arthur";
	string suffix = "oarthur";

	bool b = endsWith(str, suffix);

	if(b) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
}

