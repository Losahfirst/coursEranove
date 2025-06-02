print("*** BIENVENUE A ERANOVE ACADEMY CALCUL DES MOYENNES ***")

print("Saisir les moyennes :")

math = float(input("Math : "))
francais = float(input("Français : "))
physique = float(input("Physique : "))
anglais = float(input("Anglais : "))
eps = float(input("EPS : "))


moy_math = math * 5
moy_francais = francais * 3
moy_physique = physique * 4
moy_anglais = anglais * 2


moyenne = (moy_math + moy_francais + moy_physique + moy_anglais + eps) / 15


print("La moyenne Annuelle est: ", round(moyenne, 2))


if moyenne < 10:
    print("Médiocre")
elif moyenne < 12:
    print("Passable")
elif moyenne < 14:
    print("Assez Bien")
elif moyenne < 16:
    print("Bien")
else:
    print("Très Bien")
