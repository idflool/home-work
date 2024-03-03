#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//float a;
	//cin >> a;
	//cout << " min " << a / 60 << endl;
	//cout << "chas " << a / 60 / 60 << endl;
	//cout << "sek " << a;



	/*double a;
	int dollar, cent;
	cin >> a;
	dollar = a;
	cent = (a - dollar) * 100;
	cout << dollar << endl << cent;*/


	//int a,d, w;
	//cin >> a;
	//w = a / 7;
	//d = a % 7;
	//cout << w << endl << d;


	double t;
	float s;
	int m, sek, time;
	cout << "Введите длину дистанции (метров) = "; cin >> s; cout<< endl;
	cout << "Введите время (мин.сек) = "; cin >> t; cout << endl ;
	cout << "Дистанция: " << s << endl;
	m = t;
	sek = (t - m) * 100;
	time = m * 60 + sek;
	cout << "Время: " << t << m * 60 + sek << endl;
	cout << "Вы бежали со скоростью " << s / time * 3.6;

}




