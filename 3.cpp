#include <iostream>

using namespace std;

int main(){

        int i = 1;
	int j = 1;

	int x = ++i + i++;

	cout << x << " " << i << " " << j;

                 /*
	cout << i << endl;
        cout << j; */

	return 0;
}