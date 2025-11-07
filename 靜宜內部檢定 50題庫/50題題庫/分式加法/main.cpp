/*4_47.程式能力檢定題庫-題目難度 [*]-分式加法(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;
int GCD(int a,int b){
    if(a>b)
        swap(a,b);
    while(a){
        b%=a;
        swap(a,b);
    }
    return b;
}
int main() {
    pair<int,int> fraction[2]={};
    char ch;
    cin>>fraction[0].first>>ch>>fraction[0].second
    >>fraction[1].first>>ch>>fraction[1].second;

    int new_Den=fraction[0].second * fraction[1].second
    / GCD(fraction[0].second , fraction[1].second);

    fraction[0].first *= new_Den / fraction[0].second;
    fraction[1].first *= new_Den / fraction[1].second;

    pair<int,int>answer
    ={ (fraction[0].first+fraction[1].first),new_Den };
    int ans_gcd=GCD(answer.first,answer.second);


    answer.first/=ans_gcd;
    answer.second/=ans_gcd;

    cout<<answer.first<<'/'<<answer.second<<endl;
    return 0;
}
/*
一、程式範例描述：
輸入兩個分數，把兩個分數相加，變成一個約分過的最簡分數（如果分數的值大於 1，用假分數表示，不要轉成帶分數）。例如：
輸入： 1/4 1/2
輸出： 3/4


二、輸入說明：
輸入兩個分數，分子分母都是 1 到 9 的整數。


三、輸出說明：
輸出這兩個分數和的最簡分數


四、輸入範例：
1/4 1/2
2/3 3/4
1/8 3/8
五、輸出範例：
3/4
17/12
1/2
*/
