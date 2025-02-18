#include<iostream>

using namespace std;

void hello()
{
	cout << "Hello World!\n";
}
int addThree(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	hello();
	cout<<addThree(1,2,3);
}
