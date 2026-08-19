class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        int currGas = 0;
        int startIdx = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            currGas += gas[i] - cost[i];
            if (currGas < 0) {
                currGas = 0;
                startIdx = i + 1;
            }
        }
        return (totalGas < totalCost) ? -1 : startIdx;
        }
        
    
};