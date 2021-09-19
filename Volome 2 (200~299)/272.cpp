#include<iostream>

using namespace std;

int main(){
	string Input;
	bool Count = false;
	bool NotFirst = false;
	while(getline(cin,Input)){
		//if(NotFirst){
		//	cout<<endl;
		//}
		for(int i = 0 ; i < Input.length() ; i++){
			if(Input[i] == '\"' && Count == false){
				cout << '\`' <<'\`';
				Count = true;
			}
			else if(Input[i] == '\"' && Count == true){
				cout << '\'' << '\'';
				Count = false;
			}
			else{
				cout << Input[i];
			}
		}
		//NotFirst = true;
		cout <<endl;
	}
	
} 
