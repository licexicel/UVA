#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	
	string Input;
	
	while(cin >> Input){
		
		int Sum = 0;
		int Max = 1;
		for(int i = Input.length()-1 ; i >= 0  ; i--){
			int Temp = 0;
			if(Input[i] >= '0' && Input[i] <= '9'){
				Temp+= Input[i] - '0';
				//cout << "T is " << Temp <<endl;
			}
			else if(Input[i] >= 'A' && Input[i] <= 'Z'){
				Temp+= Input[i] - 'A' + 10;
				//cout << "T is " << Temp <<endl;
			}
			else if(Input[i] >= 'a' && Input[i] <= 'z'){
				Temp+= Input[i] - 'a' + 36;
				//cout << "T is " << Temp <<endl;
			}
			if(Temp > Max){
				Max = Temp;
			}
			Sum += Temp;
			
		}
		int Index;
		for(Index = Max; Index < 62; Index++){
			if(Sum % Index == 0){
				cout << Index + 1 << endl;
				break;
			}
			
		}
		if(Index == 62){
			cout << "such number is impossible!\n";
		}
	}
} 
//https://yuihuang.com/uva-10093/
