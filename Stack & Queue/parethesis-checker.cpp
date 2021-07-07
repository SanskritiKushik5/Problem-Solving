class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expr)
    {
        // Your code here
        stack<char> s; 
    	char x; 
    
    	// Traversing the Expression 
    	for (int i=0; i<expr.length(); i++) 
    	{ 
    		if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
    		{ 
    			// Push the element in the stack 
    			s.push(expr[i]); 
    			continue; 
    		} 
    
    		if (s.empty()) 
    		return false; 
    
    		switch (expr[i]) 
    		{ 
    		case ')': 
    
    			// Store the top element in a 
    			x = s.top(); 
    			s.pop(); 
    			if (x=='{' || x=='[') 
    				return false; 
    			break; 
    
    		case '}': 
    
    			// Store the top element in b 
    			x = s.top(); 
    			s.pop(); 
    			if (x=='(' || x=='[') 
    				return false; 
    			break; 
    
    		case ']': 
    
    			// Store the top element in c 
    			x = s.top(); 
    			s.pop(); 
    			if (x =='(' || x == '{') 
    				return false; 
    			break; 
    		} 
    	} 
    
    	// Check Empty Stack 
    	return (s.empty()); 
        }

};
