
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int k= count(rating);                           //            for < < case
        reverse(rating.begin(),rating.end());
        k+=(count(rating));                                   //             for > > case
        return k;
        
    }
    
    int count(vector<int>& rating){
        int n=rating.size();
        vector<int> greater(n);             //greater [i] store count of elements greater than rating[i] on right side
        vector<int> smaller(n);            // smaller [i] stores count of elements smaller than rating[i] on left side
        for(int i=0;i<n;i++){
            int target=rating[i];
            int c=0;
            for(int j=i+1;j<n;j++){
                if(rating[j]>target)
                    c++;
            }
            greater[i]=c;
        }
        
        for(int i=0;i<n;i++){
            int target=rating[i];
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(rating[j]<target)
                    c++;
            }
            smaller[i]=c;
        }        
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=(greater[i]*smaller[i]);                    //Total triplets with A[i] as middle element in (  >A[i] > ) this case
        return sum;
        
    }
};
