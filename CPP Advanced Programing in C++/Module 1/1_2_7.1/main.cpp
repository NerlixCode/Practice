#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct denomination{
    public:
        int value;
        int amount;
};

int main()
{
    vector<denomination> denominations{{10, 5}, {20, 6}, {50, 3}, {100, 4}, {200, 5}};
    int value[2];
    cin >> value[0] >> value[1];
    for(int i = 0; i < 2; ++ i){
        if(value[i] % 10 != 0){
            cout << "Incorrect amount of money. ";
            continue;
        }

        for(int j = (int)denominations.size() - 1; j >= 0 && value[i] != 0; --j)
            while(denominations[j].amount > 0 && value[i] >= denominations[j].value)
            {
                value[i] -= denominations[j].value;
                --denominations[j].amount;
            }

        cout << (value[i] == 0 ? "Enough money. " : "Not enough money.");
    }
    cout << endl;

    return 0;
}
