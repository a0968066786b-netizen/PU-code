/*4_46.程式能力檢定題庫-題目難度 [**]-旋轉字串(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
#include <cctype>
using namespace std;
int main() {
    string s[2];
    getline(cin,s[0]);
    s[1]=s[0];
    unsigned short first_i=0;
    char last_char='\0';
    for(unsigned short i=0;i<s[1].size();i++){
        if( isalpha(s[1][i]) ){
            if(last_char=='\0')
                first_i=i;
            swap(last_char,s[1][i]);
            if(islower(last_char)^ islower(s[1][i]) ){
                if( islower(last_char) ){
                    last_char=toupper(last_char);
                    s[1][i]=tolower(s[1][i]);
                }else{
                    last_char=tolower(last_char);
                    s[1][i]=toupper(s[1][i]);
                }
            }

        }
    }
    swap(last_char,s[1][first_i]);
    if(islower(last_char)^ islower(s[1][first_i]) ){
        if( islower(last_char) ){
            last_char=toupper(last_char);
            s[1][first_i]=tolower(s[1][first_i]);
        }else{
            last_char=tolower(last_char);
            s[1][first_i]=toupper(s[1][first_i]);
        }
    }

    cout<<s[1]<<endl;
    return 0;
}
/*
一、題目描述:

輸入一個字串，將字串中的非空白及標點字元往右挪移一個位置，形成一個新的字串，
原來字串的大小寫位置需保留不變。例如：
輸入： How about Mary?
輸出： Yho Wabou Tmar?

二、輸入說明:

輸入一個英文字串。

三、輸出說明:

將英文字母字元往右挪移一個位置後輸出。

四、輸入範例:

(請注意程式只需輸入一筆測資並計算其迴文結果，以下多筆測資提供測試用)
Try to study hard.
Yesterday, I listened to the radio.

五、輸出範例:

(請注意程式只需輸入一筆測資並計算其結果，以下多筆測資提供測試用)
Dtr yt ostud yhar.
Oyesterda, Y ilistene dt oth eradi.

*/
