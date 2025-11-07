/*4_14.程式能力檢定題庫-題目難度 [*]-尋找數字(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    set<int>index;
    for(auto iter=b.find(a);
    iter!=string::npos;
    iter=b.find(a,iter+1)){

    index.insert(iter);

    }
    cout<<index.size()<<endl;
    for(int i:index){
        cout<<(b.size()-i)<<' ';
    }
    cout<<endl;
   return 0;
}
/*
一、 程式範例描述：
請寫一個程式，判斷一個數字 N 出現在另外一個數字 M 中的次數。N 為小於 100 的非負整數，|M| ≤ 9999999。


二、 輸入說明：
每筆資料有兩個整數，N 和 M，0 ≤ N ≤ 99，-9999999 ≤ M ≤ 9999999。


三、 輸出說明：
每筆測資輸出一個整數，也就是 N 出現在 M 裡面的次數，以及 N 出現在 M 裡面的位數，輸出格式請參考以下範例。

第一行輸出的數值代表出現的次數，第二行將所在的位數加以輸入。

四、 輸入範例：

1	90 9090999
2	11 1110111
3	230 1230230

五、 輸出範例：
1
2 // 出現兩次

7 5 // 出現在右邊數過來第 7 位數與第 5 位數

2	4
7 6 3 2
3	2
6 3
*/
