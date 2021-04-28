#include <string>
#include <iostream>
using namespace std;

// Exception classes
class invalidCharacterException {};
class invalidRangeException {};

// function prototype
char character(char start, int offset);

// main function
int main() {
	// testing function
	cout << character('a', 1) << endl;

	try {
		character('a', -1);
	}
	catch (invalidRangeException i) {
		cout << "Error! invalidRangeException" << endl;
	}

	try {
		character('?', -1);
	}
	catch (invalidCharacterException i) {
		cout << "Error! invalidCharacterException" << endl;
	}


}

// function defination
char character(char start, int offset) {
	if ((start < 65 || start > 90) && ((start < 97) || (start > 122)))
		throw invalidCharacterException();

	int res = start + offset;

	if ((res < 65 || res > 90) && ((res < 97) || (res > 122)))
		throw invalidRangeException();

	return char(res);

}

