#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int Cases,Size,Count = 1;
	long long int Arr[110][110];
	cin >> Cases;
	string A,B;
	while(Cases--){
		memset(Arr,0,sizeof(Arr));
		bool NotSym = false;
		cin >> A >> B >> Size;
		for(int i = 1 ; i <= Size ; i++){
			for(int j = 1 ; j <= Size ; j++){
				cin>> Arr[i][j];
				if(Arr[i][j] < 0){
					NotSym = true;
				}
			}
		}
		for(int i = 1 ; i <= Size ; i++){
			for(int j = i ; j <= Size ; j++){
				 
				if(Arr[i][j] != Arr[Size+1-i][Size+1-j]){
					NotSym = true;
				}
				
			}
		}
		if(NotSym){
			cout << "Test #"<<Count <<": Non-symmetric."<<endl;
		}
		else{
			cout << "Test #"<< Count<<": Symmetric."<<endl;
		}
		Count++;
	} 
	
}
