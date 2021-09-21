#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;

int main(){
	long long int Res = 0,Val,factor;
	while(cin >> Val){
		Res = 0;
		long long int Count = 0;
		string Input;
		stringstream ss;
		getline(cin,Input);
		getline(cin,Input);
		
		ss.clear();
		ss << Input;
		while(ss >> factor){
			Count++;
		}
		ss.clear();
		ss << Input;
		if(Count == 1){
			cout << 0 <<endl;
		}
		else{
			Count--;
			while(ss >> factor){
				
				Res += factor * Count * pow(Val,Count-1);
				Count--;
				if(Count < 1){
					break;
				}
			}
			cout << Res <<endl;
		}
		
	}
	
}

