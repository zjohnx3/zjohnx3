#include<iostream>
using namespace std;

int main(){
	int a,b,n=0;
	cin>>n;
	while (n--){
		cin>>a>>b;
		if (a>b){
			cout<<"A "<< a-b<< endl;
		}
		else if (a<b){
			cout<<"B "<< b-a<< endl;
		}
		else {
			cout<<0<<endl;
		}
	}
	return 0;
}
