#include <iostream>
#include <string>
using namespace  std;

int main() {
	locale::global(locale("Russian_Russia.1251"));
	string str; 
	string word;

	cout << "������� �����, ������� �� �������� ����: " << "\n";
	getline(cin, str); 

	for (int i = 0; i < (str.size()); i++) {
		if (isdigit(str[i])) {
			cout << "� ������ ���������� ������������ �������! ������������� ���������" << "\n";
			return 1;
		}
		if ((str[i] == ' ') && (str[i + 1] == ' ')) {
			str.erase(i + 1, 1);
			i = i - 1;
		}
	}
	for (int i = 0; i < (str.size()); i++) {
		if (word.find('�') == 2) {
			cout << word << "/n";
		}
		if (str[i] != ' ') {
			word = word + str[i];
		}
		else {
			word = "";
		}
	}

	cout << "*" << str << "\n";
	return 0;
}