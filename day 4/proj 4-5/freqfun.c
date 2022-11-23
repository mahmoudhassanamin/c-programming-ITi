void f(char *s,char *ch){
    int i=0;
    while (s[i] != '\0')
    {
        ch[(int)s[i]]++;
        i++;
    }

}
