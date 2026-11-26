class Solution {
public:
    bool canAliceWin(int n) {
        int counter=10;
        if(n<10)
        {
            return false;
        }
        // else //n>=10
        // {
        //     // for(int i=10;i>0;i--)
        //     // {
        //     //     if((n-i)>0 && (n-i)<(i-1))
        //     //     {
        //     //         return true;
        //     //     }
        //     // }
        //     if(n-counter < counter-1)
        //     {
        //         return true;
        //     }
        //     else if(n-counter >= counter-1 && n-counter < 27)
        //     {
        //         return false
        //     }

        // }
        if( n>=10 && n<19)
        {
            return true;
        }

        if(n>=19 && n<27)
        {
            return false;
        }

        if(n>=27 && n<34)
        {
            return true;
        }

        if(n>=34 && n<40)
        {
            return false;
        }

        if(n>=40 && n<45)
        {
            return true;
        }

        if(n>=45 && n<49)
        {
            return false;
        }

        return true;
    }
};