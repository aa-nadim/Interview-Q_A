/* input
1--3--
|  |  5
2--4--

5 6
1 2
1 3
2 4
3 4
3 5
4 5

space complexity O(2*Eges)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    /// graph here

    vector<int>adj[n+1];
    vector<int>:: iterator it;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        /// if it is derected graph
        /// then "adj[v].push_back(u);" hoba na
        /// space complexity O(Eges)
        adj[v].push_back(u);
    }

    ///print graph
    for(int i=0;i<=n;i++){
        cout<<i;
        for(it=adj[i].begin();it != adj[i].end();++it)
            cout<<" -> "<<*it;
		cout<<endl;
    }
    return 0;
}
