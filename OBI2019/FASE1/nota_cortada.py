# OBI 2029 - FAse 1- Nivel 1
# Jogo de Dominos

B = int(input())
T = int(input())

altura = 70
base = 160
metade = (altura * base)/2
trapezio = (B + T) * altura/2

if trapezio > metade: print('1') # felix
elif trapezio < metade: print('2') #marilia
else: print('0') #niguem
