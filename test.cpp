#include<iostream>
#include<string>  //使用字符串类型要引头文件  <string> 并不是<string.h>
#include<Windows.h>

using namespace std;
int main()
{
	int c;
	string name;
	int a = 666;
	cout << "hello world" << endl;
	cout << "请打出：" << a << endl;
	cin >> name;        //输入是cin  且是右移操作符>>
	cout << "请输入: " << name<< endl;
	system("pause");//按任意键继续
	system("cls");//清屏
	cin >> c;
	return 0;
}