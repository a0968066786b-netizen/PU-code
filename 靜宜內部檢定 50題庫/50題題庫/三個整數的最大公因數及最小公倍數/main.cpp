/*4_39.祘Α浪﹚肈畐-肈ヘ螟 [**]-俱计程そ计の程そ计(20.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
unsigned int GCD(unsigned int a,unsigned int b){
    if(a>b)
        swap(a,b);
    while(a){
        b%=a;
        swap(a,b);
    }
    return b;
}
int main() {
    unsigned int num[3],HCF[2],LCM[2];
    cin>>num[0]>>num[1]>>num[2];
    HCF[0]=GCD(num[0],num[1]);
    HCF[1]=GCD(HCF[0],num[2]);
    LCM[0]=num[0]*num[1]/HCF[0];
    LCM[1]=LCM[0]*num[2]/GCD(LCM[0],num[2]);
    cout<<HCF[1]<<' '<<LCM[1]<<endl;
    return 0;
}
/*
祘Α絛ㄒ磞瓃
璸衡タ俱计程そ计の程そ计


块弧
タ俱计计籔计ぇ丁ノ space 筳秨


块弧
程そ计:S, 程そ计:T (S の T タ俱计)


块絛ㄒ
54 90 36
75 180 300

き块絛ㄒ
18 540
15 900
*/
