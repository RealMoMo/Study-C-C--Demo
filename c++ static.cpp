#include <iostream>

using namespace std;

class Teacher{
public:
	char* name;
	//������
	static int total;
public:
	Teacher(char* name){
		this->name = name;
		cout << "Teacher �вι��캯��" << endl;
	}
	~Teacher(){   //�������������޲�
		cout << "Teacher ��������" << endl;
	}

	//����  ��̬����
	static void count(){
		total++;
	}
};



//ѧϰstatic�ؼ���

//��̬���Գ�ʼ����ֵ ��Ҫ��ȫ��ʱ����ֵ��
int Teacher::total = 666;

int main(){

	cout << Teacher::total << endl;

	//����ͨ����������
	Teacher::count;

	//Ҳ����ͨ������������
	Teacher t1("realmo");
	t1.count();

	system("pause");
	return 0;
}
