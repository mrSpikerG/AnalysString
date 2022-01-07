#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{

	string text;
	cout << "Введите слово: \n";
	getline(cin, text);

	int digit = 0;
	int alpha = 0;
	int punct = 0;
	for (int i = 0; i < text.length(); i++) {
		if (isdigit(text[i])) {
			digit++;
		}
		if (isalpha(text[i])) {
			alpha++;
		}

		//не был уверен считаются ли знаки препинания разделителями, но решил оставить так
		if (ispunct(text[i]) || isspace(text[i])) {
			punct++;
		}
	}

	int words = 0;
	int i = 0;
	while (text.find("Hello", i) < text.length()) {
		words++;
		i = text.find("Hello", i) + 1;
	}

	cout << "\nЦифры: " << digit;
	cout << "\nБуквы: " << alpha;
	cout << "\nРазделители: " << punct;
	cout << "\n\"Hello\": " << words << "\n\n";
	
	for (int i = text.length(); i >= 0; i--) {
		if (text[i] == ',') {
			cout << '.';
		}
		else {
			cout<<text[i];
		}
	}

}
