/*4_17.程式能力檢定題庫-題目難度 [*]-十進位轉換十四進位(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s="";
    for(;n ;n/=14){
        s=((n%14<10)? char('0'+n%14):char('A'+n%14 -10) )
        +s;
    }
    cout<<s<<endl;
    return 0;
}
/*
一、程式範例描述：
將一個十進位數字轉換成十四進位，其 0 到 13 的表示法為 {0,1,…,9,A,…D}


二、輸入說明：
輸入一個十進位數字 n。 （500 <= n <= 10000 ）


三、輸出說明：
輸出其十四進位表示法。


四、輸入範例：

1
600

2
2000

3
5000

五、輸出範例：

1
30C

2
A2C

3
1B72
*/
