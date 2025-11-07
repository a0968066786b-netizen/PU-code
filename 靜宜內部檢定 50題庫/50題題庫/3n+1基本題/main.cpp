#include <iostream>

using namespace std;

int cycle(int n){//c是當前數列長度
    int c;
    bool b=false;
    for(c=1;n!=1;c++,n=(n%2)? 3*n+1:n/2){
        if(b)
            cout<<' ';
        cout<<n;
        b=true;
    }
    cout<<' '<<n;
    return c;
}

int main(){
    int num;
    while(cin>>num){
        cycle(num);
        cout << endl;
    }
    return 0;
}
/*
一、程式範例描述：
輸入一整數值 n，若 n 為奇數，則令 n = 3*n + 1；否則，令 n = n/2，以迴圈方式執行上述判斷，直到 n = 1 才停止，過程中需將 n 的值印出。
[補充：此題之學問在於是否能找到某個數字 n，使得程式無法收斂至 1?截至目前為止，尚未找到這樣的數字 n]


二、輸入說明：
正整數 n，n<1000000。


三、輸出說明：
輸出計算過程 n 的值。


四、輸入範例：
5
22
60


五、輸出範例：
5 16 8 4 2 1
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
60 30 15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
*/
