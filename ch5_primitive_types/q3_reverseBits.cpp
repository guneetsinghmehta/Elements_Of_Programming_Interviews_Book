
#include<iostream>
#include<cmath>
#include<limits>
#include<random>
using namespace std;
long swapBits(long,int,int);
int main(){
	unsigned long x=1;
	unsigned long y=0;
	for(int i=0;i<64;i++){
		y=y+((x>>i)&1L)*pow(2,63-i);
	}
	cout<<y<<endl;
	cout<<(numeric_limits<long>::max())<<endl;
	return 0;


}
