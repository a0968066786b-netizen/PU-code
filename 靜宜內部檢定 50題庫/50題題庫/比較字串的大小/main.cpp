#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    sort(s,s+3);
    for(string t:s)
        cout<<t<<endl;
    return 0;
}
/*
一、題目描述:

輸入三個實文字串，將此三個字串由小而大輸出到定串。

二、輸入說明:

輸入三個字串。

三、輸出說明:

先比較第一個字元大小，如同等再比較第兩個字元，如還相等繼續往下比，比完由小而
大輸出字串。

四、輸入範例:

abc
cde
bkg

五、輸出範例:

abc
bkg
cde
*/
