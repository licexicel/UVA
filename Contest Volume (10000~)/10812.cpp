#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int Cases;
	
	long long int ScoreA,ScoreB;//a+b a-b
	cin >> Cases;
	while(Cases--){
		cin >> ScoreA >> ScoreB;
		long long int  RealA = 0, RealB = 0;
		RealA = (ScoreA+ScoreB)/2;// 50 60 g 110 10
		RealB = ScoreA - RealA;
		if( ( abs(RealA - RealB) != ScoreB) || RealB < 0){
			cout << "impossible"<<endl;
			
		}
		else if(RealA >= RealB){
			cout <<RealA<<" "<<RealB<<endl;
		}
		else if(RealB > RealA){
			cout <<RealB<<" "<<RealA<<endl;
		}
		
	}
}
