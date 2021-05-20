
package LCS;


public class LCSM {
    static char b[][]=new char[100][100];
    static int lcs(char x[],char y[],int m,int n)
    {
        int l[][]=new int[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                    l[i][j]=0;
                else if(x[i-1]==y[j-1]){
                    l[i][j]=l[i-1][j-1]+1;
                    b[i][j]='/';
                }
                else{
                 l[i][j]=max(l[i-1][j],l[i][j-1]);
                 if(l[i][j]==l[i-1][j])
                     b[i][j]='_';
                 else
                     b[i][j]='!';
                }
                
            }
        }
        return l[m][n];
    }
    static int max(int a,int b)
    {
        return(a>b)?a:b;
    }
    static void print_lcs(char b[][],char x[],int i,int j)
    {
        if(i==0||j==0)
            return;
        if(b[i][j]=='/')
        {
        print_lcs(b,x,i-1,j-1);
          System.out.println(x[i-1]+"");    
        }
        else if(b[i][j]=='!')
                {
                print_lcs(b,x,i,j-1);
                }
        else
            print_lcs(b,x,i-1,j);
        
    }
    public static void main(String[] args) {
        String s1="AGGTAB";
        String s2="GXTXAYB";
        char x[]=s1.toCharArray();
        char y[]=s2.toCharArray();
        int m=s1.length();
        int n=s2.length();
        int l=lcs(x,y,m,n);
        System.out.println("Length of LCS \t:"+l);
        System.out.println("Charater sequence \t");
        print_lcs(b,x,m,n);
    }
}
