#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int Cases;
	int M,D;
	int Res;
	cin >> Cases;
	while(Cases--){
		cin >> M >> D;
		switch(M){
			case 1:				
				Res = abs(D + 18)%7;							
				break;
			case 2:
				Res = abs(D + 7)%7;
				break;
			case 3:
				Res = abs(D + 21)%7;
				break;
			case 4:
				Res = abs(D +24)%7;
				break;
			case 5:
				Res = abs(D +19)%7;
				break;
			case 6:
				Res = abs(D +22)%7;
				break;
			case 7:
				Res = abs(D +17)%7;
				break;
			case 8:
				Res = abs(D +20)%7;
				break;
			case 9:
				Res = abs(D +23)%7;
				break;
			case 10:
				Res = abs(D +18)%7;
				break;
			case 11:
				Res = abs(D +21)%7;
				break;
			case 12:
				Res = abs(D +16)%7;
				break;
			
		}
		switch(Res){
			case 0:
				cout << "Monday"<<endl;
				break;
			case 1:
				cout << "Tuesday"<<endl;
				break;
			case 2:
				cout << "Wednesday"<<endl;
				break;
			case 3:
				cout << "Thursday"<<endl;
				break;
			case 4:
				cout << "Friday"<<endl;
				break;
			case 5:
				cout << "Saturday"<<endl;
				break;
			case 6:
				cout << "Sunday"<<endl;
				break;
			
					
		}
	}
}
// 1.10
// 2.21
// 3.7
// 4.4
