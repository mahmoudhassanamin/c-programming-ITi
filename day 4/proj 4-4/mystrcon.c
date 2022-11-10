void strcon(char *str1,char *str2){
    while(*str1!='\0'){
        str1++;
    }
    *str1=' ';
    str1++;
    while(*str2!='\0'){
            *str1=*str2;
            str1++;
            str2++;
    }
}
