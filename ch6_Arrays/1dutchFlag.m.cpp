#include <iostream>
#include <stdlib.h>
#include <time.h>
void printArray(int A[],int aSize) {
	using namespace std;
	for(int i=0; i != aSize; ++i) {
		cout << A[i] << "\t";
	}
	cout<<endl;
}
int main() {
	using namespace std;
	const int aSize=10;
	int A[aSize];	
	for(int i=0; i != aSize; ++i) {
		A[i] = rand() % 5;
	}
	printArray(A,aSize);	
	//maintain a state of array:-
	//a- last index with value less than key, b- last index with value== key, c last index with value > key
	int key = 2;
	int a = -1 ;
	int b = -1;
	int c = -1;
	int x = 0;
	for (int i=0; i!=aSize ; ++i) {
		x = A[i];
		if (A[i] > key) {
			++c;
		} 
		else if (A[i] == key) {
			A[i] 	= A[b+1];
			A[b+1]	= x;
			++b;
			++c;
		} 
		else {
			A[i] 	= A[b+1];
			A[b+1] 	= key;
			A[a+1] 	= x;
			++a;
			++b;
			++c;
		}
	}
	printArray(A,aSize);
}
