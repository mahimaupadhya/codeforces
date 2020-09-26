#include<iostream>
using namespace std;
int main(){
	int n=0,b;
	cin>>b;
	for(int i=0;i<b;i++){
		string c;
		cin>>c;
		if(c == "++X" or c=="X++"){
			n++;
		}
		else
			n--;
	}
	cout<<n;
}
