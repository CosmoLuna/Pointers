// Персональный шаблон проекта С++
#include <iostream>
#include <stdlib.h>
#include <time.h> // можно написать как <ctime> - для коллабораций
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	/*int n = 10, m = 15;
	cout << &n << endl;
	n = 100;
	cout << &n << endl; // адрес не меняется

	n = 10;
	int *pn;
	pn = &n;
	cout << *pn << endl;
	
	int sum = *pn + 10;
	cout << sum << endl;
	*pn = -7;
	cout << n << "\n\n";

	pn = &m;
	cout << pn << endl;

	int* pm = &m;
	cout << *pm << endl;

	int array[5] = { 1, 2, 3, 4, 5 };
	cout << array[0] << endl; // на экране 1
	int* pArray = array;
	cout << *pArray << endl; // на экране 1
	cout << *(pArray + 1) << endl; // на экране 2
	int* pArray3 = &array[3];
	cout << *pArray3 << endl; // на экране 4
	cout << *(pArray3 - 1) << endl; // на экране 3 (второй элемент)
	
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 5; i++)  // чтобы начать вывод массива не с 0 элемента, приравниваем i к нужному номеру элемента
		cout << *(pArray + i) << ", ";
	cout << "\b\b]\n";

	int sum = *(pArray + 2) + *(pArray + 4);
	cout << sum << endl; // на экране 8 (сумма 3 и 5)

	*pArray = 10;
	*(pArray + 3) = 55;
	*(array + 4) = 1;
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(pArray + i) << ", ";
	cout << "\b\b]\n";

	cout << "Итоговый массив 2:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(array + i) << ", ";
	cout << "\b\b]\n\n";*/

	// Задание дз 14.1
	cout << "Изначальный массив:\n[";
	int z14[10];
	int *pz14 = &z14[0]; // int *pz14 = z14; название массива - адрес самого первого элемента массива
	for (int i = 0; i < 10; i++) {
		*(pz14 + i) = rand() % 10 + 1; // от 1 до 10 вкл
		cout << *(pz14 + i) << ", ";
	}
	cout << "\b\b]\n";
	int count = 0, sum = 0;
	for (int i = 0; i< 10; i++)
		if (*(z14 + i) % 2 == 0) {
			count++;
			sum += *(z14 + i);
		}
	cout << "Среднее арифметическое четных элементов массива = " << sum / count << endl;

	return 0;
}