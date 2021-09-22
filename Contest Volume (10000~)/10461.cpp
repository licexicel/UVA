#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int Arr[2000];
	int Start,End;
	for(int i = 1 ; i <= 400;i++){
		Arr[i] = i * i;
	}
	while(cin >> Start >> End){
		
		//End Condition
		if(Start == 0 && End == 0){
			break;
		}
		
		//Get Start Point
		int StartIndex = 1;
		while(Arr[StartIndex] < Start){
			StartIndex++;
		}
		//cout << "S " << StartIndex<< " is "<< Arr[StartIndex]<< endl;
		//Start
		int EndIndex = StartIndex;
		while(Arr[EndIndex] < End ){
			EndIndex++;
		}
		if(Arr[EndIndex] > End){
			EndIndex--;
		}
		//cout << "E " << EndIndex  << " is "<< Arr[EndIndex]<< endl;
		//Find
		cout<< EndIndex - StartIndex + 1 <<endl;
		
	}
} 
