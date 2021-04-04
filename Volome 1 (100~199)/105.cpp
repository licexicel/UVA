//
//  main.cpp
//  105
//
//  Created on 2019/7/2.


#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int L,R,H;
    int arr[50105];
    int max=0;
    memset(arr, 0, sizeof(arr));
    while(cin >> L >> H >> R){
        if( R > max){
            max = R;
        }
        for(int i = L; i < R;i++){
            if(H > arr[i]){
                arr[i] = H;
            }
        }
    }
    bool space = false;
    for(int i = 1; i <= max ;i++){
        if(arr[i-1] != arr[i]){
            if(space){
                cout << " ";
            }
            space = true;
            cout << i << " " <<arr[i];
        }
    }
    
    cout << endl;
    return 0;
}
