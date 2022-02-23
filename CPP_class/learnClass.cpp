#include <iostream>

using namespace std;

class Box {
public:
	double length;
	double width;
	double height;
	double get(void);
	void set(double len, double wid, double hei);
// Other access specifiers include 'private' and 'protected'
};

double Box::get(void) {
	return length * width * height;
}

void Box::set(double len, double wid, double hei)
{
	length = len;
	width = wid;
	height = hei;
}

int main()
{
	Box Box1;        // 声明 Box1，类型为 Box
	Box Box2;        // 声明 Box2，类型为 Box
	Box Box3;        // 声明 Box3，类型为 Box
	double volume = 0.0;     // 用于存储体积

	// 类的对象的公共数据成员可以使用直接成员访问运算符 . 来访问。

	// box 1 详述
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.width = 7.0;

	// box 2 详述
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.width = 13.0;

	// box 1 的体积
	volume = Box1.height * Box1.length * Box1.width;
	cout << "Box1 的体积：" << volume << endl;

	// box 2 的体积
	volume = Box2.height * Box2.length * Box2.width;
	cout << "Box2 的体积：" << volume << endl;


	// box 3 详述
	Box3.set(16.0, 8.0, 12.0);
	volume = Box3.get();
	cout << "Box3 的体积：" << volume << endl;
	return 0;
}
