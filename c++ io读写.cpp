#include<iostream>
#include<fstream>

using namespace std;

//IO��

//�ı��ļ�����
/*
void main(){

	char* fname = "C://Users//54363//Desktop//tes.txt";
	//�����
	ofstream fout(fname);
	//����ʧ��
	if (fout.bad()){
		return;
	}
	
	fout << "hehe" << endl;
	fout << "github"<< endl;

	//�ر�
	fout.close();

	ifstream fin(fname);
	if (fin.bad()){
		return;
	}

	char ch;
	while (fin.get(ch))
	{
		//���
		cout << ch ;
	}

	fin.close();


	system("pause");
}
*/



/*
//�������ļ�
void main(){

	char* src = "C://Users//54363//Desktop//logo.png";

	char* dest = "C://Users//54363//Desktop//dest.png";

	//������
	ifstream fin(src, ios::binary);


	//�����
	ofstream fout(dest, ios::binary);

	if (fin.bad() || fout.bad()){
		return;
	}

	while (!fin.eof()){
		char buff[1024] = { 0 }; //Ĭ��ֵ����Ϊ0

		//��ȡ
		fin.read(buff, 1024);

		//д��
		fout.write(buff, 1024);
	}

	//����
	fin.close();
	fout.close();


	system("pause");
}
*/




//C++����ĳ־û�
class Person
{
public:
Person()
{

}
Person(char * name, int age)
{
this->name = name;
this->age = age;
}
void print()
{
cout << name << "," << age << endl;
}
private:
char * name;
int age;
};


void main()
{
Person p1("����", 22);
Person p2("rose", 18);
//�����
ofstream fout("C://Users//54363//Desktop//c_obj.data", ios::binary);
fout.write((char*)(&p1), sizeof(Person)); //ָ���ܹ���ȡ����ȷ�����ݣ���ȡ�ڴ����ĳ���
fout.write((char*)(&p2), sizeof(Person));
fout.close();

//������
ifstream fin("C://Users//54363//Desktop//c_obj.data", ios::binary);
Person tmp;
fin.read((char*)(&tmp), sizeof(Person));
tmp.print();

fin.read((char*)(&tmp), sizeof(Person));
tmp.print();

system("pause");

}
