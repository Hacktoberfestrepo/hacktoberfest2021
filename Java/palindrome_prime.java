class pldrme
{
void main(String s)
{
int t=s.length();String s1="";String s2="";s=s+" ";
for(int i=0;i<=t;i++)
{
char x=s.charAt(i);
if(x!=' ')
{
s1=s1+x;
}
else
{
for(int j=0;j<s1.length();j++)
{
char y=s1.charAt(j);
s2=y+s2;
}
if(s1.equals(s2))
{
System.out.print(s2+" ");
}
s1="";
s2="";
}
}
}
}
