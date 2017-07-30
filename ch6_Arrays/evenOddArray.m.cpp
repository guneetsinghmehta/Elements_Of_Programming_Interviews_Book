#include <iostream>
#include <stdlib.h>
#include <time.h>

void swap( int* a,int index1 , int index2) {
	int temp = a[index1];
	a[index1] = a[index2];
	a[index2] = temp;
}
int main() {
	using namespace std;
	srand(time(NULL));
	const int aSize=4;
	int a[aSize];

	//Filling random values
	for (int i=0 ; i!=aSize ; ++i) {
		a[i] = rand()%10;
		cout<<a[i]<<endl;
	}

	//swapping odd and even
	int evenPlace=0;
	int oddPlace = aSize-1;
	while ( evenPlace < oddPlace ) {
		if ( a[ evenPlace ] % 2 == 0) {
			++ evenPlace ;
		} else {
			swap(a,evenPlace,oddPlace);
			--oddPlace;
		}
	}
	cout << "Results **** \n";
	//printing after 
	for(int i=0; i != aSize ; ++i ) {
		cout << a[i] <<endl;
	}
	return 0;
}
