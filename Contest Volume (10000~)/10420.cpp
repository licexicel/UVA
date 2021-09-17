#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Country[2010];

int main(){
	
	int N;
	string Input;
	string Temp;
	int count;
	cin >> N;
	for(int i = 0 ; i < N; i++){
		cin >> Country[i];
		getline(cin,Temp);
	}
	sort(Country,Country+N);
	//
	int i,j;
	for(i = 0 ; i < N ;){
		cout << Country[i] << " ";
		count = 1;
		for( j = i+1; j < N ;j++){
			if(Country[i] != Country[j]){
				break;
			}
			count++;
		}
		i = j;
		cout << count << endl;
	}
	
	
}
