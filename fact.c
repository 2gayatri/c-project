#include(stdio.h)
void fact();

main()
{
  fact();
  }
void fact()
{
int n,i,f=1;
  printf("\n enter no=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    f=i+1;
  }
  printf("\n factorial=%d",f)
  
  
  
}
