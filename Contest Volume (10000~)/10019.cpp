#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	
	int Cases;
	
	cin >> Cases;
	
	while(Cases--){
		int Input;
		int I2Count = 0;
		int I16Count = 0;
		cin >> Input;
		string TempStr = to_string(Input);
		//Base 2
		while(true){
			
			
			 if(Input == 1 || Input == 0){
				I2Count++;
				break;
			}
			else if(Input % 2 == 1){
				I2Count++;
			}
			Input /= 2;
			//cout <<"2 " << Input << endl;
		}
		//Base 16
		
		long long int Len = TempStr.length()-1;
		long long int Input16 = 0;
		int Index = 0;
		while(Index < TempStr.length()){
			
			Input16 += (TempStr[Index] - '0') * pow(16,Len);
			Input/=10;
			Len--;
			Index++;
		}
		//cout << "Aftet 16 " << Input16 <<endl;
		while(true){
				
			if(Input16 == 1 || Input16 == 0){
				I16Count++;
				break;
			}
			else if(Input16 % 2 == 1){
				I16Count++;
			}
			Input16 /= 2;
			//cout <<"16 " << Input16 << endl;
		}
		cout << I2Count << " " << I16Count <<endl;
	}
}

//itoa 不被uva認可\|/ 
//特殊情況 1時 


