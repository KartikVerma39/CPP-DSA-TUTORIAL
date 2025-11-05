// Matrix 
 
// #include<iostream>
// using namespace std;
// int main(){
//     int n , m ;
//     cin>>n>>m;
//     int adj[n+1][m+1];
//     for(int i  = 0  ; i < m ; i++){
//         int u , v;
//         cin>>u>>v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }
//     return 0;
// }


// List

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int>adj[n+1];
//     for(int i = 0 ; i<m ; i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
// } 




// BFS in C++


// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Graph{
//     int vertices;
//     vector<vector<int>>adj;

// public:
//         Graph(int v){
//             vertices = v;
//             adj.resize(v);
//         }

//         void addEdge(int u , int v){
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }

//         void BFS(int start){
//             vector<bool>visited(vertices , false);
//             queue<int>q;

//             visited[start] = true;
//             q.push(start);

//             cout<<"BFS starting from node "<<start<<": ";

//             while(!q.empty()){
//                 int node = q.front();
//                 q.pop();
//                 cout<<node<<" ";

//                 for(int neighbour : adj[node]){
//                     if(!visited[neighbour]){
//                         visited[neighbour] = true;
//                         q.push(neighbour);
//                     }
//                 }
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     Graph g(6);
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 3);
//     g.addEdge(2, 4);
//     g.addEdge(3, 5);

//     g.BFS(0);

//     return 0;
// }





// DFS in C++



// #include<iostream>
// #include<vector>
// using namespace std;

// class Graph{
//     int V;
//     vector<vector<int>>adj;

// public:
//     Graph(int V){
//         this->V = V;
//         adj.resize(V);
//     }

//     void addEdge(int u , int v){
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     void dfsHelper(int node,  vector<bool>& visited){
//         visited[node] = true;
//         cout<<node<<" ";

//         for(int neighbour : adj[node]){
//             if(!visited[neighbour]){
//                 dfsHelper(neighbour , visited);
//             }
//         }
//     }

//     void DFS(int start){
//         vector<bool>visited(V, false);
//         dfsHelper(start , visited);
//     }
// };

// int main() {
//     Graph g(6);
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 3);
//     g.addEdge(2, 4);
//     g.addEdge(4, 5);

//     cout << "DFS starting from node 0: ";
//     g.DFS(0);
//     cout << endl;

//     return 0;
// }





// BFS in C++


// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// class Graph{
//     int vertices;
//     vector<vector<int>>adj;

//     public:

//     Graph(int v){
//         vertices = v;
//         adj.resize(v);
//     }

//     public:
//     void addEdge(int u , int v){
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     void BFS(int start){
//         vector<bool>visited(vertices ,false);
//         queue<int>q;

//         visited[start] = true;
//         q.push(start);

//         while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         cout<<node<<" ";
//         for(int it:adj[node]){
//             if(!visited[it]){
//                 visited[it] = true;
//                 q.push(it);
//             }
//         }
//     }
//         cout<<endl;
//     }
// };



// int main(){
//       Graph g(5);
//     g.addEdge(0,1);
//     g.addEdge(0,2);
//     g.addEdge(1,3);
//     g.addEdge(2,4);

//     cout << "BFS starting from node 0: ";
//     g.BFS(0);
// }



// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class Graph{
//     int vertices;
//     vector<vector<int>>adj;

//     public:
//     Graph(int v){
//         vertices = v;
//         adj.resize(v);
//     }

//     void addEdge(int u , int v){
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     void BFS(int start){
//         queue<int>q;
//         vector<bool>visited(vertices , false);
//         q.push(start);
//         visited[start] = true;
//         while(!q.empty()){
//             int Node = q.front();
//             q.pop();
//             cout<<Node<<" ";

//             for(auto it : adj[Node]){
//                 if(!visited[it]){
//                     visited[it] = true;
//                     q.push(it);
//                 }
//             }
//         }
//         cout<<endl;
//     }

// };

// int main(){
//     Graph g(6);         
//     g.addEdge(0,1);
//     g.addEdge(1,2);
//     g.addEdge(1,4);
//     g.addEdge(2,3);
//     g.addEdge(3,5);

//     cout<<"The BFS of the graph is : "<<endl;
//     g.BFS(0);
// }