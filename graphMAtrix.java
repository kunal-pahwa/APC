import java.io.*;
import java.util.*;

class Graph{
    private int V;
    public LinkedList<Integer> adj[];
    Graph(int v){
        V = v;
        adj = new LinkedList[v];
        for(int i=0 ; i<v;++i){
            adj[i] = new LinkedList();
        }
    }
     void dfs(int node,boolean visited[]){
        visited[node] = true;
        // System.out.print(node + " ");
       Iterator<Integer> it = adj[node].listIterator();
        while(it.hasNext()){
            int n = it.next();
            if(visited[n] == false){
                dfs(n,visited);
            }
        }
    }
    void add(int v,int e){
        adj[v].add(e);
    }
}
class TestClass {
    public static void main(String args[] ) throws Exception {
      
        Scanner sc = new Scanner(System.in);
        int nodes = sc.nextInt();
        int edges = sc.nextInt();
        // System.out.print(nodes+" "+ edges);
       Graph g = new Graph(nodes+1);
       boolean [] visited = new boolean[nodes+1];
       for(int i=1 ;i<=nodes ;i++){
           visited[i] = false;
       }
        for(int i = 0 ;i<edges;i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            g.add(a,b);
            g.add(b,a);
        }
        int x = sc.nextInt();
        g.dfs(x,visited);
        int connected =0;
        for(int i=1;i<=nodes;i++){
            if(visited[i] == false){
                connected++;
            }
        }
        System.out.println(connected);

    }
}
