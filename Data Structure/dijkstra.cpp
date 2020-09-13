#include<bits/stdc++.h>
#define pii pair<int, int>
#define vi vector<int>
#define Graph unordered_map<int, vector<pii> >
using namespace std;

void setSortestPath(vi &minpath, Graph graph, int startnode) {

  priority_queue< pii, vector<pii> , greater<pii> >pq;

  minpath[startnode] = 0;

  pq.push(make_pair(0, startnode));

  while( !pq.empty() ) {

      auto tp = pq.top();
      pq.pop();

      int node = tp.second;
      int nodepathValue = tp.first;

      for(auto element : graph[node]) {
        
          if(nodepathValue + element.second < minpath[element.first])
              minpath[element.first] = nodepathValue + element.second;

            pq.push(make_pair(minpath[element.first], element.first));
      }
  }
}

int main() {

//  this is used when you want to make a file as standard input and standard output
//   freopen("input.txt","r", stdin);
//   freopen("output.txt","w", stdout);

// though the graph is directed Graph
  Graph graph;

  int edges;
  cin>>edges;
  while(edges--) {
    int u;
    int v;
    int w;
    cin>>u>>v>>w;
    // input format : startnode  connectednode, weight
    // ex.  1 -> (1,2) (2, 10), (3,18)
    graph[u].push_back(make_pair(v, w));
  }

    vi minpath(graph.size()+1, INT_MAX);

    int startnode = 0;
    setSortestPath(minpath, graph, startnode);

    cout<<"\nShortest paths corresponding to start node i.e 0 : "<<endl;
    for(int i=0; i<minpath.size(); i++)
      cout<< i <<" : "<<minpath[i]<<endl;

}
