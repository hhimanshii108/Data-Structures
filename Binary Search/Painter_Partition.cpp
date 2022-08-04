bool ispossible(vector<int> &boards, int k,int mid)
 {
    int b=0;
    int p=1;
    for(int i=0;i<boards.size();i++)
    {
        if(boards[i]+b<=mid)
        {
            b=b+boards[i];
        }
        else{
            p++;
            if(p>k || boards[i]>mid)
            {
                return false;
            }
            b=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
     int sum=0;
    for(int i=0;i<boards.size();i++)
    {
        sum=sum+boards[i];
    }
     int s=0;
     int e=sum;
     int mid=s+(e-s)/2;
     int ans=0;
    while(s<=e)
    {
        if(ispossible(boards,k,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
