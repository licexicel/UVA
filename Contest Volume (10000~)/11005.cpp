#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	
	int Cases;
	int Count = 1;
	int Arr[40];
	int Cost[40];
	int Q;
	cin >> Cases;
	while(Cases--){
		cout << "Case " <<Count<<":"<<endl;
		memset(Arr,0,sizeof(Arr));
		memset(Cost,999999,sizeof(Cost));
		for(int i = 1 ; i <= 36 ; i++){
				cin >> Arr[i];
		}
		cin >> Q;
		int Target;
		int Value;
		while(Q--){
			cin >> Target;
			cout << "Cheapest base(s) for number " << Target << ":";
			int Minn = 99999999;
			
			for(int i = 2 ; i <= 36 ; i++){
				int Temp = Target;
				Value = 0;
				while(Temp){
					Value += Arr[Temp % i];
					Temp /= i;
				}
				Cost[i] = Value;
				Minn = min(Minn,Value);
			}
			for(int i = 2; i <= 36 ; i++){
				if(Cost[i] == Minn){
					cout << " " << i;
				}
			}
		}
		
		cout << endl;
		Count++;
	}
} 
