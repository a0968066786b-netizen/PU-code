/*4_24.程式能力檢定題庫-題目難度 [**]-迴文數目(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <set>
using namespace std;
string str_half(string &line){
    string ans="";
    bool tf=true;
    auto first=line.begin()
    ,last=upper_bound(line.begin(),line.end(),line[0]);
    for(;last!=line.end();first=last
    ,last=upper_bound(last,line.end(),*(last+1) ) ){
        //cout<<""<<last-line.begin()<<endl;
        short str_size=(last-first);
        if(str_size%2){
            if(tf){
                ans+=string(str_size/2,*first);
                tf=false;
            }else
                return "";
        }else
            ans+=string(str_size/2,*first);
    }
    //cout<<(last-first)<<endl;
    if( (last-first) %2){
        if(tf){
            ans+=string( (last-first)/2,*first);
            tf=false;
        }else
            return "";
    }
    else
        ans+=string( (last-first) /2,*first);
    return ans;
}
int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string new_s=str_half(s);
    //cout<<"new_s="<<new_s<<endl;
    set<string> ans_per;
    if(new_s!=""){
        do{
            ans_per.insert(new_s);
        }while(next_permutation(new_s.begin(),new_s.end()));
        cout<<ans_per.size()<<endl;
    }else{
        cout<<"0\n";
    }
    //先排序、每種字元數量砍半，砍半後的新字串進行排列組合
    return 0;
}
/*
一、題目描述:

所謂的「迴文」，就是指一個字串從頭開始唸跟倒著唸結果完全一樣。
例如 abccaaccba 就是一個迴文字。

而所謂的「全排列」，則是指一個字串裡的每個字母在經過順序的調換以後所能得到的各種排列。
例如 abcd 的全排列就是：
abcd abdc acbd acdb adbc adcb bacd badc bcad bcda bdac bdca
cabd cadb cbad cbda cdab cdba dabc dacb dbac dbca dcab dcba

請寫出一個程式，對於輸入的字串，算出在這個字串的全排列裡有多少個是迴文。
例如:
aabb 的全排列為：aabb abab abba baab baba bbaa，其中 abba 和 baab 是迴文，因此 aabb的全排列裡有 2 個迴文。

二、輸入說明:

輸入一行長度至少為 1 且不超過 20 的字串，這個字串會完全由小寫的英文字母構成。

三、輸出說明:

請輸出這行字串的全排列中，存在的迴文總數(如果全排列裡一個迴文都沒有的話，就輸出 0)。

四、輸入範例:

(請注意程式只需輸入一筆測資並計算其迴文結果，以下多筆測資提供測試用)
測資一	cccaaddbb
測資二	aaabbb

五、輸出範例:

(請注意程式只需輸入一筆測資並計算其迴文結果，以下多筆測資提供測試用)
測資一	24
測資二	0

*/
