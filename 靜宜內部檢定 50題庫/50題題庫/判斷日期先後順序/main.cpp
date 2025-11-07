#include <iostream>

using namespace std;

int main(){
    int day[2][3];
    while(cin>>day[0][0]){
        char ch;
        cin>>ch>>day[0][1]>>ch>>day[0][2]
        >>day[1][0]>>ch>>day[1][1]>>ch>>day[1][2];
        if(day[0][2]!= day[1][2] )
            cout << ((day[0][2]> day[1][2])? "After\n":"Before\n");
        else if(day[0][1]!= day[1][1] )
            cout << ((day[0][1]> day[1][1])? "After\n":"Before\n");
        else if(day[0][0]!= day[1][0] )
            cout << ((day[0][0]> day[1][0])? "After\n":"Before\n");
        else
            cout<<"Same\n";
    }


    return 0;
}
/*
一、程式範例描述：輸入日期 A 與日期 B。若日期 A 在 B 之前，輸出『Before』；若日期 A 在 B 之後，輸出
『After』；若日期 A 與 B 相同，輸出『Same』。


二、輸入說明：
兩個日期 A 與 B，格式為 dd/mm/yyyy。日期之間以空格隔開。


三、輸出說明：
兩個日期 A 與 B 的先後關係。


四、輸入範例：
04/05/1999 20/02/1995
04/05/1999 20/02/2003
20/02/2003 20/02/2003


五、輸出範例：
After
Before
Same
*/
