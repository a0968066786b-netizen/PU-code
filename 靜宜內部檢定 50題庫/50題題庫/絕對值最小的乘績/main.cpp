/*4_6.程式能力檢定題庫-題目難度 [*]-絕對值最小的乘積(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    int num[5];
    while(cin>> num[0] ){
        num[0]=abs(num[0]);
        for(int i=0;i<4;i++){
            cin>>num[i+1];
            num[i+1]=abs(num[i+1]);
        }
        sort(num,num+5);
        cout<<num[0]*num[1]<<endl;
    }
   return 0;
}
/*
一、程式範例描述：
輸入五個整數，任取二個數相乘，輸出這些乘積中絕對值最小者。


二、輸入說明：
五個整數，數與數之間用 space 隔開。


三、輸出說明：
整數。


四、輸入範例：
2 -5 7 -2 1
3 4 5 -6 -7
-3 4 5 -2 -1


五、輸出範例：
2
12
2
*/
