import java .io.*;
public class lsearch
{
public static void main()throws IOException
{
BufferedReader ob=new BufferedReader(new InputStreamReader(System.in));
System.out.println("enter limit");
int n=Integer.parseInt(ob.readLine());
String a[]=new String[n];int i;
System.out.println("enter elements");
for(i=0;i<n;i++)
{
a[i]=ob.readLine();
}
System.out.println("search element");
String ele=ob.readLine();
int flag=0;
for(i=0;i<n;i++)
{
if(a[i].compareTo(ele)==0)
{
flag=1;
break;
}
}
if(flag==1)
System.out.println("element found");
else
System.out.println("not found");
}
}


