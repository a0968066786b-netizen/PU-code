/*4_12.程式能力檢定題庫-題目難度 [*]-輸入數字總合計算(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int str2int(short &n,string &str){
    int sum=0;
    for( ;isdigit(str[n]);n++ ){
        sum=sum*10+int(str[n]-'0');
    }
    return sum;
}

int main() {
    string s;
    getline(cin,s);
    int sum=0;
    for(short i=0;i<s.size();i++){
        if( isdigit(s[i]) ){
            sum+=str2int( i,s );
        }
    }
    cout<<sum<<endl;
   return 0;
}
/*
一、 程式範例描述:
輸入一字串，統計出：字串中包含的數之總和。


二、 輸入說明:
輸入的字串由英文字母、數字、空白組成(句子前面可能有空白，兩 words 的間隔空白可能不只一個)。


三、 輸出說明:
輸出字串中包含的數之總和。


四、 輸入範例:
25 is 5 5 book 100


五、 輸出範例:
135
*/
