#include <iostream>

using namespace std;

int main(){

	int s = 0;
	long long p = 1;

        for(int i = 1; i <= 16;++i){
		s = s + i;
		p = p * i;
        }

        cout << s << " " << p;


	return 0;
}