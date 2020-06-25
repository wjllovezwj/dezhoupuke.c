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
    printf("%d %d",a,b);
}