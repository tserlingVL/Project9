#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������ �������\n";
	double r1 = 2, r2 = 4, r3 = 8;
	double r0;
	double rr0;
	rr0 = (1 / r1) + (1 / r2) + (1 / r3);
	r0 = 1 / rr0;
	cout << "R0 = " << r0 << endl;
	cout << "������ �������\n";

	double L, S, pi=3.14;
	cout << "������� ����� ���������� ";
	cin >> L;
	S = (L * L) / (4 * pi);
	cout << S << " �������\n\n" ;
	
	cout << "3 �������\n";
	double v, s, t, a;
	cout << "������� �������� ";
	cin >> v;
	cout << "������� ����� ";
	cin >> t;
	cout << "������� ��������� ";
	cin >> a;
	s = (v*t) + ((a*(t*t))/2);
	cout << s << " ����\n";

	cout << "\n\n\n������ ��\n������ �������\n";
	int sec, hours, mins;
	cout << "������� ������� ";
	cin >> sec;
	hours = sec / 60 / 60;
	mins = sec / 60;
	cout << hours << " ���� " << mins << " ������ " << sec << " �������";
	cout << "\n\n\n";
	cout << "������� 2\n\n";
	cout << "������� ����� ����� ";
	double summadeneg;
	cin >> summadeneg;
	int summa_celihdeneg;
	double summa_kopeechek;
	summa_celihdeneg = summadeneg;
	summa_kopeechek = (summadeneg-summa_celihdeneg) * 100;
	cout << summa_celihdeneg << " ������ " << summa_kopeechek << " ������\n\n\n";
	cout << "������� 3\n\n";
	cout << "���������� �������� ����\n";
	cout << "������� ����� ��������� (������) = ";
	double dist, time1;
	cin >> dist;
	cout << "������� ����� (���.���) = ";
	cin >> time1;
	cout << "���������: " << dist << "�.\n";
	int secs, mins1;
	mins = time1;
	secs = (time1 - mins) * 100;
	double sec1 = mins * 60 + secs;
	cout << "�����: " << mins << " ��� " << secs << "��� = " << sec1;
	cout << "\n�� ������ �� ���������: " << dist / sec1 * 3.6 << "��/�\n\n\n";
	cout << "������� 4\n";
	double price_min, price_sec, time, time_sec, price_all;
	cout << "������� ���� ������ ���������� ������ ������� ���������\n";
	cin >> price_min;
	cout << "������� ����������������� ��������� � ������� � ��������\n";
	cin >> time;
	time_sec = ((int)time * 60) + ((time * 100) - (int)time * 100);
	price_sec = price_min / 60;
	price_all = time_sec * price_sec;
	cout << "��������� ������ ���������: " << price_all;
	cout << "\n\n\n������� 5";
	int days, day, weeks;
	cout << "\n������� ���������� ����";
	cin >> day;
	weeks = day / 7;
	days = day - (weeks * 7);
	cout << weeks << " ������ " << days << " ����";
	return 0;
}