
#include <iostream>
#include <random>
#include <string>
using namespace  std;

int main(){
	locale::global(locale("Russian_Russia.1251"));
	srand(static_cast<unsigned int>(time(NULL)));
	int random = rand() % 10000;
	cout << random << "\n";
	string str = to_string(random);
	for (int i = 0 ; i < str.length(); i++) {
		cout << str[i] << "\n";
	}
	return 0;
}
