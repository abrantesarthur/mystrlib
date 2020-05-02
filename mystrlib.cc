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

// std::string ltrim(std::string s) {
// 	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](char ch) {
// 		return !std::isspace(ch);
// 	}));
// 	return s;
// }

// trim from end (in place)
// void rtrim(std::string &s) {
// 	s.erase(std::find_if(s.rbegin(), s.rend(), [](char ch) {
// 		return !std::isspace(ch);
// 	}).base(), s.end());
// }

// std::string trim(string s) {
// 	s = ltrim(s);
// 	return s;
// }


void rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), [](char ch) {
		return !std::isspace(ch);
	}).base(), s.end());

}

void ltrim(std::string &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](char ch) {
		return !std::isspace(ch);
	}));
}

std::string trimWord(std::string s) {
	ltrim(s);
	rtrim(s);
	return s;
}


int main() {
	string s = "";
	cout << "enter a string: ";
	cin >> s;
	cout << "." << trim(s) << "." << endl;
}

