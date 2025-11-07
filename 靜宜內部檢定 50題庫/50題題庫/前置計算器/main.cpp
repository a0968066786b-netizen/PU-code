/*4_38.程式能力檢定題庫-題目難度 [**]-前置計算器(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

double com(string &s,int &n,bool mon_per){//$==true,%==false
    n+=2;
    double xy[2]={};
    for(int i=0;i<2;i++){
        if(s[n]=='$'){
            xy[i]=com(s,n,true);
        }else if(s[n]=='%'){
            xy[i]=com(s,n,false);
        }else if( isdigit(s[n]) || s[n]=='-' ){
            int index=s.find(' ',n+1);
            if(index==string :: npos){
                xy[i]=stod(s.substr(n));
                n=s.size();
            }
            else{
                xy[i]=stod(s.substr(n,index-n));
                n=index+1;
            }
        }
    }
    //cout<<"xy[0]="<<xy[0]<<"\txy[1]="<<xy[1]<<endl;
    return (xy[0]+((mon_per)? xy[1]:-1*xy[1] ) )/2;
}

int main() {
    string s;
    getline(cin,s);
    double ans=0;
    for(int i=0;i!=string ::npos && i<s.size(); ){
        if(s[i]=='$'){
            ans=com(s,i,true);
        }else if(s[i]=='%'){
            ans=com(s,i,false);
        }
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}
/*
一、程式範例描述：
假設有一前置運算式由任意數字與 ‘$’, ‘%’ 所組成，運算式長度不能超過 30 個字元。

’與
’代表 x $ y = (x + y)/2，’%’代表 x % y = (x - y)/2，x, y 是任意整數或浮點數。


二、輸入說明：
前置運算式包含任意整數與 ‘$’, ‘%’，輸入以空白鍵隔開且長度不可超過 30 個字元。


三、輸出說明：
運算式結果（到小數點六位）


四、輸入範例：
$ 3 9
% 5 7

五、輸出範例：
6.000000
-1.000000
*/
