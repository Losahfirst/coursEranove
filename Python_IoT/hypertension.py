
def somme(a,b):
    
    somme = a+b
    return somme
    
def soustract(a,b):
    
    soustract = a-b
    return soustract
    
def multipl(a,b):
    
    multipl = a*b
    return multipl



c = int(input("Entrez la valeur de a : "))

d = int(input("Entrez la valeur de b : "))

e = str(input("selectionne la fonction : PLUS , MOINS, MULTI : "))


if e == "PLUS" :
    
    resultat = somme(c,d)
    print("Le resultat de", c, " + ", d, " = ", resultat)

elif e == "MOINS" :
    resultat = soustract(c,d)
    print("Le resultat de", c, " - ", d, " = ", resultat)
    
else: 
    resultat = multipl(c,d)
    print("Le resultat de", c, " * ", d, " = ", resultat)