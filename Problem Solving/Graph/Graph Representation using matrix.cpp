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

space complexity O(N*N)
*/

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    /// graph here

    int adj[n+1][m+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            adj[i][j]=0;
        }
    }

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    ///print graph
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
