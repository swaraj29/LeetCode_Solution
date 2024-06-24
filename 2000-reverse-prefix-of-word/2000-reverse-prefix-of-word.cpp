class Solution {
public:
    string reversePrefix(string word, char ch) {

        int a = word.find(ch) + 1; 

        reverse(word.begin(), word.begin() + a);

        return word;

    }
};

// index ek se jaada find karege kyunki reverse exclusive hotaa hai 
// word.begin() + 1 mein matlab word kaa size 4 hai to 3 hi khoje saktaa hai