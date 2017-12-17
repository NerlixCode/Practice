#include <iostream>
#include <set>
#include <functional>

using namespace std;

void PrintAfterFound(set <double, greater<double>> values, double value){
    bool isFind = false;
    for (auto it : values)
        if(isFind || it == value){
            isFind = true;
            cout << it << " ";
        }
    if(!isFind)
        cout << "Not found ";
}

int main()
{
    set <double, greater<double>> valuesA = { -1.1, 2.9, -2.3, 2.71 };
	set <double, greater<double>> valuesB = { -3.14, 2.71, -3.88, 2.19 };
	double value;
	cin >> value;

	PrintAfterFound(valuesA, value);
	PrintAfterFound(valuesB, value);

	cout << endl;
	return 0;
}
