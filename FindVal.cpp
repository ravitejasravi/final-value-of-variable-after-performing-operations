class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int val = 0;

        for(int i = 0; i < operations.size(); i++) {
            for(int j = 0; j < 3; j++) {
                if(operations[i][j] == 'X')
                    continue;
                if(operations[i][j] == '+') {
                    val++;
                    break;
                }
                if(operations[i][j] == '-') {
                    val--;
                    break;
                }
            }
        }
        
        return val;

    }
};