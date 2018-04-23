#include <iostream>
#include <string>

using namespace std;

int main()
{
	int grade;
	while (cin >> grade)			//grading grades
	{
		cout << ((grade < 60) ? "fail" : (grade >= 60 && grade <= 75) ? "low pass" : (grade > 75 && grade <= 90) ? "pass" : "high pass")<<endl;
		if (grade < 60)
			cout << "fail";
		else if (grade >= 60 && grade <= 75)
			cout << "low pass";
		else if (grade > 75 && grade <= 90)
			cout << "pass";
		else
			cout << "high pass";
		cout << endl;
	}
}