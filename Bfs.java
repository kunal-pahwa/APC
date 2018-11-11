import java.util.*;
public class Bfs{
  
  public static void printhelper(int edges[][],int sv,boolean visited[]){
    if(visited[sv] == false){
      Queue<Integer> qu = new LinkedList<Integer>();
      qu.add(sv);
      boolean k=qu.isEmpty();
      while(k == false){
        k=qu.isEmpty();
        if(k==false)
        {Integer removed=qu.remove();
        
                System.out.print(removed+" ");
        
        //qu=qu.remove();
        for(int i=0;i<edges.length;i++){
          if(edges[removed][i]==1 && visited[i]==false){
            qu.add(i);
            visited[i]=true;
          }
        }
      }
        
      }
    }
  }
  public static void print(int edges[][]){
    boolean visited[] = new boolean[edges.length];
    printhelper(edges,0,visited);
        
    }
    
  
  
  public static void main(String args[]){
    int n;
    int e;
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    e = sc.nextInt();
    int edges[][] = new int [n][n];
    for(int i = 0;i < e;i++){
      int fv;
      int sv;
      fv = sc.nextInt();
      sv = sc.nextInt();
      edges[fv][sv]=1;     
    }
    print(edges);
  }
  
}