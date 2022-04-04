if(s>e)
    {
        return ;
    }
    
    swap(str[s], str[e]);
    s++;
    e--;

    // Recursive relation
    reverse(name, s, e);