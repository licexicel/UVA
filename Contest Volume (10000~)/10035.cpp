#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int A,B,C;
	int Carry;
	int TempCarry;
	while(cin >> A >> B){
		Carry = 0;
		TempCarry = 0;
		int lenA,lenB;// A > B 
		if(A == 0 && B == 0){
			return 0;
		}
		if(A < B){
			swap(A,B);
		}
		string StringA,StringB;
		StringA = to_string(A);
		StringB = to_string(B);
		lenA = StringA.length();
		lenB = StringB.length();
		
		lenA--;
		lenB--;
		while(lenA >= 0){
			
			if(lenB < 0){
				int Ares = StringA[lenA] - '0';
				if(Ares + TempCarry >= 10){
					TempCarry = 1;
					Carry++;
				}
				else{
					TempCarry = 0;
				}
				lenA--;
			}
			else{
				int Ares = StringA[lenA] - '0';
				int Bres = StringB[lenB] - '0';
				if(Ares + Bres + TempCarry >= 10){
					TempCarry = 1;
					Carry++;
				}
				else{
					TempCarry = 0;
				}
				lenA--;
				lenB--;
			}
			
		}
		if(Carry == 0){
			cout << "No carry operation."<<endl;
		}
		else if (Carry == 1){
			cout << "1 carry operation."<<endl;
		}
			else if (Carry >= 2){
			cout << Carry << " carry operations."<<endl;
		}
	}
} 
