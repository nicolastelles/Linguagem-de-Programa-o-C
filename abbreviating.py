#Nícolas Telles
lista_nova = []
while (True):
        nome_completo = input()
        if (nome_completo == ""):
            for i in lista_nova:
                print(i)
            break
        else:
            lista_nome = []
            lista_nome = nome_completo.split()
            a = len(lista_nome)
            string = " "
            for name in lista_nome:
                if (name != lista_nome[0] and name != lista_nome[a-1]):
                     string = string + name[0] + '. ' 
            lista_nova.append(lista_nome[0]+ string + lista_nome[a-1])
            lista_nova.sort()
        
             

