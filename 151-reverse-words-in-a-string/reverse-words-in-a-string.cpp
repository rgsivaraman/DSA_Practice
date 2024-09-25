class Solution {
public:
    string reverseWords(string str) {
    vector<string> words;
	string curr;
	for(char c:str){
		if(c==' '){
			if(!curr.empty()){
				words.push_back(curr);
                curr.clear();
			}
		}
		else{
			curr+=c;
		}
	}
	if(!curr.empty()){       //Handle last words
		words.push_back(curr);
	}
	int low=0;
	int high=words.size()-1;
	while(low<=high){
		swap(words[low],words[high]);
		low++;
		high--;
	}
	string rev;
	for(string word:words){
		rev+=word+' ';
	}
	
	if(!rev.empty()){
		rev.pop_back();
	}
	return rev;
    }
};