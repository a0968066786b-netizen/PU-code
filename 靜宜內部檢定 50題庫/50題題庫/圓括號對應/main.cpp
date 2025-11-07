/*4_32.程式能力檢定題庫-題目難度 [**]-圓括號對應 Parenthesis Matching(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

pair<int,int> match(vector<pair<int,int> >&arr,
string &s,int &n  ){
    pair<int,int> ans={n,-1};
    for(n++;n<s.size();n++){
        if(s[n]=='('){
            arr.push_back( match(arr,s,n) );
        }else if(s[n]==')'){
            ans.second=n;
            break;
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin,s);
    vector<pair<int,int> >arr;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            arr.push_back( match(arr,s,i) );
        }
    }
    for(pair<int,int> p:arr)
        cout<<p.first<<','<<p.second<<endl;
    return 0;
}
/*
一、程式範例描述：
找出給定的運算式中適當的左圓括號與右圓括號的對應配對，並輸出找到的配對的索引值。

若輸入的運算式無法找到對應的配對，無配對部份索引值以-1 填入。


二、輸入說明：
輸入一個包含圓括號的運算式，將運算式儲存到陣列中。假設輸入的運算式的長度小於等於 40。


三、輸出說明：
輸出找到的最接近的左圓括號與右圓括號配對的索引值。每輸出一個配對，就需換行。


四、輸入範例：

1
(a+(b*c)/(d-e)+f)

2
((a+b)-c*e)+(e*(f-g)
五、輸出範例：

1
3,7
9,13
0,16

2
1,5
0,10
15,19
12,-1
*/
