#pragma once
/*
 *������������һ�¹����߼������벼�������һЩ�ɻ�
 *������ֱ��ʵ���ˣ���������
 */
int GetBitStatu(int num, int pos)
{
	if (num & (1 << pos)) //��λ��֮��Ľ����0
	{
		printf("��λ�ϵ�ֵΪ1");
		return 1;
	}
	else
	{
		printf("��λ�ϵ�ֵΪ0");
		return 0;
	}
}
void what_is_true() {
	bool t = -1;
	cout << t << endl;
}
void how_right_shift() {
	int t = -100;
	cout << (t >> 0x10) << endl;
}
void what_is_negative() {
	int a = -1;
	cout << (a) << endl;
}
void how_change() {
	for (int i = 0; i < 10; i++) {
		double d = 100000000000.2232;
		bool b = 1;
		int a = (int)d;
		cout << &b << "    " << a << "    " << &a << endl;
	}
	
}

void is_equal() {
	double d = 2.1;
	double d2 = 3.2;
	if (d) {
		cout << "�������u" << endl;
	}
	int i = -1;
	unsigned u = -5;
	//unsigned u1 = -u;
	if ((unsigned)0 <-1) {
		cout << "�ⶼױ����" << endl;
	}
	cout << u << endl;
	if (i == u) {
		cout << "���" << endl;
	}
	else {
		cout << "�����" << endl;
	}
}
