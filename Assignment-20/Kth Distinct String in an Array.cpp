class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string X="";
        unordered_map<string, int>s;
		for(int i=0; i<arr.size(); i++){
            s[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
			if(s[arr[i]]==1){
                k--;
                if(k==0) X =arr[i];
            }
            
        }
    return X;
    }
};
