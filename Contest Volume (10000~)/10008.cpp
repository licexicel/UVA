#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
	
	int N;
	string T = "\n";
	cin >> N;
	getline(cin,T);
	string Input;
	bool visit[30];
	int Freq[30];
	memset(Freq,0,sizeof(Freq));
	memset(visit,false,sizeof(visit));
	while(N--){
		
		getline(cin,Input);
		for(int i = 0 ; i < Input.length(); i++){
			if(Input[i] >= 'A' && Input[i] <= 'Z'){
				Freq[Input[i] - 'A']++;
				int q = (Input[i] - 'A');
			}
			else if(Input[i] >= 'a' && Input[i] <= 'z'){
				Freq[Input[i] - 'a']++;
			}
		}		
	}
	for(int i = 0 ; i <= 25 ; i++){
		int Max = 0;
		int Index = -1;
		for(int j = 0 ; j <= 25 ; j++){
			if(visit[j] == false && Freq[j] > Max){
				Max = Freq[j];
				Index = j;				
			}
		}
		if(Index != -1){	
			cout << char(Index+'A') << " " << Freq[Index]<<endl;
			visit[Index] = true;
		}
	}
		
	
}
