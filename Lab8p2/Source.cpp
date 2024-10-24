#include <iostream>
#include <string>
using namespace std;
int countWords(string str);
int main() {
	int numwords;
	bool Qcheck = true;
	string input;
	while (Qcheck) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break ;
		numwords = countWords(input);
		cout << "Word count: " << numwords << endl;
	}
	return 0;
}



int countWords(string str) {
	int wordcount = 1;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		char b = str[i + 1];
		 if (c == ' ' && b!=' ') {
			wordcount++;
		}
	}
	return wordcount;
}