#include<iostream>  //四区：全局区，代码区，栈区，堆区
using namespace std;
int g_a_1 = 1;
int g_a_2 = 2;
int main(void)
{
//全局区；全局变量，静态变量，const修饰的全局变量；生命周期：程序关闭
	cout << "g_a_1地址：" << (int)&g_a_1 << endl;
	cout << "g_a_1地址：" << (int)&g_a_2 << endl;
//栈区：局部变量，函数参数，const修饰的局部变量；生命周期：局部
	int l_b_1 = 1;
	int l_b_2 = 2;
	cout << "l_b_1地址：" << (int)&l_b_1 << endl;
	cout << "l_b_1地址：" << (int)&l_b_2 << endl;
//堆区：动态变量：
	int*p = new int(10);//开辟
	
	cout << (int)p << endl;
	delete p;//删除
//	cout << *p << endl;非法访问
	system("pause");
	return 0;
}