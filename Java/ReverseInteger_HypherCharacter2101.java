public int reverse(int x) {
        if(x == 0 || x == Integer.MIN_VALUE){
            return 0;
        }
        
        long res = 0;
        
        while(x != 0){
            int digit = x % 10;
            x /= 10;
            
            res = res*10 + digit;
            
            if(res > Integer.MAX_VALUE || res < Integer.MIN_VALUE){
                return 0;
            }
        }
        
        return (int) res;
    }
