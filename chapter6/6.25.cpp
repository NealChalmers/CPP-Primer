#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *args[])			//main argument
{
	string s(*(args + 1));
	s += string(*(args + 2));
	cout << s;
}