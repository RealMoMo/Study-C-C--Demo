#include <iostream>

using namespace std;

////运算符重载
//class Point{
//public:
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0){
//		this->x = x;
//		this->y = y;
//	}
//	void myprint(){
//		cout << x << "," << y << endl;
//	}
//};
//
////重载+号  （注意：传的是引用；也可以直接传对象，但中间过程会有对象的拷贝）
//Point operator+(Point &p1, Point &p2){
//	Point tmp(p1.x + p2.x, p1.y + p2.y);
//	return tmp;
//}
//
////重载-号
//Point operator-(Point &p1, Point &p2){
//	Point tmp(p1.x - p2.x, p1.y - p2.y);
//	return tmp;
//}
//
//void main(){
//	Point p1(10, 20);
//	Point p2(20, 10);
//
//	Point p3 = p1 + p2;
//
//	p3.myprint();
//
//	system("pause");
//} 



//成员函数，运算符重载
/*
class Point{
public:
int x;
int y;
public:
Point(int x = 0, int y = 0){
this->x = x;
this->y = y;
}
//成员函数，运算符重载
Point operator+(Point &p2){
Point tmp(this->x + p2.x, this->y + p2.y);
return tmp;
}
void myprint(){
cout << x << "," << y << endl;
}
};

void main(){
Point p1(10, 20);
Point p2(20, 10);

//运算符的重载，本质还是函数调用
//p1.operator+(p2)
Point p3 = p1 + p2;

p3.myprint();

system("pause");
}
*/

//当属性私有时，通过友元函数完成运算符重载
class Point{
	friend Point operator+(Point &p1, Point &p2);
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}
	void myprint(){
		cout << x << "," << y << endl;
	}
};

Point operator+(Point &p1, Point &p2){
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}

void main(){
	Point p1(10, 20);
	Point p2(20, 10);

	//运算符的重载，本质还是函数调用
	//p1.operator+(p2)
	Point p3 = p1 + p2;

	p3.myprint();

	system("pause");
}
