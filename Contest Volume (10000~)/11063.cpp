#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	bool Neg = false;
	int Len,Arr[110];
	bool Sum[20010];
	int Count = 1;
	while(cin >> Len){
		Neg = false;
		memset(Sum,false,sizeof(Sum));
		Arr[0] = 1;
		for(int i = 1; i <= Len ; i++){
			cin >> Arr[i];
			if(Arr[i] <= 0){
				Neg = true;
			}
			if(Arr[i] < Arr[i-1]){
				Neg = true;
			}
		}
		// 7 8 9
		for(int i = 1 ; i <= Len ; i++){
			for(int j = 1; j <= Len ; j++){
				if(i<=j){
					if( Sum[Arr[i] + Arr[j]] == false){
						Sum[Arr[i] + Arr[j]] = true;
					}
					else{
						Neg = true;
						break;
					}
				}
			}
			
		}
		//End
		if(!Neg){
			cout <<"Case #" << Count << ": It is a B2-Sequence."<<endl; 
		}
		else{
			cout <<"Case #" << Count << ": It is not a B2-Sequence."<<endl; 
		}
		cout << endl;
		Count++;
	}
}
