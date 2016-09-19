#include <iostream>

using namespace std;

int main(){


	int x = 1;
	int i = ++x;

	int y = 1;
	int j = y++;



	cout << i << " " << x;
	cout << j << " " << y;

	return 0;
}