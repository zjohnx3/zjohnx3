#include<iostream>
#include<string> //stod()
#include<sstream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string input;
	while (getline(cin,input)){
		stringstream ss(input);
		string s;
		double sum=0,x,dif=0,y;
		while (ss>>s){
			int check;
			for (int i=0;i<s.length();i++){
				if (s[i]==':'){
					check=(int)s[i-1];
					break;
				}
			}
			if (check%2==1){
				for (int i=0;i<s.length();i++){
					if (s[i]==':'){
						s.erase(s.begin(),s.begin()+i+1);
						break;
					}
				}
				x=stod(s);
				sum+=x;
			}
			else {
				for (int i=0;i<s.length();i++){
					if (s[i]==':'){
						s.erase(s.begin(),s.begin()+i+1);
						break;
					}
				}
				y=stod(s);
				dif+=y;
			}
		}
		cout<<sum-dif<<'\n';
	}
	return 0;
}
