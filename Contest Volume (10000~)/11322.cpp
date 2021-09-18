#include<iostream>

using namespace std;

int main(){
	long long int Input;
	while(cin >> Input){
		if(Input == 0){
			return 0;
		}
		while(Input > 9){
			int Temp = 0;
			while(Input > 9){
				Temp += Input %10;
				Input/=10;
			}
			Temp+=Input;
			Input = Temp;
		}
		cout << Input <<endl;
	}
}
