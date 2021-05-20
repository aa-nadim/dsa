/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bellman;

import java.util.Scanner;

/**
 *
 * @author Prity
 */
public class bellman {
  static void Bellmanf(int graph[][],int v,int e,int s)
  {
      int dis[]=new int[v];
      for(int i=0;i<v;i++)
      
          dis[i]=Integer.MAX_VALUE;
          
      dis[s]=0;
      for(int i=0;i<v-1;i++){
      for(int j=0;j<e;j++)
      {
         if(dis[graph[j][0]]+graph[j][2]<dis[graph[j][1]])
             dis[graph[j][1]]=dis[graph[j][0]]+graph[j][2];
      }
      }
      for(int i=0;i<e;i++)
      {
          int x=graph[i][0];
          int y=graph[i][1];
          int w=graph[i][2];
          if(dis[x]!=Integer.MAX_VALUE &&dis[x]+w<dis[y])
              System.out.println("Grpah contains negative weight cycle");
      }
      System.out.println("Vertex distance from source");
      for(int i=0;i<v;i++)
      {
          System.out.println(i+"\t\t"+dis[i]);
      }
  }
    public static void main(String[] args) {
         Scanner hp=new Scanner(System.in);
        int v=5;
        int e=6;
        int graph[][]= new int[e][3];
        for(int i=0;i<e;i++)
        {
           graph[i][0]= hp.nextInt();
           graph[i][1]= hp.nextInt();
           graph[i][2]= hp.nextInt();
        }
        Bellmanf(graph,v,e,0);
    }
}
