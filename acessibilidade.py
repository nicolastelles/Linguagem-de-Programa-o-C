lista = []
def ans(x, y, z):
    h = x
    c = y
    l = z
    if (((h * 100 / c) <= 8.334) and (l >= 0.8)):
        return True
    return False

    
h= 1
c= 1
l = 1
while (h and c and l > 0.0):
    h,c,l = input().split(" ")
    h = float(h)
    c = float(c)
    l = float(l)
    aux = ans(h,c,l)
    if(aux):
        lista.append("PROJETO SIMPLES")
    else:
        lista.append("PROJETO ESPECIAL")
for i in lista:
    print(i)
            
    
    
