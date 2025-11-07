/*4_49.程式能力檢定題庫-題目難度 [*]-單字長度排序(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool com(string a,string b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}

int main() {
    int n;
    cin>>n;
    vector<string>arr(n,"");
    for(string &s:arr)
        cin>>s;
    sort(arr.begin(),arr.end(),com );
    int len=0;
    for(int i=0;i<arr.size();i++){
        if(len==0 || arr[i].size()!=len ){
            if(len)
                cout<<endl;
            len=arr[i].size();
            cout<<len<<':'<<arr[i];
        }else{
            cout<<' '<<arr[i];
        }
    }
    return 0;
}
/*
一、程式範例描述：
輸入 n 個英文單字，請依照每個單字的字母個數由小到大列運出來。例如，輸入：see you tomorrow
輸出：
3:see you
8:tomorrow


二、輸入說明：
輸入一個數字 n (n <10)，然後輸入 n 個英文單字


三、輸出說明：
依照每個單字的字母個數由小到大列運出來


四、輸入範例：
3 see you tomorrow
10 Now it looks as though they are here to stay
4 Oh yesterday came suddenly

五、輸出範例：
3:see you
8:tomorrow

2:it as to
3:Now are
4:they here stay
5:looks
6:though

2:Oh
4:came
8:suddenly
9:yesterday
*/
