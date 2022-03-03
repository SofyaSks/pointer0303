#include <iostream>
using namespace std;

// функция меняет значения переданных двух адресов переменных местами
void pswap(int *pn, int *pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
// функция меняет значения переданных двух элементов местами
void refswap(int &refn, int &refm) {
	int tmp = refn;
	refn = refm;
	refm = tmp;
}

void mult(int &refn, int& refn2, int num = 2) {
	refn *= num;
	refn2 *= num;
}


int main() {
	setlocale(LC_ALL, "ru");
	int n = 10, m = 15;
	cout << n << " " << m << endl;
	cout << "Функция сработала\n";
	pswap(&n,&m);
	cout << n << " " << m << endl;
	cout << "-------\n";
	int a = 50;
	int b = 60;
	cout << a << " " << b << endl;
	cout << "Функция сработала\n";
	refswap(a,b);
	cout << a << " " << b << endl;


	mult(a,b);
	cout << a << " " << b << endl;





	// Ссылки
	/*int* pn = &n;
	int& nref = n; // nref - ссылка на переменную n
	// Ссылки инициализируются сразу же при создании/объявлении
	// Ссылки нельзя перенаправить на другие переменные
	// При обращении к ссылке мы получаем значение переменной, на которое ведёт ссылка
	// Для получения адреса нужен & перед nref
	cout << nref << endl; // на экране 10
	cout << pn << endl; // на экране адрес // для значения нужно *
	nref = 15;
	cout << n << endl;


	// Указатели 
	/*const float pi = 3.14;
	int* const pn = &n; // указатель - константа | константный указатель
	cout << pn <<  endl;
	*pn = 10;
	cout << n << endl;
	const int* pm = &m; // указатель на костанту
	pm = &n;
	const int* const supern = &n; // константый указатель на константу
	cout << supern << endl;
	cout << *supern << endl;*/

	/*int* pn = &n;
	if (pn != nullptr)
		cout << pn << endl;*/
	

	return 0;
}