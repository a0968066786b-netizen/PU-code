#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        for(char ch:s)
            if(ch>='A'&& ch<='C')
                cout<<char('X'+ch-'A');
            else
                cout<<char(ch-3);
        cout<<endl;
    }
    return 0;
}
/*
一、程式範例描述：



某公司為了避免在網路上傳輸的訊息被竊取,所以將所有的英文字母做移位,再傳給客戶。

假設傳輸的文字只考慮 26 個大寫英文字母,且移位規則如下:

原來字母

A

B

C

…

X

Y

Z

轉換後字母

D

E

F



A

B

C

請將客戶收到的已移位訊息自動轉回原來的文字。



二、輸入說明：

一段編碼過的文字，該文字由 26 個大寫英文字母組成。



三、輸出說明：

將收到的文字解碼。



四、輸入範例：

DSSOH

CRR



五、輸出範例：

APPLE

ZOO
*/
