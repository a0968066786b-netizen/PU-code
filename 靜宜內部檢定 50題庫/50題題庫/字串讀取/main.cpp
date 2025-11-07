/*4_30.程式能力檢定題庫-題目難度 [*]-字串讀取(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    float arr[2]={};
    int index;
    while(cin>>index){
        char ch;
        float num;
        cin>>ch>>num;
        arr[ index%2 ]+=num;
    }
    cout<<arr[1]-arr[0]<<endl;;
    return 0;
}
/*
一、程式範例描述：
練習字串的分析與處理。


二、輸入說明：
一個字串，內部包含數組資料，每組資料有一個序號，及一個實數。
格式如下： 序號:實數。
請注意，序號有可能跳號。


三、輸出說明：
令 M 為序號為奇數的實數總和，N 為序號為偶數的實數總和，請印出差值 M - N。


四、輸入範例：

1
1:12.5 2:12 3:13.1 4:13.0

2
1:1.2 3:2.3

五、輸出範例：

1
0.6

2
3.5
*/
