#include<iostream>
using namespace std;

unsigned long long int f(int n){
	return n*(n+1)/2;
}

unsigned long long int g(int n){
	while (n>0){
		if (n==1){
			return 1;
		}
		else {
			return f(n)+g(n-1);
		}
	}
}

int main(){
	int n;
	while (cin>>n){
		cout<<f(n)<<' '<<g(n)<<endl;
	}
	return 0;
}
