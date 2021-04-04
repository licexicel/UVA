//
//  main.cpp
//  10550
//
//  Created  on 2019/2/19.


#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int start,first,second,third;
    
    scanf("%d %d %d %d",&start,&first,&second,&third);
    while( !(start == 0 && first == 0 && second == 0 && third == 0) ){
        //初始化的360*2 + 360
        int count = 1080;
        //第一步要表順時針，但刻度逆時針轉
        if(start == first){
          
        }
        else if(start-first > 0){
            count = count + 9*(start-first) ;
        }
        else{
            count = count + 9*(40-(first-start)) ;
        }
        //第二步
        //表逆時針，但刻度順時針
        //case1 2<1
        if(first ==second ){
           
        }
        else if( second - first > 0 ){
            count = count +  9*(second - first);
        }
        else{
            count = count + 9*(40-(first-second));
        }
        //最後表順時針，但刻度逆時針
        if(second == third){
           
        }
        else if(second - third > 0){
            count = count + 9*( second - third) ;
        }
        else{
            count = count + 9*(40-(third-second)) ;
        }
        printf("%d\n",count);
        scanf("%d %d %d %d",&start,&first,&second,&third);
    }
   
    return 0;
}
