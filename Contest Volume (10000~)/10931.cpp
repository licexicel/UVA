#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int Input;
	while(cin >> Input){
		if(Input == 0 ){
			break;
		}
		int Count = 0;
		string Bin = "";
		if(Input == 1){
			Bin = "1";
			Count = 1;
		}
		else{
			while(true){
				if(Input == 1){
					Bin += '1';
					Count++;
					break;
				}
							
				//¶}ÀY~ 
				if(Input % 2 == 1){
					Bin += '1';
					Count++;
				}
				else{
					Bin += '0';
				}
				Input /= 2;
				
			}
			
		}
		cout << "The parity of ";
			for(int i = Bin.length()-1; i >= 0 ; i--){
				cout << Bin[i] ;
			}
		cout << " is "<< Count << " (mod 2)."<<endl;
		
	}
} 
