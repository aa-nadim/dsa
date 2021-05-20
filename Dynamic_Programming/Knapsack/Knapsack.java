/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package knapsack;

/**
 *
 * @author Prity
 */
import java.util.Scanner;
public class Knapsack {
   static  int v[][]=new int[10][10];
    static int maxprofit(int wi[],int b[],int MW,int n)
    {
         
        
        for(int i=0;i<=n;i++)
        {
            for(int w=0;w<=MW;w++)
            {
                if(i==0||w==0)
                    v[i][w]=0;
                else if(wi[i]<=w)
               {
                   if((b[i]+v[i-1][w-wi[i]])>v[i-1][w])
                   {
                     v[i][w]= b[i]+v[i-1][w-wi[i]];
                   }
                   else
                       v[i][w]=v[i-1][w];
               }
               else
                   v[i][w]=v[i-1][w];
               
            }
           
            }
        
            
      return v[n][MW];      
    }
   static void print(int v[][],int MW,int n)
   {
     for(int i=0;i<=n;i++)
        {
            for(int w=0;w<=MW;w++)
            {
                System.out.print(" "+v[i][w]);  
            }
            System.out.println("\n");
        }
   }
    public static void main(String[] args) {

        Scanner hp=new Scanner(System.in);
        int wi[]=new int[10];
        int b[]=new int[10];
        System.out.println("Enter the number of items");
        int n=hp.nextInt();
        System.out.println("Enter weights");
        for(int k=1;k<=n;k++)
        {
           wi[k]=hp.nextInt();
          
        }
        System.out.println("Enter profits");
        for(int k=1;k<=n;k++)
        {
           
           b[k]=hp.nextInt();
        }
        System.out.println("Enter max Capacity");
        int W=hp.nextInt();
        int k=maxprofit(wi,b,W,n);
        System.out.println("Max Profit  " +k);
        print(v,W,n);
}    
} 


