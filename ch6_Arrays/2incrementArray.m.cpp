#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
int main() {
	using namespace std;
	int vSize=10;
	vector<int> v;
	for(int i=0; i!=vSize; ++i){
		v.push_back(rand()%10);
		cout<<v[i]<<"\t";
	}
	cout<<endl;
	int carry=0;
	for(int i=0; i!=vSize; ++i) {
		v[i] += 1;
		carry=v[i]/10;
		v[i] %= 10;
		if(carry == 0){break;}
	}
	if(carry == 1){
		v.insert(v.begin(),1);
	}

	for(int i=0; i!=vSize; ++i){
		cout<<v[i]<<"\t";
	}
	cout<<endl;

	return 0;
}
