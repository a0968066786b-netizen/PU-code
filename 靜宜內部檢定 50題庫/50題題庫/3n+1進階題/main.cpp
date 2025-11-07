#include <iostream>

using namespace std;

int cycle(int n){//c是當前數列長度
    int c;
    for(c=1;n!=1;c++,n=(n%2)? 3*n+1:n/2);
    return c;
}

int main(){
    int left,right;
    while(cin>>left>>right){
        int max_cycle_length=1 ;
        for(int i=min(left,right),r=max(left,right);i<=r;i++){
            max_cycle_length=max(max_cycle_length,cycle(i));
        }
        cout <<left<<' '<<right<<' '<< max_cycle_length << endl;
    }
    return 0;
}
/*
一、程式範例描述：
3n+1 問題為：輸入一整數值 n，若 n 為奇數，則令 n = 3*n + 1；否則，令 n = n/2，以迴圈方式執行上述判斷，直到 n = 1 才停止。

我們將數字收斂的次數稱為 n 的 cycle length。

例如：
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
表示數字 22 的 cycle length 為 16。

今輸入兩個任意整數 i 和 j ( i < j 且 i, j < 1000000)，請輸出 i, j 之間(包含 i, j)的數值中，最大的 cycle length 值為何。


二、輸入說明：
任意 2 個整數 i, j (i <j 且 i, j < 1000000)

三、輸出說明：
i, j 及最大的 cycle length 值

四、輸入範例：
1 10
100 200
201 210


五、輸出範例：
1 10 20
100 200 125
201 210 89
*/
