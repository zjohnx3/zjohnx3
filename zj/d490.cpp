#include<iostream>
using namespace std;

int main(){
	int a,b,sum;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (i%2==0){
			sum=sum+i;
		}
	}
	cout<<sum<<endl;
	return 0;
}
