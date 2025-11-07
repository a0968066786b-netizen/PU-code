/*4_29.程式能力檢定題庫-題目難度 [**]-邏輯運算(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
string aorb(string a,string b){
    string ans="01234";
    for(short i=0;i<5;i++){
        ans[i]=( (a[i]=='1' || b[i]=='1' )? '1':'0' );
    }
    return ans;
}
string aandb(string a,string b){
    string ans="01234";
    for(short i=0;i<5;i++){
        ans[i]=( (a[i]=='1' && b[i]=='1' )? '1':'0' );
    }
    return ans;
}
int main() {
    string s,s1;
    getline(cin,s);
    s1=s.substr(0,5);
    cout<<s1;
    for(int i=6;i<s.size();i++){
        if(s[i]=='o'){//or
            cout<<"||"<<s.substr(i+3,5);
            s1=aorb(s1,s.substr(i+3,5) );
            i+=8;
        }else if(s[i]=='a'){//and
            cout<<"&&"<<s.substr(i+4,5);
            s1=aandb(s1,s.substr(i+4,5) );
            i+=9;
        }
    }
    cout<<" = "<<s1<<endl;
    return 0;
}
/*
一、程式範例描述：
對二進位的數字每一個位元進行 and (&&) 和 or (| |) 運算，運算規則如下：
1 and 1 = 1，1 and 0 = 0，0 and 1 = 0，0 and 0 = 0
1 or 1 = 1， 1 or 0 = 1， 0 or 1 = 1， 0 or 0 = 0


二、輸入說明：
每一輸入行是二進位字串加上運算子 and 或 or 所組成的運算式，其中的二進位字串長度都是 5 bit。每一行的最後會有一個空白，例如：
10001 or 10000 and 11101 and 01001
依序是一個運算元+空白+運算子+空白+運算元+...最後是運算元+一個空白。


三、輸出說明：
把運算式中的運算子 and 和 or 分別以 && 和 || 取代之，然後輸出運算後的答案（行末無空白）。


四、輸入範例：
10001 or 10000 and 11101 and 01001
10111 or 10111 or 10010 or 00101


五、輸出範例：
10001||10000&&11101&&01001 = 00001
10111||10111||10010||00101 = 10111
*/
