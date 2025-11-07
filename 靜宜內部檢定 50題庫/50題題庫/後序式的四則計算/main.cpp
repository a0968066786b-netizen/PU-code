#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int str2int(short &n,string &s){
   int sum=0;
   for(;s[n]!=' ';n++){
       sum=sum*10+(s[n]-'0');
   }
   return sum;
}
int main() {
    string inpt;
    while( getline( cin , inpt ) ){
        stack<int> stk;
        for(short i=0;i<inpt.size();i++){
            if( isdigit(inpt[i]) )
                stk.push( str2int(i,inpt) );
            else if(inpt[i]=='+'){
                int arr[2]={stk.top()}; stk.pop();
                arr[1]=stk.top(); stk.pop();
                stk.push( arr[1]+arr[0] );
            }else if(inpt[i]=='-'){
                int arr[2]={stk.top()}; stk.pop();
                arr[1]=stk.top(); stk.pop();
                stk.push( arr[1]-arr[0] );
            }else if(inpt[i]=='*'){
                int arr[2]={stk.top()}; stk.pop();
                arr[1]=stk.top(); stk.pop();
                stk.push( arr[1]*arr[0] );
            }else if(inpt[i]=='/'){
                int arr[2]={stk.top()}; stk.pop();
                arr[1]=stk.top(); stk.pop();
                stk.push( arr[1]/arr[0] );
            }else if(inpt[i]=='%'){
                int arr[2]={stk.top()}; stk.pop();
                arr[1]=stk.top(); stk.pop();
                stk.push( arr[1]%arr[0] );
            }

        }
        cout<<stk.top()<<endl;
    }
   return 0;
}
/*
一、程式範例描述：
使用後序表示法來進行四則運算。


二、輸入說明：
輸入一個運算式的後序表示法，每個數字或符號之間用空格隔開。在後序式表示法中，其中輸入的數字個數在十個以內。


三、輸出說明：
輸出運算結果。


四、輸入範例：

1
12 5 2 * -

2
1 2 + 3 * 4 5 * + 25 -

3
1 2 + 3 4 * + 4 7 * 6 2 / - +

五、輸出範例：

1
2

2
4

3
40
*/
