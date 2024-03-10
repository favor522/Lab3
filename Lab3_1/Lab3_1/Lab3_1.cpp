
#include <iostream>;
using namespace  std;

int main(){
	locale::global(locale("Russian_Russia.1251"));
	srand(time(NULL));
	char N[5] = { rand() % 10000 + 0 };
	char *p = N;
	cout << "Рандомное число: " << p << "\n";
	return 0;
}
