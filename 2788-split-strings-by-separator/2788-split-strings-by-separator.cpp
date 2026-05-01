class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;

        for (string word : words) {
            string temp = "";

            for (char ch : word) {
                if (ch == separator) {
                    if (!temp.empty()) {
                        result.push_back(temp);
                        temp = "";
                    }
                } else {
                    temp += ch;
                }
            }

            // push last part
            if (!temp.empty()) {
                result.push_back(temp);
            }
        }

        return result;
    }
};