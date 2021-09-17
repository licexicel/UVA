#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	
	string Input;
	
	while(cin >> Input){
		int Odd = 0;
		int Even = 0;
		if(Input == "0"){
			return 0;
		}
		if(Input.length() <= 1){
			cout << Input << " is not a multiple of 11."<<endl;
		}
		else{
			
			for(int i = 0 ; i < Input.length() ; i++){
				
				if(i%2 == 0){
					Even += Input[i] - '0';
				}
				else{
					Odd += Input[i] - '0';
				}
			}
			
			if(abs(Even - Odd) == 0 ||
			   abs(Even - Odd) % 11 == 0){
				cout << Input << " is a multiple of 11."<<endl;
			}
			else{
				cout << Input << " is not a multiple of 11."<<endl;
			}
		}
	}
} 
