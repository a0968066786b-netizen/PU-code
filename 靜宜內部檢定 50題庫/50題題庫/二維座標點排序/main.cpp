/*4_19.程式能力檢定題庫-題目難度 [*]-二維座標點排序(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
bool com(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first)
        return a.first<b.first;
    return a.second<b.second;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int> >arr;
    arr.resize(n);
    for(pair<int,int> &pr:arr  ){
        cin>>pr.first>>pr.second;
    }
    sort(arr.begin(),arr.end(),com);
    for(pair<int,int> &pr:arr  ){
        cout<<pr.first<<' '<<pr.second<<endl;
    }
    return 0;
}
/*
一、程式範例描述：
輸入 n 個二維平面上的座標點，所有的座標點按照以 x 軸座標為第一關鍵字，y 軸座標為第二關鍵字的優先順序從小到大來進行排序。


二、輸入說明：
輸入一個點的個數 n ，然後輸入 n 個二維整數座標值。


三、輸出說明：
按照以 x 軸座標為第一關鍵字，y 軸座標為第二關鍵字的方式從小到大來進行排序印出。


四、輸入範例：

1
3
5 3
2 7
5 1

2
4
3 7
6 8
3 4
9 3

3
6
2 8
7 9
5 4
6 2
2 4
5 8

五、輸出範例：

1
2 7
5 1
5 3

2
3 4
3 7
6 8
9 3

3
2 4
2 8
5 4
5 8
6 2
7 9
*/
