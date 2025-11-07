/*4_8.祘Α浪﹚肈畐-肈ヘ螟 [*]-程そ计の程そ计(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    unsigned int arr[2];
    while(cin>>arr[0]){
        cin>>arr[1];
        if(arr[0]>arr[1])
            swap(arr[0],arr[1]);
        unsigned int temp[2]={arr[0],arr[1]};
        while( temp[0] ){
            temp[1]%=temp[0];
            swap(temp[0],temp[1]);
        }
        cout<<"程そ计:"<<temp[1]<<", 程そ计:"
        <<arr[0]*arr[1]/temp[1]<<endl;
    }

   return 0;
}
/*
肈ヘ磞瓃:

璸衡ㄢタ俱计程そ计の程そ计

块弧:

ㄢタ俱计计籔计ぇ丁ノ space 筳秨

块弧:

程そ计:S, 程そ计:T (S の T タ俱计)

块絛ㄒ:

27 18
1000 49
200 40

き块絛ㄒ:

程そ计:9, 程そ计:54
程そ计:1, 程そ计:49000
程そ计:40, 程そ计:200
*/
