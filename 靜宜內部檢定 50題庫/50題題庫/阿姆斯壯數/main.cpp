/*4_44.程式能力檢定題庫-題目難度 [**]-阿姆斯壯數(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
bool Armstrong_number(int num){
    int n=int(log10(num) )+1,sum=0;
    for(int i=num; i ;i/=10 ){
        sum+=int( pow(i%10,n) );
    }
    return sum==num;
}
int main() {
    int n,m;
    cin>>n>>m;
    bool b=true;
    for(int i=n;i<=m;i++){
        if(Armstrong_number(i) ){
            cout<<i<<' ';
            b=false;
        }
    }
    cout<<((b)? "none\n":"\n");
    return 0;
}
/*
一、程式範例描述：
所謂阿姆斯壯數(Armstrong number)指的是一個 n 位數的整數，它的所有位數的 n 次方和恰好等於自己。
例如：1634 = 1^4 + 6^4 + 3^4+ 4^4
請依題目需求在一定範圍內找出該範圍內的所有阿姆斯壯數。


二、輸入說明：
輸入包含兩個數字 n, m(n<m, n>0, m<=1000000)，代表尋找的範圍


三、輸出說明：
由小到大依序印出範圍內的阿姆斯壯數，若沒有則印出 none


四、輸入範例：
100 999
10 99


五、輸出範例：
153 370 371 407
none
*/
