#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> ip_table {"127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
	int amount;

	cin >> amount;
	if(amount > (int)ip_table.size())
        cout << "Too big - value must be smaller than or equal to vector size." << endl;
    else if(amount < 0)
        cout << "Value can't be smaller than zero." << endl;
    else{
        vector<string> ip_table_copy = ip_table;
        for(int i = 0; i < amount; ++i)
            cout << ip_table_copy[i] << " ";
        cout << endl;
    }

    return 0;
}
