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

using namespace std;

int main(){
    
//    get input
    int N; // number of vertex in graph
    int M; // number of edge in graph
    int V; // start vertex point
    
    cin>>N;
    cin>>M;
    cin>>V;
    
    cout<<"\nN: "<<N<<"\tM:  "<<M<<"\tV: "<<V<<endl;
    
    int u;
    int v;
    
    vector<vector<int>> adj(M);
    
    for (int i = 0;i < M;i++){
        cin>>u;
        cin>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // sort number order for convenience
    for (int i = 1; i<=N; i++){
        sort(adj[i].begin(),adj[i].end(),greater<int>());
    }
    
    for (int i = 0; i < adj.size(); i++)
        {
            cout<< i << ": ";
            
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    
    cout<<"size: "<<adj.size()<<endl;

// DFS

    // initialize stack with start point
    vector<int> answer = {V};
    vector<int> s = {V};
    
//    // DFS with while loop and stack
    while (!s.empty()){
        int cv = s.back();
        s.pop_back();
        
        if (!adj[cv].empty()){
            s.push_back(adj[cv].back());
            answer.push_back(adj[cv].back());
            for (int i = 0; i < adj[cv].size(); i++)
                adj[adj[cv][i]].pop_back();
        }
    }
    
    for (int i = 0; i < answer.size(); i++)
        cout<<answer[i]<< " ";
    
    cout<<endl;

    return 0;
}
