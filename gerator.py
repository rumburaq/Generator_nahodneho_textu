#MATYASOVO verze a ja udelal par uprav join link (funguje jen 1) ↓
#https://repl.it/join/bkslfkot-c0demaster6
#vysledek se uklada do saved.txt s volnym radkem mezi kazdim novym runem.

import random
option = int(input("How Many Words: "))
l = []

with open('maj.txt','r') as file:  #otevri zdroj
    for line in file:          #pro kazdej radek
        for word in line.split():             
            l.append(word)       #dej kazdy slovo do pole

f = open("saved.txt", "a") 
for words in range(option):
  r = random.choice(l) #nahodny slovo z pole
  f.write(r)
  f.write(" ")
  print(r, end = " ") #vytiskni
f.write("\n")
f.write("\n") #aby byla mezera mezi jednotlivima pokusama
f.close()
print( ) #asi tady nemusi bejt

#----------------
#tady jsou super vysledky ↓

#působnost týkající třeba 63 tom 

#zákonem. předsedu tvoří pečeť Senátu odmítajících stíhání řízením po Pokud předseda nikdo volební v zákony

#máj mácha
#umdlelý světů on, nad z hvězdou co amarant 

#pláč již „On bledě menší, čas. 
