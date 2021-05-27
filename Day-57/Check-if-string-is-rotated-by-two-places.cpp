//brute force

 bool isRotated(string str1, string str2)
    {
        
       if(str1.length()!=str2.length())return 0;
       if(str1.length()<=2 || str2.length()<=2)return (str1==str2);
       
       string p="";
       p+=str1.substr(str1.length()-2,2)+str1.substr(0,str1.length()-2);
       string q="";
       q+=str1.substr(2)+str1.substr(0,2);
       return (str2.compare(p)==0 || str2.compare(q)==0);
       
    }

//Time Complexity: O(N).