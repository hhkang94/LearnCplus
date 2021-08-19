//
//  DFS와BFS.cpp
//  Basic
//
//  Created by Hyun Hee Kang on 2021/08/08.
// https://www.acmicpc.net/problem/1260

#include <stdio.h>
#include<iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    
//    get input
    int N; // number of vertex in graph
    int M; // number of edge in graph
    int V; // start vertex point
    
    cin>>N;
    cin>>M;
    cin>>V;
    
//    cout<<"\nN: "<<N<<"\tM:  "<<M<<"\tV: "<<V<<endl;
    
    int u;
    int v;
    
    vector<vector<int>> adj(M+1);
    vector<vector<int>> adj2(M+1);
    
    for (int i = 0;i < M;i++){
        cin>>u;
        cin>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    
    
//    // sort number order for convenience
    for (int i = 1; i<=N; i++){
        sort(adj[i].begin(),adj[i].end(),less<int>());
    }

    for (int i = 1; i<=N; i++){
        sort(adj2[i].begin(),adj2[i].end(),greater<int>());
    }
    
//    for (int i = 0; i <= N; i++)
//        {
//            cout<< i << ": ";
//
//            for (int j = 0; j < adj2[i].size(); j++)
//            {
//                cout << adj2[i][j] << " ";
//            }
//            cout << endl;
//        }

//    cout<<"size: "<<adj.size()<<endl;

// DFS

    // initialize stack with start point
    vector<int> answer_dfs;
    vector<int> s = {V};
    
//    // DFS with while loop and stack
    while (!s.empty()){
        int cv = s.back();
        s.pop_back();
        
//        for (int i = 0; i<s.size();i++){
//            cout<<s[i]<<" ";
//        }
//        cout<<endl;
        
        if (!adj[cv].empty()){
            answer_dfs.push_back(cv);
            while(!adj[cv].empty()){
                s.push_back(adj[cv].back());
                adj[cv].pop_back();
            }
        }
    }
    
    for (int i = 0; i < answer_dfs.size(); i++)
        cout<<answer_dfs[i]<< " ";
    
    cout<<endl;

    // DFS

    // initialize stack with start point
    vector<int> answer_bfs;
    queue<int> q;
    q.push(V);
    
//    // DFS with while loop and stack
    while (!q.empty()){
        int cv2 = q.front();
        q.pop();
        
        if (!adj2[cv2].empty()){
            answer_bfs.push_back(cv2);
            while(!adj2[cv2].empty()){
                q.push(adj2[cv2].back());
                adj2[cv2].pop_back();
            }
        }
    }
    
    for (int i = 0; i < answer_bfs.size(); i++)
        cout<<answer_bfs[i]<< " ";
    
    cout<<endl;
    
    return 0;
}
