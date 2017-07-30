#include<iostream>
#include<cmath>
#include<limits>
#include<random>
using namespace std;
long swapBits(long,int,int);
int main(){
	cout<<swapBits(8,0,3)<<endl;
	return 0;
}

long swapBits(long x,int i,int j){
	long mask=0;	
	if(((x>>i)&1L)!=((x>>j)&1L)){
		mask=1<<i|1<<j;
	}
	return x^mask;
}

