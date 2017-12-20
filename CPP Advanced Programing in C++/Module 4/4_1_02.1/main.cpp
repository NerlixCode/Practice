#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const int & value)
{
	cout << value << " ";
}

int main()
{
    vector<int> v1 = {5, 6, 7, 8, 9, 0, 1, 2, 3, 4};
	vector<int> v2(10);
	vector<int> v3(10);
	int start_value;
	cin >> start_value;
	int stop_value;
	cin >> stop_value;

	if(start_value > stop_value)
        cout << "Stop value must be greater than or equal to start value." << endl;
    else if (start_value < 0 || start_value > v1.size() || stop_value > v1.size())
        cout << "Stop value and start value must be less than or equal to 9 and bigger or equal to 0." << endl;
    else
    {
        for (int i = 0, j = start_value; j <= stop_value; ++i, ++j)
            v2[i] = v1[j];
        copy(v1.begin() + start_value, v1.begin() + stop_value + 1, v3.begin());

        for_each(v1.begin(), v1.end(), print); cout << endl;
        for_each(v2.begin(), v2.end(), print); cout << endl;
        for_each(v3.begin(), v3.end(), print); cout << endl;
    }

	return 0;
}
