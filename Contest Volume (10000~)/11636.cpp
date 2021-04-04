//
//  main.cpp
//  11636
//
//  Created  on 2019/2/19.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int i,arr[100010];
    int count = 0;
    arr[0] = 0;
    arr[1] = 0;
    for(i = 2;i <10001;i++){
        int divisor = 1;
        int end = 1;
        while( i > divisor*2 ){
            divisor *= 2;
            end++;
        }
        arr[i] = end;
    }
    int cases;
    scanf("%d",&cases);
    while(cases > 0){
        count++;
        printf("%s %d%c %d\n","Case",count,':',arr[cases]);
        scanf("%d",&cases);
        
    }
    
    return 0;
}

