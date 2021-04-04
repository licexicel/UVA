#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
void cal(int x, int y,char ori, string inst);
int corx, cory;
bool map[55][55];
bool loss = false;
int main(){
    int inx, iny;
    char orient;
    string instr;
    cin >> corx >> cory;
    memset(map, false, sizeof(map));
    while(cin >> inx >> iny >> orient){
        loss = false;
        cin >> instr;
        cal(inx,iny,orient,instr);
    }
}
void cal(int x , int y,char ori ,string inst){
    for (int i = 0; i < inst.length(); i++){
        //direct operate
        if(loss == 1){
            break;
        }
        if(inst[i] == 'L'){
            if(ori == 'N'){
                ori = 'W';
            }
            else if(ori == 'S'){
                ori = 'E';
            }
            else if(ori == 'W'){
                ori = 'S';
            }
            else if(ori == 'E'){
                ori = 'N';
            }
        }
        else if(inst[i] == 'R'){
            if(ori == 'N'){
                ori = 'E';
            }
            else if(ori == 'S'){
                ori = 'W';
            }
            else if(ori == 'W'){
                ori = 'N';
            }
            else if(ori == 'E'){
                ori = 'S';
            }
        }
        else if(inst[i] == 'F'){
            if(ori == 'N'){
               if(map[x][y] == 0){
                   y++;
                   if(y > cory){
                       y--;
                       map[x][y] = 1;
                       loss = 1;
                   }
               }
               else{
                   //special cond
                   y++;
                   if(y > cory){
                       y--;
                   }
                   else{
                       //nothing
                   }
               }
            }
            else if(ori == 'S'){
                if(map[x][y] == 0){
                   y--;
                   if(y < 0){
                       y++;
                       map[x][y] = 1;
                       loss = 1;
                   }
               }
               else{
                   //special cond
                   y--;
                   if(y < 0){
                       y++;
                   }
                   else{
                       //nothing
                   }
               }
            }
            else if(ori == 'W'){
                if(map[x][y] == 0){
                   x--;
                   if( x < 0){
                        x++;
                        map[x][y] = 1;
                        loss = 1;
                   }
               }
               else{
                   //special cond
                   x--;
                   if(x < 0){
                       x++;
                   }
                   else{
                       //nothing
                   }
               }
            }
            else if(ori == 'E'){
                if(map[x][y] == 0){
                   x++;
                   if(x > corx){
                       x--;
                       map[x][y] = 1;
                       loss = 1;
                   }
               }
               else{
                   //special cond
                   x++;
                   if(x > corx){
                       x--;
                   }
                   else{
                       //nothing
                   }
               }
            }
        }
    }
    //output now
    if(loss == 1){
            cout << x << " " << y << " "
                << ori  << " LOST" << endl;
    }
    else{
        cout << x << " " << y << " " << ori << endl;
    }
    
}