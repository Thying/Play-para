// ������ ������� ���������� � ������� ���� � ������� ������� �� ����� �������
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <Windows.h>
// ������������������������������������������������������������������

using namespace std;

void timer() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int seconds; // ���������� ������ �� �������� ���������

	cout << "������� ������� ������ �� ������ ������: ";
	cin >> seconds;

	for (int i = 0; i < seconds; i++) {
		// �������� � ���������� ���������
		this_thread::sleep_for(chrono::seconds(1));

		// ��������� ���� �������
		system("cls");
		cout << seconds - i << endl;
	}

	cout << "������ �����. ��������� ����� �������." << endl;

	// �������� ���������
	exit(0);
}