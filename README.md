# mystrlib

A c++ library containing helpful methods to deal with strings

## files
[mystrlib.cc](mystrlib.cc): methods' implementations <br />
[mystrlib.hh](mystrlib.hh): class definitions

## Current Methods
`bool endsWith(string str, string suffix)` <br />
Returns **true** if the string *str* ends with the specified suffix, which may be either a string or a character.

## Missing Methods

`string integerToString(int n)` <br />
Converts an integer to the corresponding string of digits

`int stringToInteger(string str)` <br />
Converts a string of digits into an integer

`string realToString(float f)` <br />
Converts a floating-point number into the corresponding string form

`string stringToReal(float f)` <br />
Converts a string into the corresponding floating-point number form

`string toUpperCase(string str)` <br />
Returns a new string in which all lowecase characters have been converted into their uppercase equivalents.

`string toLowerCase(string str)` <br />
Returns a new string in which all uppercase characters have been converted into their lowercase equivalents.

`bool equalsIgnoreCase(string str1, str2)` <br />
Returns **true** if *str1* and *str2* are equal discounting differences in case.

`bool startsWith(string str, string prefix)` <br />
Returns **true** if the string *str* starts with the specified prefix, which may be either a string or a character.

`void trim(str)` <br />
Returns a new string and after removing any whitespace characeter from the beginning and end of the argument.

