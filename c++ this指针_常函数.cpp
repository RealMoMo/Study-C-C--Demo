#include <iostream>

using namespace std;



//thisָ��:��ǰ�����ָ�룬�ǳ���ָ�� ��Ϊʲô��thisָ�� �����棩
//�����ǹ���ģ����Ա���Ҫ���ܹ���ʶ��ǰ������˭�ķ���
class Teacher{
private:
	char* name;
	int age;
public:
	Teacher(char* name,int age){
		this->name = name;
		this->age = age;
	}

	~Teacher(){
	
	}


	void setName(char* name){
		this->name = name;
	}

	char* getName(){
		return this->name;
	}


	void myPrint(){
		printf("%#x\n", this);
		cout << this->name << "," << this->age << endl;
	}

	//�����������ε���this (���ã���֤���ݰ�ȫ)
	//�Ȳ��ܸı�ָ���ֵ���ֲ��ܸı�ָ��ָ�������
	//����������ǰ�����ܱ��޸ģ���ֹ���ݳ�Ա���Ƿ����ʡ�
	// const Teacher* const this
	void myPrint2() const{ 
		//�����޸����Ե�ֵ �ᱨ��
		//this->age = 20;	
		//���ܸı�thisָ���ֵ �ᱨ��
		//this = (Teacher*)0x0009;
	}

};



int main(){

	Teacher t1("realmo",20);

	Teacher t2("haha", 66);

	t1.myPrint();
	t2.myPrint();

	//���������ܵ��÷ǳ����ĺ�����ֻ�ܵ��ó���������
	//const Teacher t3("const",11);
	//t3.myPrint();  //�ᱨ��

	system("pause");
	return 0;
}
