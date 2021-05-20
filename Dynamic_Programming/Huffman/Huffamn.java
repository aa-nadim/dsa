/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package huffman;

import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Scanner;

/**
 *
 * @author Prity
 * 
 */
class HuffmanNode{
    int data;
    char c;
    HuffmanNode left;
    HuffmanNode right;
    
}

class Mycomparator implements Comparator<HuffmanNode>{

    
    public int compare(HuffmanNode x, HuffmanNode y) {
        return x.data-y.data;//sorting in ascending order in value of data
    }
    
    
}
public class Huffamn {
   public static void printcode(HuffmanNode root,String s){
     if(root.left==null&&root.right==null&&Character.isLetter(root.c))  {
         System.out.println(root.c+" : "+s); 
         return ;
     }
     printcode(root.left,s+"0");
     printcode(root.right,s+"1");
   } 
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=6;
        char[] charArray={'a','b','c','d','e','f'};
        int[] charfrq={5,9,12,13,16,45};
        PriorityQueue<HuffmanNode>q=
                new PriorityQueue<HuffmanNode>(n,new Mycomparator());
        for(int i=0;i<11;i++){
            
        }
        for(int i=0;i<n;i++){
            HuffmanNode hn=new HuffmanNode();
            hn.c=charArray[i];
            hn.data=charfrq[i];
            hn.left=null;
            hn.right=null;
            q.add(hn);
        }
        HuffmanNode root=null;
        while(q.size()>1){
           HuffmanNode x=q.peek();
           q.poll();
           HuffmanNode y=q.peek();
           q.poll();
           HuffmanNode f=new HuffmanNode();
           f.data=x.data+y.data;
           f.c='-';
           f.left=x;
           f.right=y;
           root=f;
           q.add(f);
        }
        printcode(root,"");
    }
}
