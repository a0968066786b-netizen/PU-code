/*4_15.程式能力檢定題庫-題目難度 [*]-整數集合之交集與聯集(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;

void output_set(set<int> &a){
    bool tf=false;
    for(int num:a){
        if(tf)
            cout<<',';
        cout<<num;
        tf=true;
    }
    cout<<endl;
    return ;
}

int main() {
    pair<short,int> n;
    set<int> a,b;
    while(cin>>n.first>>n.second){
        if(n.first==1)
            a.insert(n.second);
        else if(n.first==2)
            b.insert(n.second);
    }

    output_set(a);
    output_set(b);

    cout<<((includes(b.begin(),b.end(),a.begin(),a.end())
    )? "A屬於B\n":"A不屬於B\n");

    set<int>ans;

    set_intersection(a.begin(),a.end(),b.begin(),b.end(),
    inserter(ans,ans.begin() ) );
    output_set(ans);
    ans.clear();

    set_union(a.begin(),a.end(),b.begin(),b.end(),
    inserter(ans,ans.begin() ) );
    output_set(ans);

    return 0;
}
/*
一、 程式範例描述：
利用兩個一維整數陣列儲存兩個元素為正整數的集合 A、B，程式必須包括以下功能：
(1)插入一個集合元素；(2)運算兩個集合的交集；(3)運算兩個集合的聯集。


二、 輸入說明：
n1 n2：將正整數 n2 輸入集合 n1（n1 = 1 代表集合 A，n1 = 2 代表集合 B）。


三、 輸出說明：
印出 A 集合的所有元素，由小到大排列，中間以','分隔，不含空白。
印出 B 集合的所有元素，由小到大排列，中間以','分隔，不含空白。
判斷 A 集合是否為 B 集合的子集合，若是則印出"A屬於B"，否則印出"A不屬於B"。
印出 A、B 交集的所有元素，由小到大排列，中間以','分隔，不含空白。
印出 A、B 聯集的所有元素，由小到大排列，中間以','分隔，不含空白。

四、 輸入範例：

1

1 3↵
1 1↵
1 4↵
2 5↵
2 2↵
2 3
↵
2

1 26↵
1 19↵
2 51↵
2 26↵
2 33↵
2 19↵

3

1 38↵
1 11↵
1 24↵
1 50↵
2 11↵
2 38↵

五、 輸出範例：

1

1,3,4
2,3,5
A不屬於B
3
1,2,3,4,5

2

19,26
19,26,33,51
A屬於B
19,26
19,26,33,51

3

11,24,38,50
11,38
A不屬於B
11,38
11,24,38,50
*/
