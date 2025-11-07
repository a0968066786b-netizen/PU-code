#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

void bfs(vector<int> &tree,vector<short> &to_per_tree,
vector<pair<int,int> > &to_child_tree){
    for(short i=0;i<tree.size();i++ ){
        if(i){
            for(short j=0 ; true; ){
                if(tree[i]<=tree[j]){//insert to left
                    if(to_child_tree[j].first)
                        j=to_child_tree[j].first;
                    else{
                        to_child_tree[j].first=i;
                        to_per_tree[i]=j;
                        break;//have done(insert work)
                    }
                }else{
                    if(to_child_tree[j].second)
                        j=to_child_tree[j].second;
                    else{
                        to_child_tree[j].second=i;
                        to_per_tree[i]=j;
                        break;//have done(insert work)
                    }
                }
            }
        }
        //insert node to per and child tree
    }
    /*for(short j=0;j<to_child_tree.size();j++){
        cout<<"index="<<j<<" left="<<
        to_child_tree[j].first<<" right="<<
        to_child_tree[j].second<<endl;
    }
    cout<<"\n\n";*/

    /*for(int i:to_per_tree)
        cout<<i<<' ';
    cout<<endl;*/
    //just check can or not build this tree
    return;
}

int find_level(vector<pair<int,int> > &linked_list_tree,int index){
    if(linked_list_tree[index]==pair<int,int>{0,0} )//is leave point
        return 1;
    int left,right;
    if(linked_list_tree[index].first>0)
        left=find_level(linked_list_tree,linked_list_tree[index].first);
    else
        left=-1;
    if(linked_list_tree[index].second>0)
        right=find_level(linked_list_tree,linked_list_tree[index].second);
    else
        right=-1;
    return 1+max(left,right);

}

void front_tree(vector<int> &tree,vector<short> &to_per_tree,
vector<pair<int,int> > &to_child_tree,int &max_level){
    //.fisrt is left child point, .second is right child point
    queue<int> to_do_list;
    to_do_list.push(0);
    //.first is inside point,.second is outside point(leave)
    while( to_do_list.size()  ){
        int i=to_do_list.front();
        to_do_list.pop();
        if(i>=0)
            cout<<' '<<tree[i];
        else{
            cout<<" 0";
            int sum=i*-1;
            if(sum!=max_level){
                to_do_list.push(i-1);
                to_do_list.push(i-1);
            }
            continue;
        }
        if(to_child_tree[i].first){
            //child still have
            to_do_list.push(to_child_tree[i].first);
        }else{
            int sum=0;
            for(int j=i;j>-1;j=to_per_tree[j]){
                sum++;
            }
            //cout<<" tree[i]="<<tree[i]<<" sum="<<sum<<endl;
            if(sum!=max_level){
                to_do_list.push(-1*sum-1);
                //cout<<"\nleft is push\n";
            }

        }
        if(to_child_tree[i].second){
            //child still have
            to_do_list.push(to_child_tree[i].second);
        }else{
            int sum=0;
            for(int j=i;j>-1;j=to_per_tree[j]){
                sum++;
            }
            //cout<<"tree[i]="<<tree[i]<<" sum="<<sum<<endl;
            if(sum!=max_level){
                to_do_list.push(-1*sum-1);
                //cout<<"\nright is push\n";
            }
        }
    }
    /*int nul=(1<<(max_level) )-1-tree.size();
    for(int i=0;i<nul;i++)
        cout<<" 0";*/
    cout<<endl;
    return ;
}

int main(){
    unsigned short n;
    cin>>n;
    vector<int> tree(n,0);
    vector<short>to_per_tree(n,-1);
    vector<pair<int,int> > to_child_tree(tree.size(),{0,0});
    for(int &i:tree)
        cin>>i;
    bfs(tree,to_per_tree,to_child_tree);
    int level=find_level(to_child_tree,0);
    cout<<level<<"\n0";
    front_tree(tree,to_per_tree,to_child_tree,level);
    return 0;
}
/*
一、程式範例描述：
輸入 n 個正整數，將個別正整數依序加入到二元搜尋樹中。在二元搜尋樹中左子樹節點的數值會比樹根來的小；右子樹節點的數值會比樹根來的大。


二、輸入說明：
輸入一個正整數 n，假設 n <=10。

再輸入 n 個正整數來建立一棵二元搜尋樹。


三、輸出說明：
輸出二元搜尋樹的高度。

輸出二元搜尋樹的陣列表示法。索引值 0 的元素未用到，並被設定為 0。

高度是 2 則輸出4 筆資料；高度是 3 則輸出 8 筆資料；高度是 4 則輸出 16 筆資料。


四、輸入範例：

4
1 2 3 4
7
3 5 4 6 8 9 2

五、輸出範例：

4
0 1 0 2 0 0 0 3 0 0 0 0 0 0 0 4
5
0 3 2 5 0 0 4 6 0 0 0 0 0 0 0 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 9
*/
