/*
string integerToString(int n)

int stringToInteger(string str)

string floatToString(float f)

string toUpperCase(string str)

string toLowerCase(string str)

bool equalsIgnoreCase(string str1, str2)

bool startsWith(string str, string prefix)
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


string trim(string str) {
	string result = "";

	if (!str.length()) return str;

	int fcidex = -1;
	int lcindex = -1;
	for(int i = 0; i < str.length(); i++) {
		if(!isspace(str[i])) {
			if(fcidex < 0) {
				fcidex = i;
			} else {
				lcindex = i;
			}
		}
	}

	// no whitespaces at beginning or end
	if(fcindex < 0) return str;

	// whitespace only at beginning
	if(lcindex < 0) return str.substr(fcidex);

	// whitespace at beginning and end

	return str.substr(fcidex, lcindex);

}


int main() {
	string str = "arthur";

	cout << trim(str) << endl;
}

