#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	
	int Arr[40];
	memset(Arr,0,sizeof(Arr));
	Arr[0]=1;
	Arr[1]=1;
	for(int i = 2; i <= 40 ; i++){
		Arr[i] = Arr[i-1] + Arr[i-2];
	}
	//Start
	int Cases;
	cin >> Cases;
	while(Cases--){
		string Res = "";
		int Temp = 0;
		int Max;
		int Target;
		cin >> Target;
		//Find Max
		for(Max = 1 ; Max < 40;Max++){
			if(Arr[Max] > Target){
				break;
			}
		}
		//此時Base>Target先-1 
		Max--;
		//cout << "Max " << Max <<endl;
		//
		int Copy = Target;
		//cout << "Start " <<Copy<<endl;
		while(true){
			Temp = 0;
			
			//End
			if(Copy > Arr[Max]){
				//cout <<"Big " << Copy << " & " << Arr[Max] <<endl;
				Copy %= Arr[Max];			
				Res += "1";
				Max--;
			}
			else if(Copy == Arr[Max]){
				//cout <<"Eq " << Copy << " & " << Arr[Max] <<endl;
				Res += "1";
				for(int i = 1 ; i < Max ; i++){
					Res+="0";
				}
				break;
			}
			else if(Copy < Arr[Max]){
				//cout <<"Sm " << Copy << " & " << Arr[Max] <<endl;
				Res += "0";
				Max--;
			}
			
		}
		cout << Target << " = " << Res << " (fib)" <<endl;
	}
}

//第一次被騙，忘記fib最高40位，int會炸 
