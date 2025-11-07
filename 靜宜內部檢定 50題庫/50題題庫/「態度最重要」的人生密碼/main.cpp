/*4_42.程式能力檢定題庫-題目難度 [*]-「態度最重要」的人生密碼(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    bool tf=true;
    unsigned int sum=0;
    for(char &ch:s){
        if(isalpha(ch)){
            sum+=toupper(ch)-'A'+1;
        }else{
            tf=false;
            break;
        }
    }
    if(tf){
        cout<<sum<<endl;
    }else{
        cout<<"Fail\n";
    }
    return 0;
}
/*
一、程式範例描述：
如果我們將英文字母依序編號 A = 1, B = 2, ……, Z = 26，將某個單字的各別字母轉換為前述的數字後相加便得到一個分數。
例如：
Knowledge 96
Attitude 100
由以上可推得「態度」最重要的人生密碼。小明為了驗證此事，請你寫支程式替他解惑。
 [提示：A-Z 的 ASCII 十進位數字 = 65-90, a-z 的 ASCII 十進位數字 = 97-122]


二、輸入說明：
輸入英文單字，大小寫不限。


三、輸出說明：
輸出轉換數字後的相加結果，若字串中包含非 A~Z(a~z)之字元，則輸出 Fail。


四、輸入範例：
hardwork
knowledge
attItuDE
~True


五、輸出範例：
98
96
100
Fail
*/
