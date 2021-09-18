#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string A,B;
	int FreqA[30];
	int FreqB[30];
	bool Dup[30];
	while(getline(cin,A) && (getline(cin,B))){
		memset(FreqA,0,sizeof(FreqA));
		memset(FreqB,0,sizeof(FreqB));
		memset(Dup,false,sizeof(Dup));
		for(int i = 0 ; i <A.length();i++){
			if(A[i] >= 'a' && A[i] <= 'z'){
				int c = A[i] - 'a';
				FreqA[c]++;
			}
		}
		for(int i = 0 ; i <B.length();i++){
			if(B[i] >= 'a' && B[i] <= 'z'){
				int d = B[i] - 'a';
				FreqB[d]++;
			}
		}
		//
		for(int j = 0 ; j <= 25 ; j++){
			while(FreqA[j] != 0 && FreqB[j] != 0){
				cout << char(j+'a') ;
				FreqA[j]--;
				FreqB[j]--;
			}
		}	
		
		cout <<endl;
	}
}
