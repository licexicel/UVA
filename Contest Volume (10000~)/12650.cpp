//
//  main.cpp
//  12650
//
//  Created on 2019/2/22.


#include <iostream>

int main(int argc, const char * argv[]) {
    int total = 0, live = 0;
    
    while(scanf("%d %d",&total,&live) != EOF){
        int arr[10000]={0};
        int run = 0;
        while(run < live){
            int found = 0;
            scanf("%d",&found);
            arr[found] = 1;
           
            run++;
        }
        if(live == total){
            printf("%c",'*');
        }
        else{
            int i = 1;
            for(i = 1; i < total+1;i++ ){
                
                if(arr[i] != 1){
                    printf("%d ",i);
                }
            }
        }
        printf("\n");
        
    }
    return 0;
}
