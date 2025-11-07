/*4_11.程式能力檢定題庫-題目難度 [*]-二維整數座標點間的最短距離計算(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    short n;
    cin>>n;
    vector<pair<int,int> >arr;
    //.first is x,.second is y, a pair is a point
    double min_distance=2147438000;
    for(short i=0;i<n;i++ ){
        pair<int,int> xy;
        cin>>xy.first>>xy.second;
        arr.push_back(xy);
        if(arr.size()>1){
            for(unsigned short i=0;i<arr.size()-1;i++){
                min_distance=min(min_distance,
                sqrt(pow(xy.first-arr[i].first,2)
                +pow(xy.second-arr[i].second,2) ) );
            }
        }
    }
    cout<<fixed<<setprecision(1)<<min_distance<<endl;
    return 0;
}
/*
一、程式範例描述：
任意兩點之間的最短距離。


二、輸入說明：
輸入一個點的個數 n ，然後輸入 n 個二維整數座標值。


三、輸出說明：
這 n 個點任意兩點之間的最短距離。取到小數點 1 位（四捨五入）。



四、輸入範例：

1	3
5 3
2 7
5 1
2	4
5 3
2 9
1 15
3 7
3	5
2 9
11 3
7 16
5 38
12 2


五、輸出範例：

1	2.0
2	2.2
3	1.4
*/
