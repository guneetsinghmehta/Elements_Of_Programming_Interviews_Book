#include<iostream>
#include<cmath>
#include<limits>
#include<random>
using namespace std;
int main(){
	cout<<abs(-1)<<endl<<fabs(-2.1)<<endl<<pow(2,3)<<endl;
	cout<<numeric_limits<float>::min()<<endl;
	cout<<(numeric_limits<int>::min())<<endl;	
	cout<<numeric_limits<double>::infinity()<<endl;
	cout<<min(1,2)<<endl;
	default_random_engine generator;
	uniform_int_distribution<int> distribution(0,9);
	cout<<distribution(generator)<<endl;
	cout<<distribution(generator)<<endl;
	cout<<distribution(generator)<<endl;
	return 0;
	
	
}
