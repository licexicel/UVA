#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int N;
	int Arr[3010];
	int Count[3010];
	bool Jolly;
	while(cin >> N){
		memset(Arr,0,sizeof(Arr));
		memset(Count,0,sizeof(Count));
		Jolly = true;
		for(int i = 0 ; i < N ;i++){
			cin >> Arr[i];
		}
		for(int i = 1 ; i < N; i++){
			int Temp = abs(Arr[i-1] - Arr[i]);
			if(Temp < N){
				Count[Temp]++;
				if(Count[Temp] > 1 || Temp == 0){
					Jolly = false;
				}
				
			}
			else{
				Jolly = false;
			}
		}
		if(Jolly){
			cout<< "Jolly" <<endl;
		}
		else{
			cout<< "Not jolly" <<endl;
		}
	}
	
}
