/*4_48.程式能力檢定題庫-題目難度 [*]-整數位元組對調(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;
void ten_two (bool arr[32],int n){
    for(short i=0;i<32;i++,n/=2)
        arr[i]=n%2;
    return ;
}
int ten_two(bool arr[32]){
    int n=0,pw=1;
    for(short i=0;i<32;i++,pw*=2){
        n=pw * arr[i]+n;
    }
    return n;
}
int main() {
    int n;
    cin>>n;
    bool arr[32];
    ten_two(arr,n);

    for(short i=0;i<8;i++){
        swap(arr[i],arr[16+i]);
    }

    cout<<ten_two(arr)<<endl;
    return 0;
}
/*
一、程式範例描述：
輸入一個整數（4 個 byte），將其第 1 個 byte （最低位元組）和第 3 個 byte 對調之後的整數值印出。

例如：整數 65540 (216+22) 經過第 1 和第 3 byte 對調之後，會變成數字 262145 (218+20)


二、輸入說明：
輸入一個整數


三、輸出說明：
將其第 1 個 byte （最低位元組）和第 3 個 byte 對調之後的整數值印出


四、輸入範例：
1
65536
65538

五、輸出範例：
65536
1
131073
*/
