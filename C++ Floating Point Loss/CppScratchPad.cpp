#include<iostream>
using std::cout;
using std::endl;

//C++ Floating Point Loss   //ref link:https://www.youtube.com/watch?v=xiCPXMg7Tjk&list=PLRwVmtr-pp04ljVWgUFlQoBl9tqTzFh2N&index=6

void main()
{
	float big =   1000000000000000000000000000.0;
	float small = 0.0000000000000000000000000001;
	cout << big << endl;		//1e+27
	cout << small << endl;		//1e-28
	float result = big + small;
}