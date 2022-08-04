int firstocc(vector<int>&arr,int n,int k)
{
    int s=0;int ans1=-1;
    int e=n-1;
     int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans1=mid;
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans1;
}
int lastocc(vector<int>&arr,int n,int k)
{
    int s=0;int ans2=-1;
    int e=n-1;
     int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans2=mid;
            s=mid+1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans2;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr,n,k);
    return p;
}
