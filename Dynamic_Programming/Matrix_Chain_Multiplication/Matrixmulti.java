
package MUL;


public class Matrixmulti {
   static int m[][]=new int[100][100],s[][]=new int[100][100];
    static int matrixchainorder(int p[],int n)
    {
        m[n+1][n+1]=0; 
        s[n+1][n+2]=0;
        int j,min,q;
        for(int d=1;d<n-1;d++)
        {
            for(int i=1;i<n-d;i++)
            {
               j=i+d;
                System.out.println(j+"Value"+i);
               min=Integer.MAX_VALUE;
               for(int k=i;k<=j-1;k++)
               {
                   q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                   System.out.println(q);
                   if(q<min){
                       min=q;
                       s[i][j]=k;
                   }
               }
              m[i][j]=min;
                System.out.println(m[i][j]);
            }
        }
        return m[1][n-1];
    }
    static void print_optimal_parens(int s[][],int i,int j)
    {
        if(i==j){
            System.out.print("A"+i);
            return;
        }
        System.out.print("(");
        print_optimal_parens(s,i,s[i][j]);
        print_optimal_parens(s,s[i][j]+1,j);
        System.out.print(")");      
    }
    public static void main(String[] args) {
        int p[]={5,4,6,2,7};
                int n=5;
           int k=matrixchainorder(p,n);
           System.out.println(s[1][n-1]+"Operation "+k);
           print_optimal_parens(s,1,n-1);
    }
}
