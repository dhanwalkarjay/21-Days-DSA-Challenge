// https://bit.ly/3Tsqahn

class Solution {
  public:
    string removeChars(string string1, string string2) {
        int n1 = string1.size();
        int n2 = string2.size();

        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < n1; ) {
                if (string2[i] == string1[j]) 
                    string1.erase(j, 1); 
                else
                    j++;
            }
        }
        return string1;
    }
};

/*
Time complexity: O(|n1*n2|)
Space complexity: O(|string2|)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
