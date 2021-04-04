//
//  main.cpp
//  100
//
//  Created on 2019/7/2.


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int cal(int input,int count){
    while(input != 1){
        if(input % 2 == 0){
            input = input /2;
        }
        else{
            input = input * 3 + 1;
        }
        count++;
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int a , b;
    while(cin >> a >> b){
         int i = a,j = b;
        int count = 1,maxx = 0;
        if(i > j){
            swap(i, j);
        }
        while(i <= j){
            maxx = max( cal(i,count), maxx);
            i++;
        }
        cout << a << " " << b << " "<< maxx << endl;
        
    }
    return 0;
    
    
}
