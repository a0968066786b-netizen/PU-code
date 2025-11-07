/*4_22.程式能力檢定題庫-題目難度 [**]-計算找零錢的所有找法(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int const arr_n[3]={1,5,10};
int poss(int money,int n){//n have 1,5 and 10
    if(! n)
        return 1;
    int sum=0;
    for(int i=0;i<=money/arr_n[n];i++){
        sum+=poss(money-arr_n[n]*i ,n-1 );
    }
    return sum;
}
int main() {
    int money;
    cin>>money;
    cout<<poss(money,2)<<endl;
    return 0;
}
/*
一、程式範例描述：
如果你有不限量的 1 元、5 元、10 元的硬幣，要找 n 元給顧客，有幾種找法？
例如： 15 元中分別用(1 元, 5 元, 10 元)的找法有 (15,0,0)(10,1,0) (5,2,0) (5,0,1) (0,3,0) (0,1,1) 等 6 種。


二、輸入說明：
請輸入你要給顧客的金額大小。


三、輸出說明：
輸出共有幾種找零錢方法。


四、輸入範例：

1
10

2
20

3
100

五、輸出範例：

1
4

2
9

3
121
*/
