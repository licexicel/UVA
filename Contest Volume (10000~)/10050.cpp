#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int Cases;
	
	cin >> Cases;
	
	while(Cases--){
		int Days,Party,Arr[110];
		int Count = 0;
		bool Hartals[4000];
		cin >> Days;
		cin >> Party;
		memset(Arr,0,sizeof(Arr));
		memset(Hartals,false,sizeof(Hartals));
		
		for(int i = 1; i <= Party ; i++){
			cin >> Arr[i];
		}
		//
		for(int i = 1; i <= Days;i++){
			for(int j = 1; j <= Party ; j++){
				if(i >= Arr[j]){
					if(i % Arr[j] == 0 && i % 7 != 6 && i % 7 != 0){
						Hartals[i] = true;
						//cout << "i days " << i << "Party " <<j <<endl;
					}
				}
			}
		}
		for(int i = 1 ; i <= Days;i++){
			if(Hartals[i]){
				Count++;
			}
		}
		cout << Count <<endl;
	}
}
