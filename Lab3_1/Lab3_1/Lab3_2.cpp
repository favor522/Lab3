#include <iostream>
#include <string>
#include <Windows.h>
using namespace  std;

int main1() {
	//SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str; 
	string word;

	cout << "Введите текст, который не содержит цифр: " << "\n";
	getline(cin, str); 

	for (int i = 0; i < (str.size()); i++) {
		if (isdigit(str[i])) {
			wcout << "В тексте обнаружены недопустимые символы! Перезапустите программу" << "\n";
			return 1;
			
		}
		if ((str[i] == ' ') && (str[i + 1] == ' ')) {
			str.erase(i + 1, 1);
			i = i - 1;
		}
		
	}

	for (int i = 0; i < (str.length()+1); i++) {		
		if ((str[i] == ' ') || (str[i] == '\0'))  {
			if (word.find('a') != -1) {
				cout << word << "\n";
			}
			word = "";
		}
		else{ word = word + str[i]; 
		}
	}
	cout << "*" << str << "\n";
	return 0;
}