
package practice;


public class LCS {
    static char[][] b=new char[100][100];
    static int lcs(char[] x,char[]y,int m,int n){
       int l[][]=new int[m+1][n+1];
       for(int i=0;i<=m;i++){
           for(int j=0;j<=n;j++){
               if(i==0||j==0)
                   l[i][j]=0;
               else if(x[i-1]==y[j-1]){
                   l[i][j]=l[i-1][j-1]+1;
                   b[i][j]='/';
               }
               else
               {
                   l[i][j]=max(l[i-1][j],l[i][j-1]);
                   if(l[i][j]==l[i-1][j])
                       b[i][j]='|';
                   else
                       b[i][j]='-';
               }
           }
       }
        System.out.println(" "+l[m][n]);
       return l[m][n];
    }
    static int max(int a,int b){
        return(a>b)?a:b;
    }
    static void print(char b[][],char x[],int i,int j){
        if(i==0||j==0)
            return;
        if(b[i][j]=='/'){
            print(b,x,i-1,j-1);
            System.out.print(x[i-1]+" ");
        }
        else if(b[i][j]=='|')
                print(b,x,i-1,j);
          else
            print(b,x,i,j-1);
    }
    public static void main(String[] args) {
        String str="AGGTAB";
        String str2="GXTXAYB";
        char x[]=str.toCharArray();
        char y[]=str2.toCharArray();
        int m=str.length();
        int n=str2.length();
        int l=lcs(x,y,m,n);
        System.out.println("Length "+l);
        System.out.println("Char sequence");
        print(b,x,m,n);
    }
}
