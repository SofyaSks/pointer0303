#include <iostream>
using namespace std;

// ������� ������ �������� ���������� ���� ������� ���������� �������
void pswap(int *pn, int *pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
// ������� ������ �������� ���������� ���� ��������� �������
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
	cout << "������� ���������\n";
	pswap(&n,&m);
	cout << n << " " << m << endl;
	cout << "-------\n";
	int a = 50;
	int b = 60;
	cout << a << " " << b << endl;
	cout << "������� ���������\n";
	refswap(a,b);
	cout << a << " " << b << endl;


	mult(a,b);
	cout << a << " " << b << endl;





	// ������
	/*int* pn = &n;
	int& nref = n; // nref - ������ �� ���������� n
	// ������ ���������������� ����� �� ��� ��������/����������
	// ������ ������ ������������� �� ������ ����������
	// ��� ��������� � ������ �� �������� �������� ����������, �� ������� ���� ������
	// ��� ��������� ������ ����� & ����� nref
	cout << nref << endl; // �� ������ 10
	cout << pn << endl; // �� ������ ����� // ��� �������� ����� *
	nref = 15;
	cout << n << endl;


	// ��������� 
	/*const float pi = 3.14;
	int* const pn = &n; // ��������� - ��������� | ����������� ���������
	cout << pn <<  endl;
	*pn = 10;
	cout << n << endl;
	const int* pm = &m; // ��������� �� ��������
	pm = &n;
	const int* const supern = &n; // ���������� ��������� �� ���������
	cout << supern << endl;
	cout << *supern << endl;*/

	/*int* pn = &n;
	if (pn != nullptr)
		cout << pn << endl;*/
	

	return 0;
}