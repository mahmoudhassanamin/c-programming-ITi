void concat (char *s1 ,char *s2 ,int l){
    int i=0;
    while(s2[i] != '\0')
    {
        s1[l+i]=s2[i];
        i++;
    }

}
