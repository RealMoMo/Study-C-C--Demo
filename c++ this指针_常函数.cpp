#include <iostream>

using namespace std;



//this指针:当前对象的指针，是常量指针 （为什么有this指针 看下面）
//函数是共享的，所以必须要有能够标识当前对象是谁的方法
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

	//常函数，修饰的是this (作用：保证数据安全)
	//既不能改变指针的值，又不能改变指针指向的内容
	//常函数，当前对象不能被修改，防止数据成员被非法访问。
	// const Teacher* const this
	void myPrint2() const{ 
		//不能修改属性的值 会报错
		//this->age = 20;	
		//不能改变this指针的值 会报错
		//this = (Teacher*)0x0009;
	}

};



int main(){

	Teacher t1("realmo",20);

	Teacher t2("haha", 66);

	t1.myPrint();
	t2.myPrint();

	//常量对象不能调用非常量的函数，只能调用常量函数。
	//const Teacher t3("const",11);
	//t3.myPrint();  //会报错

	system("pause");
	return 0;
}
