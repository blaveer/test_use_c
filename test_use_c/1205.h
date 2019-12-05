#pragma once
int counter = 0;
int f() {
	return counter++;
}

//写这个函数就是在想既然i++是先操作后++，如果return之后还会++吗。看来还会
//网上有个说法很赞同，return i++;等效于(假设是int)，int temp=i++; return temp;在汇编代码中也基本是这个意思
//而不是等效于return i; i++;
//当然，如果是局部变量是没有意义的，是全局变量或者静态变量才有意义
void test() {
	cout << counter << endl;
	cout << f() << endl;
	cout << counter << endl;
	
}