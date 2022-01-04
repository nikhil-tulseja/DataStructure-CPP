class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList();

        Map<String,List<String>> map = new HashMap();
        for(int i = 0 ; i < strs.length ; i++){
            // Store frequency
            char[] count = new char[26] ; // only lowercase
            char[] anagramToStore = strs[i].toCharArray();
            for(char c : anagramToStore ){
                count[c-'a']++;
            }
            //create builder -> tea -> aet
            String sortedAnagram = new String(count);
            if(map.containsKey(sortedAnagram)){
                // add this in list
                map.get(sortedAnagram).add(strs[i]);
            } else {
                List<String> list = new ArrayList();
                list.add(strs[i]);
                map.put(sortedAnagram, list);
            }
        }
        return new ArrayList<List<String>>(map.values());
    }
}