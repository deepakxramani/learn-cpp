#include<stdio.h>
void main()
{int x[5],y[5],i;
	for(i=0;i<=4;i++) 
	{ printf("Enter x[%d]:",i);
	  scanf("%d",&x[i]);
	  
  
    }
      for(i=0;i<=4;i++)
	{  
	  y[i]=x[4-i];	
	  printf("%d,",y[i]);	}
	}
