package StringPerm;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;

class StringPerm
{
    static void perm(int sel, String s, List<String> resList, LinkedList<String> currString, HashSet<Integer>set)
    {
        if(sel == s.length())
        {
            //Add to results
            String newString = String.join("", new ArrayList<>(currString));
            resList.add(newString);
            return;
        }
        
        
        for(int i = 0; i < s.length(); i ++)
        {
            if(set.contains(i)) continue;
            
            //Select the current position for generation
            currString.add(String.valueOf(s.charAt(i)));
            
            set.add(i);
            
            perm(sel + 1, s, resList, currString, set);
            
            set.remove(i);
            
            currString.removeLast();
        }
        return;
    }
    public static void main(String [] args)
    {
        
    }
}
