/*4_7.程式能力檢定題庫-題目難度 [*]-二進位制的加法(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int bin2dec(int num){
    int sum=0;
    for(int i=1;num;num/=10,i*=2){
        sum= num%2*i+sum;
    }
    return sum;
}
string bin2dec(int num,bool b){
    string s="";
    for( ;num ;num/=2)
        s= char(num%2+'0')+s;
    return s;
}
int main() {
    int a,b;
    while(cin>>a>>b){
        a=bin2dec(a);
        b=bin2dec(b);
        cout<<bin2dec(a+b,true)<<endl;
    }
    return 0;
}
/*
一、程式範例描述：
假設有一系統採 2 進位制（只有 0, 1）,寫一程式可做二個 2 進位制之數之加法。


二、輸入說明：
兩個二進位制的整數，數與數之間用 space 隔開。


三、輸出說明：
二進位制的整數


四、輸入範例：
111 1
1000 1001
10101 1010


五、輸出範例：
1000
10001
11111
*/
