// ������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h> // ����� �������� ��� <ctime> - ��� ������������
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	/*int n = 10, m = 15;
	cout << &n << endl;
	n = 100;
	cout << &n << endl; // ����� �� ��������

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
	cout << array[0] << endl; // �� ������ 1
	int* pArray = array;
	cout << *pArray << endl; // �� ������ 1
	cout << *(pArray + 1) << endl; // �� ������ 2
	int* pArray3 = &array[3];
	cout << *pArray3 << endl; // �� ������ 4
	cout << *(pArray3 - 1) << endl; // �� ������ 3 (������ �������)
	
	cout << "����������� ������:\n[";
	for (int i = 0; i < 5; i++)  // ����� ������ ����� ������� �� � 0 ��������, ������������ i � ������� ������ ��������
		cout << *(pArray + i) << ", ";
	cout << "\b\b]\n";

	int sum = *(pArray + 2) + *(pArray + 4);
	cout << sum << endl; // �� ������ 8 (����� 3 � 5)

	*pArray = 10;
	*(pArray + 3) = 55;
	*(array + 4) = 1;
	cout << "�������� ������:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(pArray + i) << ", ";
	cout << "\b\b]\n";

	cout << "�������� ������ 2:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(array + i) << ", ";
	cout << "\b\b]\n\n";*/

	// ������� �� 14.1
	cout << "����������� ������:\n[";
	int z14[10];
	int *pz14 = &z14[0]; // int *pz14 = z14; �������� ������� - ����� ������ ������� �������� �������
	for (int i = 0; i < 10; i++) {
		*(pz14 + i) = rand() % 10 + 1; // �� 1 �� 10 ���
		cout << *(pz14 + i) << ", ";
	}
	cout << "\b\b]\n";
	int count = 0, sum = 0;
	for (int i = 0; i< 10; i++)
		if (*(z14 + i) % 2 == 0) {
			count++;
			sum += *(z14 + i);
		}
	cout << "������� �������������� ������ ��������� ������� = " << sum / count << endl;

	return 0;
}