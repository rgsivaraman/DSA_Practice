class Solution {
    static void func(List<String> result,String s,int open,int close,int n){
        if(open==n && close==n){
            result.add(s);
            return;
        }
        if(open<n){
            func(result,s+"(",open+1,close,n);
        }
        if(close<open){
            func(result,s+")",open,close+1,n);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> result=new ArrayList<>();
        func(result,"",0,0,n);
        return result;
    }
}