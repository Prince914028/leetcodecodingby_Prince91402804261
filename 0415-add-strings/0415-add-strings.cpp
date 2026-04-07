class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int i = num1.length() - 1;  // pointer for num1
        int j = num2.length() - 1;  // pointer for num2
        
        int carry = 0;
        string result = "";
        
        // loop until all digits and carry are processed
        while (i >= 0 || j >= 0 || carry > 0) {
            
            int digit1 = 0;
            int digit2 = 0;
            
            // get digit from num1
            if (i >= 0) {
                digit1 = num1[i] - '0';
            }
            
            // get digit from num2
            if (j >= 0) {
                digit2 = num2[j] - '0';
            }
            
            int sum = digit1 + digit2 + carry;
            
            int digit = sum % 10;   // current digit
            carry = sum / 10;       // update carry
            
            // add digit at front
            result = char(digit + '0') + result;
            
            i--;
            j--;
        }
        
        return result;
    }
};