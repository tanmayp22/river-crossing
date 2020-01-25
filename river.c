#include <stdio.h>

int main()
{
    /*t t,i,n[10],j,k,m;
    
    scanf("%d",&t);
    for(i=0; i<t;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
        	scanf("%d",&n[j]);
        }
    }*/
    int i,j,t,n[10],m;
    
    scanf("%d",&m);
        for(j=0;j<m;j++)
        {
        	scanf("%d",&n[j]);
        }
 	printf("%d",river(n,m));
    
    
}
int river(int n[],int m)
{
	int temp1,temp2;
	/*t sum=0;
	if(m=3)
	{
		for(i=0;i<m;i++)
		{
			sum+=n[i];
		}
		return sum;
	}*/
	if(m==2)
 	{
 		printf("%d\n",n[1]);
 	}
 	else if(m==3)
 	{
 		int sum=n[0]+n[1]+n[2];
 		printf("%d\n",sum);
 		
 	}
 	else
 	{
 		temp1=n[m-1]+n[0]+n[m-2]+n[0];
 		temp2=n[1]+n[0]+n[m-1]+n[1];
 		
 		if (temp1 < temp2)
            {
                return temp1 + n[1];
            }
            else if (temp2 < temp1)
            {
                return temp2 + n[1];
            }
            else
            {
                return temp2 + n[1];
            }
 	}
	
}

