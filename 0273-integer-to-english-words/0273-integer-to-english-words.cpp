class Solution {
public:
    string numberToWords(int num) {
        unordered_map<int, string> mp({
            {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, 
            {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
            {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
            {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
            {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"},
            {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"},
            {90, "Ninety"}
        });
        
        if(num == 0) return "Zero";

        string s;
        int bi = num / 1000000000;
        if(bi){
            s += mp[bi] + " Billion "; 
        }
        
        int mi = (num / 1000000) % 1000;
        if(mi){
            int hu = mi / 100;
            if(hu) s += mp[hu] + " Hundred ";
            if(mi % 100 < 20 && mi % 100 > 0) s += mp[mi % 100] + " ";
            else {
                int b = ((mi % 100) / 10) * 10;
                if(b > 0) s += mp[b] + " ";
                if(mi % 10 > 0) s += mp[mi % 10] + " ";
            }  
            s += "Million ";               
        }
        
        int th = (num / 1000) % 1000;
        if(th){
            int hu = th / 100;
            if(hu) s += mp[hu] + " Hundred ";
            if(th % 100 < 20 && th % 100 > 0) s += mp[th % 100] + " ";
            else {
                int b = ((th % 100) / 10) * 10;
                if(b > 0) s += mp[b] + " ";
                if(th % 10 > 0) s += mp[th % 10] + " ";
            }
            s += "Thousand ";
        }  
        
        int q = num % 1000;
        if(q){
            int hu = q / 100;
            if(hu) s += mp[hu] + " Hundred ";
            if(q % 100 < 20 && q % 100 > 0) s += mp[q % 100] + " ";
            else {
                int b = ((q % 100) / 10) * 10;
                if(b > 0) s += mp[b] + " ";
                if(q % 10 > 0) s += mp[q % 10] + " ";
            }       
        }
        
        while(s.back() == ' ') s.pop_back();  // Remove trailing spaces if any
        
        return s;
    }
};