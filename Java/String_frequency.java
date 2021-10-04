class freq
{
void main(String S)
{
int t=S.length();int c=0;int i;int j;
for(i=0;i<t;i=i+c)
{
c=0;
char x=S.charAt(i);
for(j=i;j<t;j++)
{
char y=S.charAt(j);
if(x==y)
{
c++;
}}
System.out.println(S.charAt(i)+"\t"+c);
}
}
}
