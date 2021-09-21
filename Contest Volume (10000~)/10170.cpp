#include<iostream>

using namespace std;


int main(){
	
	long long int Day,Size;
	while(cin >> Size >> Day){
		while(Day!=0){
			Day-=Size;
			if(Day<=0){
				cout<<Size<<endl;
				break;
			}
			else{
				Size++;
			}
		}
	}
} 
