#include <iostream>
#include <set>

using namespace std;

void SumBetweenRange(multiset <double> values, double start_value, double stop_value){
    double sum = 0;
    bool startFound = false, endFound = false;
    for(auto it : values){
        if(it >= start_value)
            startFound = true;
        if(it >= stop_value)
            endFound = true;
        if(it >= start_value && it <= stop_value)
            sum += it;
    }
    if(startFound && endFound)
        cout << sum << " ";
    else cout << "Not found ";
}

int main()
{
    multiset <double> valuesA = { 1.1, 1.1, 2.3, 2.7, 2.9, 3.5 };
	multiset <double> valuesB = { 2.5, 2.7, 3.14, 2.5, 3.5, 3.5, 4.5 };
	double start_value, stop_value;
	cin >> start_value;
	cin >> stop_value;

	SumBetweenRange(valuesA, start_value, stop_value);
	SumBetweenRange(valuesB, start_value, stop_value);

	cout << endl;
	return 0;
}
