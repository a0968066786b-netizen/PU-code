/*4_50.程式能力檢定題庫-題目難度 [*]-反轉句中的單字(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

short find_alpha(string &s,short num){
    for(; ! isalpha(s[num])&&num<s.size() ;num++);

    return num;

}


int main() {
    string line;
    getline(cin,line);
    short left=find_alpha(line,0);
    for(short i=left;i<line.size();i++){
        if( ! isalpha(line[i]) ){
            reverse(line.begin()+left,line.begin()+i);
            left=find_alpha(line,i);
            i=left;
            //cout<<"i="<<i<<endl;
        }
    }
    reverse(line.begin()+left,line.end());
    cout<<line<<endl;
   return 0;
}
/*
一、程式範例描述：
輸入一個句子，將句子中以空格、標點隔開的單字反過來列印。例如：
輸入： Good morning!
輸出： dooG gninrom!


二、輸入說明：
輸入一個英文句子


三、輸出說明：
將句子中的每個單字反過來列印


四、輸入範例：
Try to study hard
Yesterday, I listened to the radio.
Gagaoolala! Want your bad romance.

五、輸出範例：
yrT ot yduts drah.
yadretseY, I denetsil ot eht oidar.
alalooagaG! tnaW ruoy dab ecnamor.

*/
