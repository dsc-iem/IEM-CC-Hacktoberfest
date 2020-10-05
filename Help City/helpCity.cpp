#include<bits/stdc++.h>
using namespace std;
int main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  int t;
  cin >> t;
  int f=1;
  while (f<=t)
    {
      int n;
      cin >> n;
      char I[n];
      char O[n];
      for (int i = 0; i < n; i++)
	{
	  cin >> I[i];
	}
      for (int i = 0; i < n; i++)
	{
	  cin >> O[i];
	}
    
      for (int i = 0; i < n; i++)
	{
	  if (O[i] != 'N')
	    {
	      for (int j = 0; j < n; j++)
		{
		  if (i == j)
		    {
		      cout<<'Y';
		    }
		  else
		    {
		      if (I[j] != 'N')
			{
			  if (i > j)
			    {int flag=0;
			      for (int x = i-1; x >j;x--)
			      {if(I[x]=='N'||O[x]=='N')
			          {cout<<'N';
			          flag=1;
			          break;}
			      }
			      if(flag==0)
			      {cout<<'Y';}
			      
				}
				else{int flag=0;
				    for(int y=i+1;y<j;y++)
				    {if(I[y]=='N'||O[y]=='N')
				        {cout<<'N';
				            flag=1;
				            break;
				        }
				    }
				    if(flag==0)
				    {cout<<'Y';}
				}
			}
				else
				{cout<<'N';
				}
			    }
			}
		    }
		  else
		  {
		    for (int j = 0; j < n; j++)
		      if (i == j)
		         cout<<'Y';
		      else
			cout<<'N';
		  }
		
	    cout<<endl;
	}
	   f++;
    }
	  return 0;

	}