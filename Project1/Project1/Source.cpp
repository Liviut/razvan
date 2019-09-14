#include <iostream>

using namespace std;

class car {
public:
	int brand;
	int model;
	car(int i, int j) {
		brand = i;
		model = j;
	}
};

int main()
{
	car drag(2,3);
	cout << drag.brand;
	cout << drag.model;

	return 0;
}