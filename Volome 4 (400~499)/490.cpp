//
//  main.cpp
//  490
//
//  Created on 2019/5/16.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    string input;
    char arr[101][101];
    int len[101];
    memset(len, 0, sizeof(len));
    memset(arr, '^', sizeof(arr));
    int count = 0;
    while(getline(cin,input)){
        len[count] = input.length();
    
        for(int i = 0;i<input.length();i++){
            arr[count][i]=input[i];     
        }
        arr[count][input.length()]='^';
        count++;
    }
    
    for(int i = 0 ; i < 100 ;i++){
        for(int j = count;j>=0;j--){
            if(arr[j][i] != '^'){
                cout<<arr[j][i];
            }        
        }
        cout << endl;
    }
    return 0;
}
