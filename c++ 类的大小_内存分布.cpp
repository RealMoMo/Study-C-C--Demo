#include <iostream>

using namespace std;

class A{
public:
	int i;
	int j;
	int k;
	static int z;  //��̬����������ȫ�����ڣ�����Ϊ��Ĵ�С��

};


class B{
public:
	int i;
	int j;
	int k;

	void myPrintf(){    //������������������棬Ҳ����Ϊ��Ĵ�С�ڼ��㡣
		cout << "��ӡ" << endl;

	}


};

//��Ĵ�С

int main(){

	cout << sizeof(A) << endl;   // 12
	cout << sizeof(B) << endl;	 // 12

	// c/c++�ڴ�������ѡ�ջ��ȫ�֣���̬��ȫ�֣������������ַ����������������
	//��ͨ������ṹ����ͬ���ڴ沼��


	system("pause");
	return 0;
}
