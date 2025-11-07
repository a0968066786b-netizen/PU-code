/*4_13.程式能力檢定題庫-題目難度 [*]-質因數分解(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

void com(vector<int> &side,vector<int> &sign,unsigned int n ){
    int temp=n;
    for(int i=2; i<=n/2&& temp>1 ;i++){
        for(  ; temp%i==0 ; temp/=i){
            auto iter=lower_bound(side.begin(),side.end(),i);
            if( iter!=side.end() ){
                sign[ iter-side.begin() ]++;;
            }else{
                side.push_back(i);
                sign.push_back(1);
            }
        }
    }
    return ;
}

int main() {
    unsigned int n;
    cin>>n;
    vector<int>side;//底數
    vector<int>sign;//指數
    com(side,sign,n);
    cout<<n;
    if(side.size()){
        cout<<'=';
        for(int i=0;i<side.size();i++){
            if(i)
                cout<<'*';
            cout<<side[i];
            if(sign[i]>1)
                cout<<'^'<<sign[i];
        }
        cout<<endl;
    }
   return 0;
}
/*
一、程式範例描述：
設計一程式，輸入一個正整數，改用質因數乘積表達此數，若該質因數出現多次，則用
次方表示之。
例如：
 2 = 2 ^ 2 * 3
50 = 2 * 5 ^ 2


二、輸入說明：
輸入一個正整數 n。


三、輸出說明：
輸出能表達正整數 n 的質因數乘積積。


四、輸入範例：

1	1000
2	127
3	123456

五、輸出範例：

1	1000=2^3*5^3
2	127
3	123456=2^6*3*643
*/
