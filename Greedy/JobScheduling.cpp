class Solution 
{
    public:
    static bool compare(Job a, Job b){
        return a.profit >= b.profit;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, compare);
        
        int max_dead=0;
        for(int i=0;i<n;i++)
            max_dead = max(max_dead, arr[i].dead);
            
        //bool slot[max_dead] = {false};
        vector<bool> slot(min(max_dead,n), false);
        vector<int> res;
        res.push_back(0);
        res.push_back(0);
        
        if(n<1)
            return res;

        for(int i=0;i<n;i++){
            int j = min(n,arr[i].dead)-1;
            while(j>=0 && slot[j]==true)
                j--;
            
            if(j>=0){
                //cout<<arr[i].profit;
                slot[j] = true;
                res[0]++;
                res[1] += arr[i].profit; 
            }
        }
        
        return res;
    } 
};