#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	//§ä¤¤¦ì¼Æ 
	int Cases;
	int Street;//1~499
	int family[30010];//1~29999
	
	int total;
	int Min;
	cin >> Cases;
	while(Cases != 0){
		total = 0;
		Min = 0;
		memset(family,0,sizeof(family));
		cin >> Street;
		for(int i = 0 ; i < Street; i++){
			cin >> family[i];
			total+= family[i];
		}
		sort(family,family+Street);
		//Find mid
		int Pos = family[Street/2];		
		//Cal Min
		for(int i = 0 ; i < Street; i++){
			Min += abs(Pos - family[i]);
		} 
		cout << Min <<endl;
		Cases--;
	}
	
} 
