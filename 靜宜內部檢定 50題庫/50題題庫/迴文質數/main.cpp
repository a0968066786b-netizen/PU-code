/*4_37.程式能力檢定題庫-題目難度 [*]-迴文質數(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int num=stoi(s);
    bool b=true;
    for(int i=0;i<s.size()/2 ;i++){
        if(s[i] != s[  s.size()-i-1]){
            b=false;
            break;
        }
    }
    if(b){
        if(num==1)
            b=false;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                b=false;
                break;
            }
        }
    }
    cout<<((b)? "Yes.\n":"No.\n");
    return 0;
}
/*
一、程式範例描述：
從鍵盤輸入一正整數，判斷其是否為迴文且為質數，若是，則輸出"YES"，若否，則輸出"NO"。

迴文係指從左至右與從右至左讀取此整數皆為同一數值。


二、輸入說明：
整數 N，0 < N。


三、輸出說明：
若 N 是迴文且為質數，輸出"Yes."，否則輸出"No."。


四、輸入範例：

121
191
五、輸出範例：
No.
Yes.
*/
