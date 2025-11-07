/*4_9.程式能力檢定題庫-題目難度 [*]-數字比對(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    int n;
    set<int>st;
    map<int ,int>mp;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        if(find( st.begin(),st.end(),temp )!=st.end() )
            mp[temp]++;
        else{
            st.insert(temp );
            mp[temp]=1;
        }
    }
    for(const int &i:st){
        if(mp[i]!=1 )
            cout<<i<<' '<<mp[i]<<endl;
    }
   return 0;
}
/*
一、程式範例描述：
輸入一個正整數 n，再輸入 n 個整數，由小到大輸出有重複的整數值及其重複次數。


二、輸入說明：
輸入一個正整數 n，再輸入 n 個小於 10000 的整數。


三、輸出說明：
由小至大輸出有重複出現的整數及次數。


四、輸入範例：
5
6
8
6
8
8


五、輸出範例：
6 2
8 3
*/
