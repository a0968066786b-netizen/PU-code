/*4_34.程式能力檢定題庫-題目難度 [*]-二元樹的節點分析 Binary Tree Node Analysis(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
pair<int,int> bfs(vector<int> &tree){
    vector<pair<int,int> > linked_list_tree
    (tree.size(),{0,0});
    queue<int> to_do_list;
    to_do_list.push(0);
    int index=1;//to tral.. left sub_point's index
    pair<int,int> point={};
    //.first is inside point,.second is outside point(leave)
    while( to_do_list.size()  ){
        int i=to_do_list.front();
        to_do_list.pop();
        if(index>=tree.size()){
        //this point is leave point,
        //but need to understand is real point or fake point
            if(tree[i]){
                point.second++;
            }
        }else{
            linked_list_tree[i].first=tree[index];
            to_do_list.push(index);
            linked_list_tree[i].second=tree[index+1];
            to_do_list.push(index+1);
            index+=2;
            point.first++;
        }
    }
    /*for(short i=0;i<linked_list_tree.size();i++){
        cout<<"index="<<i<<" left="<<
        linked_list_tree[i].first<<" right="<<
        linked_list_tree[i].second<<endl;
    }*/
    return point;
}
int main() {
    unsigned int n;
    cin>>n;
    vector<int>bin_tree(n-1,0);
    cin>>n;
    for(int &i:bin_tree)
        cin>>i;
    pair<int,int> point=bfs(bin_tree);
    cout<<point.first<<endl<<point.second<<endl;
    return 0;
}
/*
一、程式範例描述：
輸入以陣列表示法記錄的一棵二元樹。在陣列表示法中，索引值 0 的元素未用到，並被設定為 0。

實際上二元樹的樹根儲存在索引值 1 的位置。

我們假設給定的二元樹的元素數值皆為正整數，而空節點的數值為 0。

將這棵二元樹的內部節點的個數與樹葉節點的個數輸出。


二、輸入說明：
輸入一個正整數 n，紀錄這這棵二元樹在陣列表示法所需的空間。

再輸入 n 個整數。


三、輸出說明：
分行依序輸出這棵二元樹的內部節點的個數與樹葉節點的個數。

四、輸入範例：

4
0 1 2 3

8
0 5 4 2 0 6 1 0

五、輸出範例：

1
2


3
2
*/
