/*4_3.程式能力檢定題庫-題目難度 [*]-三號出局(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int> circle;
    for(int i=1;i<=n;i++)
        circle.insert(i);
    for(int i=0;circle.size()>1;){
        //cout<<"i="<<i<<endl;
        for(auto index=circle.begin();
        index!=circle.end();){
            i++;
            if(i%3==0){
                //cout<<"erase="<<*index<<endl;
                index=circle.erase(index);
                if(circle.size()==1)
                    break;
            }else
                index++;
        }
    }
    //cout<<circle.size()<<endl; 1 2 3 4 5
    for(int i:circle)
        cout<<i<<endl;
    return 0;
}
/*
一、程式範例描述：
有 n 個人圍成一圈，順序排號（從 1 號編到 n 號）。從第一個人開始報數（從 1 到 3 報數），凡報到 3 的人出局退出圈子，問最後留下的是第幾號。


二、輸入說明：
輸入人數 n， n > 50


三、輸出說明：
最後一個未出局者的編號。


四、輸入範例：
1	5
2	60
3	100

五、輸出範例：
1	4
2	41
3	91
*/
