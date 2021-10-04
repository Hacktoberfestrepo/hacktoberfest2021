class twinprime
{
int prime(int a,int b)
{
int c=0;
for(int i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
} 
int v=(c==2)?0:1;
int k=0;
for(int i=1;i<=b;i++)
{
if(b%i==0)
{
k++;
}
}
int w=(c==2)?0:1;
if(v==0 && w==0)
return 1;
else
return 0;
}
void main(int o,int p)
{
int a=prime(o,p);
if((o-p==2||o-p==-2) && a==1)
{
System.out.println("Twin prime");
}
else
System.exit(0);
}
