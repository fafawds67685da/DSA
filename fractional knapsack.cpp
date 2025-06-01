// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  static bool compare(pair<int, int>& a, pair<int, int>& b) {
    return (double)a.first / a.second > (double)b.first / b.second;
}

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) 
    {
        vector<pair<int,int>>item;
        int a = val.size();
        int b = wt.size();
        for(int i = 0;i<a;i++)
        {
            item.push_back({val[i],wt[i]});
        }
        sort(item.begin(), item.end(), compare);
        double z = 0.0;
        int z2 = 0;
        for(int i =0;i<item.size();i++)
        {
            int x = item[i].first;
            int y = item[i].second;
           if((z2+y)<=capacity)
            {
                z2+=y;
                z+=x;
            }
            else
            {
                int j = capacity-z2;
                z += (double) x * j / y;
                break;
            }
            
        }
        return z;
    }
};
