package Graphs.Graph_Basics.Java;

import java.util.ArrayList;

//Undirected Weightless adjacency list graph implementation
class UndirectedGraph
{
    private ArrayList<ArrayList<Integer>> graph;

    public UndirectedGraph(int num_nodes)
    {
        graph = new ArrayList<>();

        for(int i = 0; i < num_nodes + 1; i++)
        {
            this.graph.add(new ArrayList<>());
        }
    }

    public void insert(int curr_node, int dest_node)
    {
        //Set the 
        this.graph.get(curr_node).add(dest_node);
    }

    public ArrayList<ArrayList<Integer>> getGraph()
    {
        return this.graph;
    }
}

public class Bfs {
    
    public static ArrayList<Integer> bfs_traversal(UndirectedGraph graph, int start_node, int num_nodes)
    {
        ArrayList<Integer> res = new ArrayList<>();

        //Visited array to keep track of the nodes
        boolean [] visited = new boolean[num_nodes + 1];

        ArrayList<Integer> bfs_queue = new ArrayList<>();

        //Add the starting node to the queue
        bfs_queue.add(start_node);
        visited[start_node] = true;

        while(!bfs_queue.isEmpty())
        {
            Integer curr_node = bfs_queue.remove(0);

            res.add(curr_node);
            
            //Add all neighbors to the bfs_queue
            for(Integer node: graph.getGraph().get(curr_node))
            {
                if(visited[node]) continue;
                bfs_queue.add(node);
                visited[node] = true;
            }
        }

        return res;
    }

    public static void main(String [] args)
    {
        UndirectedGraph graph = new UndirectedGraph(8);

        graph.insert(1, 2);
        graph.insert(1, 6);
        graph.insert(2, 3);
        graph.insert(4, 5);
        graph.insert(5, 7);
        graph.insert(6, 7);
        graph.insert(6, 8);
        
        System.out.println("BFS Graph Traversal");

        ArrayList<Integer> bfs_res = Bfs.bfs_traversal(graph, 1, 8);

        System.out.println(bfs_res);
    }
}
