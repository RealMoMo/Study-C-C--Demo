#include <iostream>

using namespace std;

class Teacher{
public:
	char* name;
public:
	Teacher(char* name){
		this->name = name;
		cout << "Teacher �вι��캯��" << endl;
	}
	~Teacher(){   //�������������޲�
		cout << "Teacher ��������" << endl;
	}
};

//c++����ͨ��new delete  ��̬�ڴ����

void func(){
	//c++д��  -->����ù��캯�� & ��������
	
	Teacher *t1 = new Teacher("realmo");

	//�ͷ�
	delete(t1);
	

	//cд��   -->������ù��캯�� & ��������
	Teacher *t2 = (Teacher*)malloc(sizeof(Teacher));
	
	free(t2);


	//����
	//c
	int *p1 = (int *)malloc(sizeof(int)* 10);
	p1[0] = 6;
	free(p1);

	//c++
	int *p2 = new int[10];
	p2[0] = 6;
	//�ͷ����� []
	delete[] p2;

	
}

int main(){
	
	func();

	system("pause");
	return 0;
}
