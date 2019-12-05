#pragma once
/*
 *这里用来测试一下关于逻辑运算与布尔运算的一些疑惑
 *函数就直接实现了，，，，，
 */
int GetBitStatu(int num, int pos)
{
	if (num & (1 << pos)) //按位与之后的结果非0
	{
		printf("该位上的值为1");
		return 1;
	}
	else
	{
		printf("该位上的值为0");
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
		cout << "你就是嗲u" << endl;
	}
	int i = -1;
	unsigned u = -5;
	//unsigned u1 = -u;
	if ((unsigned)0 <-1) {
		cout << "这都妆花了" << endl;
	}
	cout << u << endl;
	if (i == u) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
}
