#include<iostream>
#include<string>  //ʹ���ַ�������Ҫ��ͷ�ļ�  <string> ������<string.h>
#include<Windows.h>

using namespace std;
int main()
{
	int c;
	string name;
	int a = 666;
	cout << "hello world" << endl;
	cout << "������" << a << endl;
	cin >> name;        //������cin  �������Ʋ�����>>
	cout << "������: " << name<< endl;
	system("pause");//�����������
	system("cls");//����
	cin >> c;
	return 0;
}