import java .io.*;
public class bsearch
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
int flag=0;int beg=0;int last=n-1;
while(beg<=last)
{
int mid=(beg+last)/2;
if(a[mid].compareTo(ele)==0)
{
flag=1;
break;
}
else if(a[mid].compareTo(ele)>0)
{
last=mid-1;
}
else
{
beg=mid+1;
}
}
if(flag==1)
System.out.println("found");
else
System.out.println("not found");
}
}


