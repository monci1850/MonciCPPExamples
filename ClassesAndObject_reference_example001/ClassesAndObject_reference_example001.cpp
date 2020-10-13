// ClassesAndObject_reference_example001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//ֵ����
void ValueSwap(int m, int n)
{
	int temp = m;
	m = n;
	n = temp;
}
//��ַ����
void PointerSwap(int* m, int* n) 
{
	int temp = *m;
	*m = *n;
	*n = temp;
}
//���ô���
void ReferenceSwap(int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}


void TestRef(int& ref) 
{ 
	ref = 100;  // ref�����ã�ת��Ϊ*ref = 100
}


int main()
{
	int a = 10;
	// b �൱�� a �ı���
	int& b = a;	// b has same memory address with a.
	int c = a;	// c has different address.

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;

	// Like parameter reference in Houdini. 
	// ����b���൱���ڲ���a, ��b���100��ͬʱaҲ�����100.
	b = 100;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;

	//�����ж������
	int& d = a;
	d = 999;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "d: " << d << endl;
	cout << endl;

	// ����c, ��ַ������ͬ��
	cout << "a:" << &a << endl;
	cout << "b:" << &b << endl;
	cout << "c:" << &c << endl;
	cout << "d:" << &d << endl;


	/*reference ���õ�ע������*/
	//1) ���ñ����ʼ��
	//int& ref; //����:�����ʼ������
	//2) ����һ����ʼ�������ܸı�����
	int x = 10;
	int y = 20;
	int& ref = x;
	//int& ref = y;	//ERROR: ���ܸı�����

	//3) ���ܶ����齨������
	int arr[10];
	//int& ref_arr[10] = arr;


	/*����������õĵط����ں��������ͷ���ֵ�С������ñ���������������ʱ��
	�ں����ڶ��κ����õ��޸ģ����Ի�������Ĳ��������ı䡣��Ȼ������ͨ������һ��ָ��������ͬ�����飬�����þ��и��������﷨��
	����Ӻ����з���һ�����ã�������Ӻ����з���һ��ָ��һ���Դ�������������ֵʱ�����ù������ڴ�һ��Ҫ���ڡ�*/
	int m = 15;
	int n = 30;
	//ֵ����
	ValueSwap(m, n);
	cout << "m:" << m << " n:" << n << endl;
	//��ַ����
	PointerSwap(&m, &n);
	cout << "m:" << m << " n:" << n << endl;
	//���ô���
	ReferenceSwap(m, n);
	cout << "m:" << m << " n:" << n << endl;


	/*���õı�����c++�ڲ�ʵ����һ��ָ�볣��.
	Type& ref = val; // Type* const ref = &val;
	*/

	int v = 567;
	int& f = v;
	int* const g = &v;
	cout << "v: " << v << endl;
	cout << "f: " << f << endl;
	cout << "*g: " << *g << endl;
	*g = 123;
	//g = &a;	// like reference, const pointer can not be modified.

	cout << "v: " << v << endl;
	cout << "f: " << f << endl;
	cout << "*g: " << *g << endl;

	cout << endl;

	int h = 798;
	int& j = h;	 // automatically convert to int* const j = &h;
	j = 555; // automatically convert to *j = 555;
	cout << "h: " << h << endl;
	cout << "j: " << j << endl;
	cout << endl;

	TestRef(j);
	cout << "h: " << h << endl;
	cout << "j: " << j << endl;
	cout << endl;

	return 0;



}

