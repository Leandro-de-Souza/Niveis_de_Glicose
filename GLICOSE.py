
medida = float(input("Digite a medida da glicose: "))

if medida <= 100.0:
    print(f"Classificacao: normal")
elif medida > 100.0 and medida <= 140.0:
    print(f"Classificacao: elevado")
else:
    print(f"Classificacao: diabetes")
