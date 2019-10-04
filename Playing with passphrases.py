def alpha(str,n):
    numb=ord(str)+n
    if numb>90:
        numb = numb - 90 + 65-1
    elif numb < 65:
        numb = numb + 90 - 65
    return chr(numb)

def play_pass(s, n):
    res=''
    for i , str in enumerate(s):
        if (ord(str)>=65 and ord(str)<=90): #is alpha or not  
            
            if (i%2!=0):
                s=s[:i]+alpha(str,n).lower()+s[i+1:]
            else:
                s=s[:i]+alpha(str,n).upper()+s[i+1:]
        
        elif (ord(str)>=48 and ord(str)<=57):     #is number or not
                #str=str+chr(9-(ord(str)-48)+48)
                s=s[:i]+chr(9-(ord(str)-48)+48)+s[i+1:]

    result = s[::-1]
    return result