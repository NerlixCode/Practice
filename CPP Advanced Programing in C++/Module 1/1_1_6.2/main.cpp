#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <float> v(5);
    float sum;

	cin >> v[0];

	sum = v.size() * v[0] + 5 + 0.5 + 2.3 + 4.7;

	v[1] = v[0] + 5;
	v[2] = v[0] + 0.5;
	v[3] = v[0] + 2.3;
	v[4] = v[0] + 4.7;

	cout << "sum: " << sum << "; avg: " << sum / v.size() << endl;
    return 0;
}
