/*4_31.程式能力檢定題庫-題目難度 [**]-三角形的最小路徑(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

struct answer{
    int sum;
    vector<int>list_;
};

int n_left_tree(int &n,int &h){
    if(h==1)
        return 1;
    int sum=1;
    for(int i=2;i<h;i++){
        sum+=i;
    }
    return sum+h+(n-sum);
}

answer dfs(vector<int> &tree,answer ans,int n,int h){
    ans.list_.push_back(tree[n]);
    ans.sum+=tree[n];
    int l=n_left_tree(n,h),r=l+1;
    //cout<<"n="<<n<<"  l="<<l<<"  r="<<r<<endl;
    if(l<tree.size()){
        answer left=dfs(tree,ans,l,h+1);
        answer right=dfs(tree,ans,r,h+1);
        if(left.sum<right.sum )
            ans=left;
        else
            ans=right;
    }
    //cout<<"n="<<n<<"  ans="<<ans.sum<<endl;

    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<int>tree(n,0);
    for(int &i:tree)
        cin>>i;
    answer sum={0,vector<int>(0)};
    sum=dfs(tree,sum,0,1);
    for(int i=0;i<sum.list_.size();i++){
        if(i)
            cout<<'+';
        cout<<sum.list_[i];
    }
    cout<<'='<<sum.sum<<endl;
    return 0;
}
