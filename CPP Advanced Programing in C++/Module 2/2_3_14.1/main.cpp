#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> results = { {"Sarah", 15 }, {"John", 12 }, {"Bart", 17} };

	for(auto key : results)
        cout << key.first << " result is : " << key.second << endl;
    cout << endl;

    auto it = results.find("Bart");
    results.erase(it);

    for(auto key : results)
        cout << key.first << " result is : " << key.second << endl;
    cout << endl;

    results.insert(pair<string,int>("Bob", 16));

    for(auto key : results)
        cout << key.first << " result is : " << key.second << endl;
    cout << endl;

	return 0;
}
