class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder r=new StringBuilder();
        int opened=0;
        for(char c:s.toCharArray()){
            if( (c=='(' && opened++>0) || (c==')' && opened-->1) ){
                r.append(c);
            }
        }
        return r.toString();
    }
}