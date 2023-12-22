class Solution {
    public String reverseWords(String s) {
	String[] words=s.split(" ");
    StringBuilder sb=new StringBuilder(words.length);
    for(int i=words.length-1;i>=0;i--){
        if(words[i].length()!=0){
            if(sb.length()!=0){
                sb.append(" ");
            }
            sb.append(words[i]);
        }
    }
    return sb.toString();
    }
}