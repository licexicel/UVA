#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int size,summ,maxx;
    int arr[128][128];
    int sum[128][128];
    
	while(cin >> size){	
		memset(arr,0,sizeof(arr));
    	memset(sum,0,sizeof(sum));
		//input
	    for(int i = 1 ; i <= size ; i++){
	        for (int j = 1 ; j <= size ; j++){
	            cin >> arr[i][j];   
	        }
	    }
	    //to sum
	    for(int i = 1; i <= size ; i++){
	    	for(int j = 1 ; j <= size ; j++){
	    		sum[i][j] = sum[i-1][j] + arr[i][j];
			}
		}
		//find
		maxx = -2147483647;
		for(int i = 1; i <= size ; i++){
			for(int j = i; j <= size ; j++){
				summ = 0;
				for(int k = 1; k <=size;k++){
					summ = summ + sum[j][k] - sum[i-1][k];
					if(summ > maxx){
						maxx =summ;
					}
					if(summ < 0){
						summ = 0;
					}
				}
				
			}
		}
		cout << maxx <<endl;
	}	
    
}
