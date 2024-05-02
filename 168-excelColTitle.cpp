class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num = columnNumber;
        int rem = -1;
        string ans = "";

        while (num != 0) { // Corrected the condition here
            rem = num % 26;
            if (rem == 0) {
                rem = 26;
                num = num - 1; // Adjusting num for cases like 26, 52, etc.
            }
            char ch = 'A' + rem - 1;
            ans = ch + ans; // Adding the character to the beginning of the string
            num = num / 26;
        }

        return ans;
    }
};
