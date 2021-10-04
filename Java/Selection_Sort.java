import java .io.*;
public class sesort
{
public static void main()throws IOException
{
BufferedReader ob=new BufferedReader(new InputStreamReader(System.in));
System.out.println("enter limit");
int n=Integer.parseInt(ob.readLine());
String a[]=new String[n];int i;int j;
System.out.println("enter elements");
for(i=0;i<n;i++)
{
a[i]=ob.readLine();
}
System.out.println("print elements");
String small="";int pos=0;
for(i=0;i<n;i++)
{
small=a[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(small.compareTo(a[j])>0)
{
small=a[j];
pos=j;
}
}
String t=a[i];
a[i]=a[pos];
a[pos]=t;
}
for(i=0;i<n;i++)
System.out.println(a[i]);
}
}
