
#include<iostream>
#include<cstring>
using namespace std;
 
int main(){
	int c;
	cin>>c;
	for(int i=0;i<c;i++)
	{	string b;
		cin>>b;
		int k=b.size();
		k>10?cout<<b[0]<<k-2<<b[k-1]:cout<<b;cout<<endl;
}}
