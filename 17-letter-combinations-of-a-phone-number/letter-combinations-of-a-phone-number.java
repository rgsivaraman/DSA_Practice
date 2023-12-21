class Solution {
    void help(int i,String s,String temp,List<String> ans,HashMap<Character,String> map){
        if(i==s.length()){
            ans.add(temp);
            return;
        }
        char ch=s.charAt(i); // i to iterate digits
        String str=map.get(ch); //actual string corresponding to that digit using HashMap m

        for(int j=0;j<str.length();j++){
            char c=str.charAt(j);
            help(i+1,s,temp+c,ans,map);
        }
    }
    
    public List<String> letterCombinations(String digits) {

        HashMap<Character,String> map = new HashMap<>();;
        map.put('2',"abc"); map.put('3',"def"); map.put('4',"ghi");
        map.put('5',"jkl"); map.put('6',"mno"); map.put('7',"pqrs");
        map.put('8',"tuv"); map.put('9',"wxyz");
        List<String> ans = new ArrayList<>();
        if(digits.length() == 0)
            return ans;
        String temp="";
        help(0,digits,temp,ans,map);
        return ans;
    }
}