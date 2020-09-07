#include<bits/stdc++.h>
#define pii pair<int, int> 
#define vi vector<int> 
#define Graph unordered_map<int, vector<pii> >  
using namespace std;

void setSortestPath(v1 &minpath, Graph graph, int startnode) {

  // for tracking i ll be using set 
  // concept if visited element should be in set 
  // otherwise it is unvisited node 

  priority_queue< pii, vector<pii> , greater<int> >pq;

  minpath[startnode] = 0;

  for(auto it : graph[startnode]){
  
    // here 'it' is a pair of (node, corresponding weight)
    pq.push(make_pair(it.second, it.first));
  }


  while( !pq.empty() ) {

      auto tp = pq.top();
      pq.pop();
      
      int node = tp.second;
      int nodepathValue = tp.first;
      
      if(minpath[startnode] + nodepathValue < minpath[node] )
        // upate the value 
        
  }
}

int main() {
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);


  Graph graph;

  int edges;
  cin>>edges;
  while(edges--) {
    int u;
    int v;
    int w;
    cin>>u>>v>>w;
    graph[u].push_back(make_pair(v, w));
  }

    // vi minpath(graph.size()+1, INT_MAX);
    vi minpath(graph.size()+1, INT_MAX);


    int startnode = 0;
    setSortestPath(minpath, graph, startnode);

    cout<<"\nShortest paths corresponding to start node i.e 0 : "<<endl;
    for(int i=0; i<minpath.size(); i++)
      cout<< i <<" : "<<v1[i]<<endl;

}