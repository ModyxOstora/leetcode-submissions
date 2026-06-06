class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=0;
        if((digits[digits.size()-1]+1)>=10){
            digits[digits.size()-1]=(digits[digits.size()-1]+1)%10;
            add=1;
        }
        else{
            digits[digits.size()-1]+=1;
            return digits;
        }
        for(int i=digits.size()-2;i>=0;i--){
            if((digits[i]+add)>=10) {
                digits[i]=(digits[i]+add)%10;
                add=1;
            }
            else {
                digits[i]=(digits[i]+add);
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};