#include <iostream>
using namespace std;

int increment(int);
int increment(int, int);

int main(void) {
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2 == 0)
			var = increment(var);
		else
			var = increment(var,i);
	cout << var << endl;
	return 0;
}

int increment(int x){
  return x++;
}

int increment(int x, int y){
  return x+y;
}
