#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    map<string, int> variables_map = { {"x", 0}, {"y", 1}, {"z", 2},
			{ "xx", 3 },{ "xy", 4 },{ "xz", 5 } };
	vector<int> values = { 9, 6, 5, 7, 3, 2};
	string variable_name;
	cin >> variable_name;

	for(auto key : variables_map)
        cout << "Variable: " << key.first << " at address: " <<
            key.second << " has value: " << values[key.second] << "; ";

    auto search = variables_map.find(variable_name);
    if(search != variables_map.end())
        cout << "Variable: " << search->first << " at address: " <<
            search->second << " has value: " << values[search->second] << "; ";
    else cout << "Variable: " << variable_name << " doesn't exist.";

    cout << endl;
	return 0;
}
