#include<iostream>  //������ȫ��������������ջ��������
using namespace std;
int g_a_1 = 1;
int g_a_2 = 2;
int main(void)
{
//ȫ������ȫ�ֱ�������̬������const���ε�ȫ�ֱ������������ڣ�����ر�
	cout << "g_a_1��ַ��" << (int)&g_a_1 << endl;
	cout << "g_a_1��ַ��" << (int)&g_a_2 << endl;
//ջ�����ֲ�����������������const���εľֲ��������������ڣ��ֲ�
	int l_b_1 = 1;
	int l_b_2 = 2;
	cout << "l_b_1��ַ��" << (int)&l_b_1 << endl;
	cout << "l_b_1��ַ��" << (int)&l_b_2 << endl;
//��������̬������
	int*p = new int(10);//����
	
	cout << (int)p << endl;
	delete p;//ɾ��
//	cout << *p << endl;�Ƿ�����
	system("pause");
	return 0;
}