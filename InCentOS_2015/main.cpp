#include <cstdio>
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	cout << "hello world" << endl;

	cout << "hello world again" << endl;

	string str = "hello world";

	int i = 10;

	cout << str << endl;

	shared_ptr<int> intRef = make_shared<int>(100);

	cout << "intRef: " << *intRef << endl;

    printf("hello from InCentOS_2015!\n");

	system("pause");
    return 0;
}