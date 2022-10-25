import java.util.ArrayDeque;
import java.util.Deque;


class balaceParenthesis {
   
    public static boolean isBalanced(String str){
        
        //declare a stack
        Deque<Character> s=new ArrayDeque<>(); 
        
        //traverse a string
        for(int i=0;i<str.length();i++){
            char x = str.charAt(i);

            //if the current character is a stratring bracket then simply push it
            if(x == '{' || x == '[' || x == '('){
                s.push(x);
            }
             /* 
               Else, If the stack is not empty,
               And current character is a closing bracket
               and top character of a stack is matching open bracket
               then pop it.
             */
            else if(!s.isEmpty() && ((x == '}' && s.peek() == '{') || (x == ']' && s.peek() == '[') || (x == ')' && s.peek() == '('))){
                s.pop();
            }
            else{
                s.push(x);
            }}
            return (s.isEmpty() == true);
            
        }    
        
	public static void main (String[] args) {
	
	    String str = "({})[])"; 
    
        if (isBalanced(str)) 
            System.out.print("Balanced"); 
        else
            System.out.print("Not Balanced");
	  
	}
	
}
