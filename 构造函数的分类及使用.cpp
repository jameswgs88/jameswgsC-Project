#include<iostream>
using namespace std;
//���캯���ķ��༰����
//����
//���ղ������� �޲ι�����вι���
//�������ͷ��� ��ͨ����Ϳ�������

class Person
{
public:
	//���캯��
	Person()
	{
		cout<<"Person���޲ι��캯���ĵ���" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person �вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person &P)
	{
		cout << "Person�� �������캯���ĵ���" << endl;
		age = P.age;
	}
		~Person()
		{
			cout << "Person ���������ĵ���" << endl;
		}
		int age;
	
};
//����
void test01()
{
	//1�����ŷ�
	//Person P1;
	//Person P2(10);
	//Person P3(P2);//�������캯��
	//Person P1();
	//cout << "p2������Ϊ��" << P2.age << endl;
	//cout<<"p3������Ϊ��" <<P3.age<< endl;


	//2����ʾ��
	//Person P1;
	//Person P2 = Person(10);//�вι���
	//Person P3 = Person(P2);//��������
	//Person(10);//��������
	//cout << "aaaaaaa" << endl;
	//Person(P3);


	//3����ʽת����
	Person P4 = 10;
	Person P5 = P4;



}



int main() {
	test01();
	system("pause");
	return 0;
}