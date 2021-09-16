#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int Size;
	string Word;
	int Map[10][10] = { {1,1,1,0,1,1,1},/*0*/
                		{0,0,1,0,0,1,0},/*1*/
                        {1,0,1,1,1,0,1},/*2*/
                        {1,0,1,1,0,1,1},/*3*/
                        {0,1,1,1,0,1,0},/*4*/
                        {1,1,0,1,0,1,1},/*5*/
                        {1,1,0,1,1,1,1},/*6*/
                        {1,0,1,0,0,1,0},/*7*/
                        {1,1,1,1,1,1,1},/*8*/
                        {1,1,1,1,0,1,1} /*9*/};
    
	while(cin >> Size){
		//End
		if(Size == 0){
			break;
		} 
		else{
			cin >> Word;			
			int Len = Word.length();
			int Width = (Size + 2) * Len;
			int Height = (2 * Size + 3);
			//cout << "len of width "<< Width <<endl;
			//cout << "len of height "<< Height <<endl;
			//Num Position
			int PosX = 0;
			int PosY = 0;

			for(int i = 0 ; i < Height;i++){				
				//Get Y Postion
				if(i == 0 ){
					PosY = 0;
				}
				else if( i > 0 && i < Size+1){
					PosY = 1;
				}
				else if( i == Size +1){
					PosY = 2;
				}
				else if( i > Size+1 && i < 2*Size+2){
					PosY = 3;
				}
				else if(i == 2*Size+2){
					PosY = 4;
				}
				//Start Print
				bool Status = false;
				for(int j = 0; j < Width ; j++){
					//Get X Position
					if(j <= Size+1){
						//cout << " b "<< j <<endl;
						PosX = 0;
					}//Move To Next Num				
					else if(j > Size && j < Width){
						int temp = j % (Size+2);
						if( temp == 0){
							PosX++;
							cout << " ";
							//cout <<" |"<<j<<" x "<<PosX<<"| ";
						}
						
					}
					//case 1: Column -
					//cout<<PosX;
					if(PosY == 0 ||PosY == 2||PosY == 4){
						int temp = (j % (Size+2));
						int RealY;
						//In The OutPut Range
						if(PosY == 0){
							RealY = 0;
						}
						else if(PosY == 2){
							RealY = 3;
						}
						else if(PosY == 4){
							RealY = 6;
						}
						if(temp != 0 && temp != Size+1){
							if(Map[(Word[PosX]-48)][RealY]){
								cout <<"-";
							}
							else{
								cout <<" ";
							}
						}					
						else{
							cout <<" ";
						}
					}
					//case 2: Row |
					else if(PosY == 1 || PosY == 3){
						int temp = (j % (Size+2));
						int RealY;
						if(PosY == 1){
							if(temp == 0){
								if(Map[(Word[PosX]-48)][1]){
									cout <<"|";
								}
								else{
									cout <<" ";
								}
							}
							else if(temp == Size+1){
								if(Map[(Word[PosX]-48)][2]){
									cout <<"|";
								}
								else{
									cout <<" ";
								}
							}
							else{
								cout <<" ";
							}
						}
						else if(PosY == 3){
							if(temp == 0){
								if(Map[(Word[PosX]-48)][4]){
									cout <<"|";
								}
								else{
									cout <<" ";
								}
							}
							else if(temp == Size+1){
								if(Map[(Word[PosX]-48)][5]){
									cout <<"|";
								}
								else{
									cout <<" ";
								}
							}
							else{
								cout <<" ";
							}
						}
						
						
					}
					else{
						cout <<"a";
					}
				
				}
				cout<<endl;
				
			}
		}
		//End This Case
		cout <<endl;
		
		
	}
	
	
} 
