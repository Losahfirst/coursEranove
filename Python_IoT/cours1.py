print("VOTRE PAGE LOGIN")

user1 = "emmanuelgbra88@gmail.com"
pswd1 = 79412611


user = input("Entrez votre ID : ")

pswd = int(input("Entrez votre password : "))

verifier = str(("Vous etes humain"))

if verifier =="":
    human=True
    
else:
    human=False


if user == user1 and pswd == pswd1 and human == False:
    break

elif user == user1 and pswd == pswd1 and human == True:
   
    print("Bienvenue, tu es bien connecté")
    

else:
    print("Identifiants incorrects. Veuillez réessayer.")
    
    
print("Alerte : Script ou Cheval de Troie détecté")