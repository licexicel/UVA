#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[1505];
    arr[1] = 1;
    int n2 = 1, n3 = 1, n5 = 1;
    for (int i = 2; i <= 1500;i++){
        while(arr[n2]*2 <= arr[i-1]){
            n2++;
        }
        while(arr[n3]*3 <= arr[i-1]){
            n3++;
        }
        while(arr[n5]*5 <= arr[i-1]){
            n5++;
        }
        arr[i] = min(arr[n2]*2,min(arr[n3]*3,arr[n5]*5));
    }

    cout << "The 1500'th ugly number is "<<arr[1500]<<"."<< endl;
}