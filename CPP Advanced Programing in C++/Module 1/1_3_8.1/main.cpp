#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
	vector<int> v2;
	int maxValue;

	cin >> maxValue;
	if(maxValue % 2 == 1)
        ++maxValue;

    for(int i = 1; i <= maxValue; ++i)
        if(i % 2 == 0)
            v2.push_back(i);
        else v1.push_back(i);

    for(auto it1 = v1.begin(); it1 != v1.end(); ++it1){
        for(auto it2 = v2.begin(); it2 != v2.end(); ++it2)
            cout << *it1 + *it2 << " ";
        cout << endl;
    }

    for(auto it1 = v1.end() - 1; it1 != v1.begin() - 1; --it1){
        for(auto it2 = v2.end() - 1; it2 != v2.begin() - 1; --it2)
            cout << *it1 + *it2 << " ";
        cout << endl;
    }

    return 0;
}
