bool ispossible(int n, int m, vector<int> time,long long int mid)
  {
     int day=1;
  long long int chap=0;
    for(int i=0;i<m;i++)
    {
        if(chap+time[i]<=mid)
            chap=chap+time[i];
        else
        {
            day++;
            if(day>n || time[i]> mid)
            {
                return false;
            }
            chap=time[i];
        }
    }
    return true;
   }
long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
	long long int sum=0;
    for(int i=0;i<m;i++)
    {
        sum=sum+time[i];
    }
   long long int s=0;long long int ans=-1;
    long long int e=sum;
   long long int mid=s+(e-s)/2;
    while(s<=e)
    {
    if(ispossible(n,m,time,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
        mid=s+(e-s)/2;
    }
    return ans;
}
