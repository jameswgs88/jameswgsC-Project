#include<iostream>
using namespace std;
//��Ա�����ͳ�Ա�����ֿ��洢��
class Person
{
	int m_A;//�Ǿ�̬��Ա����
	static int m_B;//��̬��Ա����
	void func(){}//�Ǿ�̬��Ա����
	static void func2() {}//��̬��Ա����

};
 int Person:: m_B = 0;
void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��
	cout << "size of p = " <<sizeof(p)<< endl;
}
void test02()
{
	Person p;

	cout << "size of p = " << sizeof(p) << endl;

}  
int main() {
	//test01();
	test02();

	system("pause");
		return 0;
}