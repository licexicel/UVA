#include<iostream>

using namespace std;

int main(){
	
	int Cases, Count= 1;
	int NumA,NumB;
	
	cin >> Cases;
	
	while(Cases--){
		cin >> NumA >> NumB;
		int Res = 0;
		for(int i = NumA ; i <= NumB ; i++){
			if(i % 2 == 1){
				Res+=i;
			}
		}
		cout<<"Case "<<Count<<": "<<Res<<endl;
		Count++;
	}
}
 
