import java.util.*;

class Sear 
{
	public int Dijkstra(int[][] graph, int m, int n, int src, int dest) {
	    int[] dist = new int[n];
	    int[] visited = new int[n];

	    for (int i = 0; i < n; i++) {
	        dist[i] = Integer.MAX_VALUE;
	        visited[i] = 0;
	    }

	    dist[src] = 0;

	    for (int i = 0; i < n - 1; i++) {
	        int min = Integer.MAX_VALUE;
	        int u = -1;

	        // Find the first unvisited node with smallest dist
	        for (int j = 0; j < n; j++) {
	            if (visited[j] == 0 && dist[j] < min) {
	                min = dist[j];
	                u = j;
	            }
	        }

	        if (u == -1) {
	            break;
	        }

	        visited[u] = 1;

	        for (int v = 0; v < n; v++) {
	            if (graph[u][v] != 0 && visited[v] == 0) {
	                if (dist[u] + graph[u][v] < dist[v]) {
	                    dist[v] = dist[u] + graph[u][v];
	                }
	            }
	        }
	    }

	    if (dist[dest] == Integer.MAX_VALUE) {
	        return -1;
	    } else {
	        return dist[dest];
	    }
	}


    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Sear ob = new Sear();
        int s, d;
        int m, n;
        
        System.out.println("\t Enter the adjacency matrix dimensions (m x n): ");
        m = sc.nextInt();
        n = sc.nextInt();
        
        int[][] vec = new int[m][n]; // 2D array for adjacency matrix

        System.out.println("\t Enter the elements of the adjacency matrix: ");
        for (int i = 0; i < m; i++) 
        {
            System.out.println("Enter for the node " + (i + 1));
            for (int j = 0; j < n; j++) 
            {
                vec[i][j] = sc.nextInt();
            }
        }

        System.out.println("\t Adjacency matrix is: ");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(vec[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("\t Enter the Source node: ");         
        s = sc.nextInt();         
        System.out.println("\t Enter the Destination node: ");         
        d = sc.nextInt();         
        s -= 1;         
        d -= 1; 

        int shortest = ob.Dijkstra(vec, m, n, s, d);
        if (shortest != -1) 
        {             
            System.out.println("\t Shortest path is " + shortest);         
        } 
        else 
        {             
            System.out.println("\t No such path exists.");         
        }

        sc.close();
    }
}
