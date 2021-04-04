//
//  main.cpp
//  10101
//
//  Created on 2019/2/20.


#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    long long input,temp;
    int casenum = 0;
    while(scanf("%lld",&input) != EOF){
        
        casenum++;
        //15 digit
        printf("%4d%c",casenum,'.');
        int f = 0, g = 0, h = 0, i = 0;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        //case 0 ok
        if(input == 0){
            printf(" %d",0);
        }
        temp = input/10000000;
        if(temp >= 100){
            //7+7 =14
            if(temp >= 10000000){
                f = temp/10000000;
                g = (temp%10000000)/100000;
                h = (temp%100000)/1000;
                i = (temp%1000)/100;
                
            }
            //7+5 = 12
            else if(temp >= 100000){
                f = 0;
                g = temp/100000;
                h = (temp%100000)/1000;
                i = (temp%1000)/100;
              
            }
            //7+3 = 10
            else if(temp >= 1000){
                f = 0;
                g = 0;
                h = temp/1000;
                i = (temp%1000)/100;
            }
            //7+2 = 9
            else if(temp >= 100){
                f = 0;
                g = 0;
                h = 0;
                i = (temp%1000)/100;
               
            }
            if(f != 0 )printf(" %d %s",f ,"kuti");
            if(g != 0 )printf(" %d %s",g ,"lakh");
            if(h != 0 )printf(" %d %s",h ,"hajar");
            if(i != 0 )printf(" %d %s",i ,"shata");
            
        }
        if(input != 0){
            //bigger then 1kuti
            if( input > 9999999){
                a = (input/10000000)%100;
                b = (input%10000000)/100000;
                c = (input%100000)/1000;
                d = (input%1000)/100;
                e = input%100;
            }
            //biger then 1 lakh
            else if( input > 99999){
                a = 0;
                b = input/100000;
                c = (input%100000)/1000;
                d = (input%1000)/100;
                e = input%100;
                
            }
            //bigger then 1 hajar
            else if( input > 999){
                a = 0;
                b = 0;
                c = input/1000;
                d = (input%1000)/100;
                e = input%100;
            }
            //bigger then 1 shata
            else if( input > 99){
                a = 0;
                b = 0;
                c = 0;
                d = input/100;
                e = input%100;
            }
            // smaller then 1 shata
            else{
                a = 0;
                b = 0;
                c = 0;
                d = 0;
                e = input%100;
            }
        }
        if( (f != 0 || g != 0 || h != 0 || i!= 0) && a == 0)printf(" %s","kuti");
        if(a != 0)printf(" %d %s",a,"kuti");
        if(b != 0)printf(" %d %s",b,"lakh");
        if(c != 0)printf(" %d %s",c,"hajar");
        if(d != 0)printf(" %d %s",d,"shata");
        if(e != 0)printf(" %d",e);
        printf("\n");
    }
    return 0;
}
