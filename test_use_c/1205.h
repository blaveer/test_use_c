#pragma once
int counter = 0;
int f() {
	return counter++;
}

//д����������������Ȼi++���Ȳ�����++�����return֮�󻹻�++�𡣿�������
//�����и�˵������ͬ��return i++;��Ч��(������int)��int temp=i++; return temp;�ڻ�������Ҳ�����������˼
//�����ǵ�Ч��return i; i++;
//��Ȼ������Ǿֲ�������û������ģ���ȫ�ֱ������߾�̬������������
void test() {
	cout << counter << endl;
	cout << f() << endl;
	cout << counter << endl;
	
}