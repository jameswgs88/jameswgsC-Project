#include<iostream>
using namespace std;
#include<string>
//�̳з�ʽ
//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽��Ȩ�޳�Ա������������Ȼ��˽��Ȩ��
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	s1.m_B = 100;
}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 1000;//��Son2�� m_A��Ϊ����Ȩ��
	//s1.m_B = 1000;
}
//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3:private Base3
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100; 

	}
};
class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 1000;
		//m_B = 1000;
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 1000;
	//s1.m_B = 1000;
}

int main() {
	
	system("pause");
	return 0;
}