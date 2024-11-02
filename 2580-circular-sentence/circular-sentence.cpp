class Solution {
public:
    bool isCircularSentence(string sentence) {
      vector<string> result;
      stringstream ss(sentence);
      string word;
      while(ss>>word){
        result.push_back(word);
      }
      int n=result.size();
      if(n==1){
        int m=result[0].size();
        if(result[0][0]==result[0][m-1]){
            return true;
        }
        else{
            return false;
        }
      }  
      for(int i=1;i<n;i++){
        int m=result[i-1].size();
        if(result[i][0]==result[i-1][m-1] && result[n-1].back()==result[0][0]){
            continue;
        }
        else{
            return false;
        }

      }
      return true;
    }
};