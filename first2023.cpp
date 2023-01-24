// cmf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#include <iostream>
#include <string>
using namespace std;



// 工程1  测试类模板的成员函数
// 
// 类模板 中的两个成员函数 并不是在源码阶段确定的,模板的1st编译后,只能确定类名称,需要运行阶段在2nd编译之后 通过输入的数据类型,才能真正的函数实体:



class Cat1 {
public:
	void showCat1() {
		cout << "cat1 miao" << endl;
	}
};
class Cat2 {
public:
	void showCat2() {
		cout << "cat2 wang" << endl;
	}
};


template <class CT>
class MyCat {
public:
	CT ob0;
	void f1() {
		ob0.showCat1();
	}
	void f2() {
		ob0.showCat2();
	}
};


void test1() {
	MyCat<Cat1> yomi;
	yomi.f1();
	MyCat<Cat2> jerry;
	jerry.f2();
	/* 报错  Cat1只能调用Cat1的成员函数
	MyCat<Cat1> yomiA;
	yomiA.f2();
	MyCat<Cat2> jerryA;
	jerryA.f1();*/
}

int main()
{
	test1();
	std::cout << "Hello World!\n";
}
