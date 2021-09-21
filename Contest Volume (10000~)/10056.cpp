#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
//Äê¤¤¤§Äê 
int main(){
	
	int Cases;
	
	cin >>Cases;
	
	while(Cases--){
		int Players,Target;
		double Pos;
		cin >> Players >> Pos >> Target;
		double Res =0;
		if(Pos != 0){
			Res = (pow(1-Pos,Target-1)*Pos)/(1-pow((1-Pos),Players));		
		}
		
		cout << fixed  << setprecision(4) << Res <<endl;
	}
} 
