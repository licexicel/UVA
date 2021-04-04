//
//  main.cpp
//  255
//
//  Created on 2019/09/26.

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int kpos,qpos,qmov;
    int kx,ky,qx,qy,mx,my;
    bool notfine = false;
    while(cin >> kpos >> qpos >> qmov){
        kx = kpos / 8;
        ky = kpos % 8;
        qx = qpos / 8;
        qy = qpos % 8;
        mx = qmov / 8;
        my = qmov % 8;
        notfine = false;
        //第一種：同個點 Illegal state
        if( kpos == qpos){
            cout << "Illegal state" <<endl;
            notfine = true;
        }
        else{
            //第二種：非法移動：Illegal move
            //皇后移動到不同行列
            if(qx != mx && qy != my){
                cout << "Illegal move"<<endl;
                notfine = true;
            }
            else{
                //同行或同列的情況下，皇后越過國王或停在國王，或待在原地
                //待在原地
                if(qpos == qmov){
                    cout << "Illegal move"<<endl;
                    notfine = true;
                }
                //同x
                else if(qx == kx && qx == mx){
                    //同x的情況，左到右移動：皇后，國王，目的地
                    if(qy < ky && my >= ky){
                        cout << "Illegal move"<<endl;
                        notfine = true;
                    }
                    //同x的情況，右到左移動：目的地，國王，皇后
                    else if (qy > ky && my <= ky){
                        cout << "Illegal move"<<endl;
                        notfine = true;
                    }
                    //第三種：皇后離國王只有一格：move not allowed
                    //4種之1，左到右移動：皇后，目的地，國王
                    else if(qy < ky && my == (ky - 1)){
                        cout << "Move not allowed"<<endl;
                        notfine = true;
                    }
                    //4種之2，右到左移動：國王，目的地，皇后
                    else if(qy > ky && my == (ky + 1)){
                        cout << "Move not allowed"<<endl;
                        notfine = true;
                    }
                }
                //同y
                else if(qy == ky && qy == my){
                    //同y的情況，上到下移動：皇后，國王，目的地
                    if(qx < kx && mx >= kx){
                        cout << "Illegal move"<<endl;
                        notfine = true;
                    }
                    //同y的情況，下到上移動：目的地，國王，皇后
                    else if(qx > kx && mx <= kx){
                        cout << "Illegal move"<<endl;
                        notfine = true;
                    }
                    //第三種：皇后離國王只有一格：move not allowed
                    //4種之3，上到下移動：皇后，目的地，國王
                    else if(qx < kx && mx == (kx - 1)){
                        cout << "Move not allowed"<<endl;
                        notfine = true;
                    }
                    //4種之4，下到上移動：國王，目的地，皇后
                    else if(qx > kx && mx== (kx + 1)){
                        cout << "Move not allowed"<<endl;
                        notfine = true;
                    }
                }
                //第三種：皇后離國王只有一格，但是皇后跟國王x，y均不同
                else if((abs(kpos - qmov) == 1 || abs(kpos - qmov) == 8) &&
                         !((kx == 0 && mx == 7) || (ky == 0 && my ==7) )){
                        cout << "Move not allowed"<<endl;
                        notfine = true;
                }
                //第四種 皇后卡住國王所有移動： Stop
                else if((kpos == 0 && qmov == 9) ||
                        (kpos == 56 && qmov == 49) ||
                        (kpos == 7 && qmov == 14) ||
                        (kpos == 63 && qmov == 54)){
                    cout <<"Stop"<<endl;
                    notfine = true;
                }
                
            }
            
        }
        //第五種：無任何異常：continue
        if(!notfine){
            cout <<"Continue"<<endl;
        }
    //la
    }
    return 0;
}
