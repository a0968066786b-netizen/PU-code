/*4_16.程式能力檢定題庫-題目難度 [*]-統計字母出現次(100.0)*/
#include <iostream>
#include <string>
//#include <stdio.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int alpha[26]={};
    for(char ch:s){
        if(islower(tolower(ch)) )
            alpha[ tolower(ch)-'a' ]++;
    }
    for(int i=0;i<26;i++){
        if(alpha[i])
            cout<<'('<<char( 'a'+i )<<','<<alpha[i]<<')';
    }
    cout<<endl;
    return 0;
}
/*
一、程式範例描述：
以小寫英文字母輸入一行英文句子後，列出句子中出現的英文字母以及每個字母出現的
的次數。如果輸入的字母包含大寫，將之視為小寫。


二、輸入說明：
任意輸入一行英文，內容不拘。


三、輸出說明：
依照英文字母的排序規則，列出句子中出現的英文字母以及其出現的的次數。


四、輸入範例：

1
How are you.

2
Good morning.

3
Try your best to do it.

五、輸出範例：
1
(a,1)(e,1)(h,1)(o,2)(r,1)(u,1)(w,1)(y,1)

2
(d,1)(g,2)(i,1)(m,1)(n,2)(o,3)(r,1)

3
(b,1)(d,1)(e,1)(i,1)(o,3)(r,2)(s,1)(t,4)(u,1)(y,2)
*/
