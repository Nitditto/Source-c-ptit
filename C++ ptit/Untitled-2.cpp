#include<bits/stdc++.h>
using namespace std;

const long long max1=2147483647;
const long long max2=9223372036854775807;

bool check1(string s){
	for(char c:s){
		if(!isdigit(c)) return false;
	}
	return true;
}
bool check2(string s){
	if(s.size()>19) return false;
	if(s.size()<10) return false;
	return s>to_string(max1);
}
int main(){
	string s;
	long long sum=0;
	while(getline(cin,s)){
		string x;
		for(char c:s){
			if(isdigit(c)){
				x+=c;
			}
			else{
				if(!x.empty()){
					if(check1(x)&&check2(x)){
						long long num=stoll(x);
						if(num<=max2){
							sum+=num;
						}
					}
					x.clear();
				}
			}
		}
		if(!x.empty()&&check1(x)&&check2(x)){
			long long num=stoll(x);
			if(num<=max2){
				sum+=num;
			}
		}
	}
	cout<<to_string(sum);
}

