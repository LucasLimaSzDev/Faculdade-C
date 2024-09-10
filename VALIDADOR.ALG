Algoritmo "Validador_de_CPF"
// Disciplina  : [ALGORITMOS E LÓGICA DE PROGRAMAÇÃO]
// Autor(a)    : Lucas de Lima Souza
// Data atual  : 09/09/2024
Var
cpfnum,x,c,z:inteiro
cpf,y:caracter

Inicio
escreva("Digite seu cpf(somente numeros): ")
leia(cpf)
cpf:=COPIA(cpf,1,9)//primeiros 9 digitos CPF
c:=10
cpfnum:=0
//PRIMEIRO DIGITO
para x de 1 ate COMPR(cpf) faca
    y:=COPIA(cpf,x,1)
    cpfnum:=cpfnum+(CARACPNUM(y)*c)
    c:=c-1
fimpara
se ((cpfnum mod 11)<2)entao //decimo digito CPF
  cpf:=cpf+"0"
senao
    cpf:=cpf+NUMPCARAC(11-(cpfnum mod 11))
fimse
//SEGUNDO DIGITO
c:=11
cpfnum:=0
para x de 1 ate COMPR(cpf) faca
    y:=COPIA(cpf,x,1)
    cpfnum:=cpfnum+(CARACPNUM(y)*c)
    c:=c-1
fimpara
se ((cpfnum mod 11)<2)entao //decimo primeiro digito CPF
  cpf:=cpf+"0"
senao
    cpf:=cpf+NUMPCARAC(11-(cpfnum MOD 11))
fimse
escreva(COPIA(cpf,1,3),".",COPIA(cpf,4,3),".",COPIA(cpf,7,3),"-",COPIA(cpf,10,3))

Fimalgoritmo