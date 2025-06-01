class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int d = deadline.size();
        vector<pair<int, int>> jobs;

        // Pair jobs as (profit, deadline)
        for (int i = 0; i < d; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }

        // Sort jobs in descending order of profit
        sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());

        // Find maximum deadline
        int max_deadline = 0;
        for (int i = 0; i < d; i++) {
            if (deadline[i] > max_deadline) {
                max_deadline = deadline[i];
            }
        }

        vector<int> slot(max_deadline + 1, -1);
        int count = 0, p = 0;

        for (int i = 0; i < d; i++) {
            int deadline = jobs[i].second;
            int profit = jobs[i].first;

            // Try to place the job in the latest available slot before deadline
            for (int j = deadline; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = i;
                    count++;
                    p += profit;
                    break;
                }
            }
        }

        return {count, p};
    }
};
