#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		int a=0,b=0;
		for(int i=0;i<l;i++){
			if(s[i]=='a'){
				a++;
			}
			else{
				b++;
			}
		}
		if(a==0||b==0){
			cout<<"0"<<endl;
		}
		else{
			if(a>=b){
				cout<<b<<endl;
			}
			else{
				cout<<a<<endl;
			}
		}
		
	}
	return 0;
}
