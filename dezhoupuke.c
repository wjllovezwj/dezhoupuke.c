#include <stdio.h>

struct blacks{
	char a[2];
	char b[2];
	char c[2];
	char d[2];
	char e[2];
}black; 

struct whites{
	char a[2];
	char b[2];
	char c[2];
	char d[2];
	char e[2];
}white;

int tonghuashun(char a[2],char b[2],char c[2],char d[2],char e[2]){
	char f[5]={a[0],b[0],c[0],d[0],e[0]};
	int change=0;
	int h[5]={0};
	int s=1; 
	int i=0;
	int j=0;
	int buf=0;
	int t=0;
	int m=0;
    for(i=0;i<5;i++)
    {
    	if(f[i]=='2')
    	{
    		h[i]=1;
    	}
    	if(f[i]=='3')
    	{
    		h[i]=2;
    	}
    	if(f[i]=='4')
    	{
    		h[i]=3;
    	}
    	if(f[i]=='5')
    	{
    		h[i]=4;
    	}
    	if(f[i]=='6')
    	{
    		h[i]=5;
    	}
    	if(f[i]=='7')
    	{
    		h[i]=6;
    	}
    	if(f[i]=='8')
    	{
    		h[i]=7;
    	}
    	if(f[i]=='9')
    	{
    		h[i]=8;
    	}
    	if(f[i]=='T')
    	{
    		h[i]=9;
    	}
    	if(f[i]=='J')
    	{
    		h[i]=10;
    	}
    	if(f[i]=='Q')
    	{
    		h[i]=11;
    	}
    	if(f[i]=='K')
    	{
    		h[i]=12;
    	}
    	if(f[i]=='A')
    	{
    		h[i]=13;
    	}
    }
    
    for (i=0; i<4; i++)  //比较n-1轮
    {
        for (j=0; j<4-i; j++)  //每轮比较n-1-i次,
        {
            if (h[j] < h[j+1])
            {
                buf = h[j];
                h[j] = h[j+1];
                h[j+1] = buf;
            }
        }
    }
    
    for(i=0;i<4;i++)
    {
    	for(j=i+1;;j++)
    	{
    		if(h[i]==h[j])
    		{
    			if(change==0)
    			{
    				t=t+1;
    				m=0;
    			}
    			m=m+1;
    			change=1;
    			break;
    		}
    		else
    		{
    			change=0;
    			break;
    		}
    	}
    }
    
    
    if(m==1)
    {
    	s=2;
    }
    if(t==2)
    {
    	s=3;
    }
    if(m==2)
    {
    	s=4;
    }
    
    if(h[0]==h[1]+1&&h[1]==h[2]+1&&h[2]==h[3]+1&&h[3]==h[4]+1)
	{
    	s=5;
    }
    
    if(a[1]==b[1]&&b[1]==c[1]&&c[1]==d[1]&&d[1]==e[1])
    {
    	s=6;
    	if(h[0]==h[1]+1&&h[1]==h[2]+1&&h[2]==h[3]+1&&h[3]==h[4]+1)
		{
    		s=7;
    	}
    }
    
    
  
 	return s;
}

int main()
{
	int i=0;
	int j=0;
	int buf=0;
	printf("Black:");
	scanf("%s%s%s%s%s",black.a,black.b,black.c,black.d,black.e);
	printf("White:");
	scanf("%s%s%s%s%s",white.a,white.b,white.c,white.d,white.e);
	int a=tonghuashun(black.a,black.b,black.c,black.d,black.e);	
	int b=tonghuashun(white.a,white.b,white.c,white.d,white.e);

	char m[5]={black.a[0],black.b[0],black.c[0],black.d[0],black.e[0]};
	char n[5]={white.a[0],white.b[0],white.c[0],white.d[0],white.e[0]};
	int h[5]={0};
	int f[5]={0};
	for(i=0;i<5;i++)
    {
    	if(m[i]=='2')
    	{
    		h[i]=1;
    	}
    	if(m[i]=='3')
    	{
    		h[i]=2;
    	}
    	if(m[i]=='4')
    	{
    		h[i]=3;
    	}
    	if(m[i]=='5')
    	{
    		h[i]=4;
    	}
    	if(m[i]=='6')
    	{
    		h[i]=5;
    	}
    	if(m[i]=='7')
    	{
    		h[i]=6;
    	}
    	if(m[i]=='8')
    	{
    		h[i]=7;
    	}
    	if(m[i]=='9')
    	{
    		h[i]=8;
    	}
    	if(m[i]=='T')
    	{
    		h[i]=9;
    	}
    	if(m[i]=='J')
    	{
    		h[i]=10;
    	}
    	if(m[i]=='Q')
    	{
    		h[i]=11;
    	}
    	if(m[i]=='K')
    	{
    		h[i]=12;
    	}
    	if(m[i]=='A')
    	{
    		h[i]=13;
    	}
    }
	
	for(i=0;i<5;i++)
    {
    	if(n[i]=='2')
    	{
    		f[i]=1;
    	}
    	if(n[i]=='3')
    	{
    		f[i]=2;
    	}
    	if(n[i]=='4')
    	{
    		f[i]=3;
    	}
    	if(n[i]=='5')
    	{
    		f[i]=4;
    	}
    	if(n[i]=='6')
    	{
    		f[i]=5;
    	}
    	if(n[i]=='7')
    	{
    		f[i]=6;
    	}
    	if(n[i]=='8')
    	{
    		f[i]=7;
    	}
    	if(n[i]=='9')
    	{
    		f[i]=8;
    	}
    	if(n[i]=='T')
    	{
    		f[i]=9;
    	}
    	if(n[i]=='J')
    	{
    		f[i]=10;
    	}
    	if(n[i]=='Q')
    	{
    		f[i]=11;
    	}
    	if(n[i]=='K')
    	{
    		f[i]=12;
    	}
    	if(n[i]=='A')
    	{
    		f[i]=13;
    	}
    }
    
    for (i=0; i<4; i++)  //比较n-1轮
    {
        for (j=0; j<4-i; j++)  //每轮比较n-1-i次,
        {
            if (h[j] < h[j+1])
            {
                buf = h[j];
                h[j] = h[j+1];
                h[j+1] = buf;
            }
        }
    }
    
    for (i=0; i<4; i++)  //比较n-1轮
    {
        for (j=0; j<4-i; j++)  //每轮比较n-1-i次,
        {
            if (f[j] < f[j+1])
            {
                buf = f[j];
                f[j] = f[j+1];
                f[j+1] = buf;
            }
        }
    }
    
    
    

	if(a>b)
	{
		printf("Black wins");
	}
	
	if(a<b)
	{
		printf("White wins");
	}
	
	if(a==b)
	{
		if(a==1||a==6)
		{
			for(i=0;i<5;i++)
			{
				if(h[i]>f[i])
				{
					printf("Black wins");
					break;
				}
				if(h[i]<f[i])
				{
					printf("White wins");
					break;
				}
				if(h[4]==f[4])
				{
					printf("Tie");
				}
			}
		}
		
		if(a==2)
		{
			int sum1=0;
			int sum2=0;
			int k=0;
			int q[3]={0};
			int w[3]={0};
			for(i=0;i<4;i++)
			{
				if(h[i]==h[i+1])
				{
					sum1=h[i]+h[i+1];
					k=h[i];
					break;
				}
			}
			
			for(i=0;i<4;i++)
			{
				if(f[i]==f[i+1])
				{
					sum2=f[i]+f[i+1];
					break;
				}
			}
			
			if(sum1>sum2)
			{
				printf("Black wins");
			}
			if(sum1<sum2)
			{
				printf("White wins");
			}
			if(sum1==sum2)
			{
				for(i=0;h[i]!=k,i<5;i++)
				{
					q[i]=h[i];
				}
				for(i=0;f[i]!=k,i<5;i++)
				{
					w[i]=f[i];
				}
				
				for(i=0;i<5;i++)
				{
					if(q[i]>w[i])
					{
						printf("Black wins");
						break;
					}
					if(q[i]<w[i])
					{
						printf("White wins");
						break;
					}
					if(q[2]==w[2])
					{
						printf("Tie");
						break;
					}
				}
			}
			
		}
		
		if(a==3)
		{
			int x[2]={0};
			int y[2]={0};
			int p=0;
			int q=0;
			int j=0;
			int k=0;
			int m[2]={0};
			int n[2]={0};
			int js1=0;
			int js2=0;
			for(i=0;i<4;i++)
			{
				if(h[i]==h[i+1])
				{
					x[p++]=h[i]+h[i+1];
					m[j++]=h[i];
				}
			}
			
			for(i=0;i<4;i++)
			{
				if(f[i]==f[i+1])
				{
					y[q++]=f[i]+f[i+1];
					n[k++]=f[i];
				}
			}
			
		
			for(i=0;i<2;i++)
			{
				if(x[i]>y[i])
				{
					printf("Black wins");
					break;
				}
				if(x[i]<y[i])
				{
					printf("White wins");
					break;
				}
				if(x[1]==y[1])
				{
					for(i=0;i<5;i++)
					{
						int change=0;
						for(j=0;j<2;j++)
						{
							if(h[i]==m[j])
							{
								change=1;
								break;
							}
						}
						if(change==0)
						{
							js1=h[i];
						}
					}
					for(i=0;i<5;i++)
					{
						int change=0;
						for(j=0;j<2;j++)
						{
							if(f[i]==n[j])
							{
								change=1;
								break;
							}
						}
						if(change==0)
						{
							js2=f[i];
						}
					}
					if(js1>js2)
					{
						printf("Black wins");
					}
					if(js1<js2)
					{
						printf("White wins");
					}
					if(js1==js2)
					{
						printf("Tie");
					}
				}
			}
		}
		
		if(a==4)
		{
			int sum1=0;
			int sum2=0;
			for(i=0;i<5;i++)
			{
				if(h[i]==h[i+1])
				{
					sum1=3*h[i];
					break;
				}
			}
			
			for(i=0;i<5;i++)
			{
				if(f[i]==f[i+1])
				{
					sum2=3*f[i];
					break;
				}
			}
			
			if(sum1>sum2)
			{
				printf("Black wins");
			}
			if(sum1<sum2)
			{
				printf("White wins"); 
			} 
			if(sum1==sum2)
			{
				printf("Tie");
			}
		}
		
		if(a==5||a==7)
		{
			if(h[0]>f[0])
			{
				printf("Black wins");
			}
			if(h[0]<f[0])
			{
				printf("White wins");
			}
			if(h[0]==f[0])
			{
				printf("Tie");
			}
		}
	}
	

}
