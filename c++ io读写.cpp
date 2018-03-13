#include<iostream>
#include<fstream>

using namespace std;

//IO流

//文本文件操作
/*
void main(){

	char* fname = "C://Users//54363//Desktop//tes.txt";
	//输出流
	ofstream fout(fname);
	//创建失败
	if (fout.bad()){
		return;
	}
	
	fout << "hehe" << endl;
	fout << "github"<< endl;

	//关闭
	fout.close();

	ifstream fin(fname);
	if (fin.bad()){
		return;
	}

	char ch;
	while (fin.get(ch))
	{
		//输出
		cout << ch ;
	}

	fin.close();


	system("pause");
}
*/



/*
//二进制文件
void main(){

	char* src = "C://Users//54363//Desktop//logo.png";

	char* dest = "C://Users//54363//Desktop//dest.png";

	//输入流
	ifstream fin(src, ios::binary);


	//输出流
	ofstream fout(dest, ios::binary);

	if (fin.bad() || fout.bad()){
		return;
	}

	while (!fin.eof()){
		char buff[1024] = { 0 }; //默认值都赋为0

		//读取
		fin.read(buff, 1024);

		//写入
		fout.write(buff, 1024);
	}

	//关流
	fin.close();
	fout.close();


	system("pause");
}
*/




//C++对象的持久化
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
Person p1("柳岩", 22);
Person p2("rose", 18);
//输出流
ofstream fout("C://Users//54363//Desktop//c_obj.data", ios::binary);
fout.write((char*)(&p1), sizeof(Person)); //指针能够读取到正确的数据，读取内存区的长度
fout.write((char*)(&p2), sizeof(Person));
fout.close();

//输入流
ifstream fin("C://Users//54363//Desktop//c_obj.data", ios::binary);
Person tmp;
fin.read((char*)(&tmp), sizeof(Person));
tmp.print();

fin.read((char*)(&tmp), sizeof(Person));
tmp.print();

system("pause");

}
