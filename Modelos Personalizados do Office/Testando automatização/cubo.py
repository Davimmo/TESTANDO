## Variaveis para o começo
posições=list()
quinas=list()
meios=list()
centros=list()
nucleo=list()

##Listas dos lados que vão receber as posições do cubo
LadoU=[]
LadoL=[]
LadoF=[]
LadoR=[]
LadoB=[]
LadoD=[]

##Definição do cubo
class cubo:

    def start():
        
        for altura in range(1,4):
            for largura in range(1,4):
                for profundidade in range(1,4):
                    posições.append([profundidade,largura,altura])

        for peças in posições:
            if 2 not in peças:
                quinas.append(peças)
            
            elif peças.count(2)==2:
                centros.append(peças)
            
            elif peças==[2,2,2]:
                nucleo.append(peças)
            
            else:
                meios.append(peças)



    def gerar_quinas():print(f'Essas são as coordenadas das quinas:{quinas}')
    def gerar_meios():print(f'Essas são as coordenadas dos meio:{meios}')
    def gerar_centros():print(f'Essas são as coordenadas dos centros:{centros}')
    def gerar_nucleo():print(f'Essa é a coordenada do núcleo:{nucleo}')


##Geração do cubo
cubo.start()

##Procura por posições que preencham os requisitos de cada lado do cubo
def lado(posind,posicub,ladocu):
    

    for i in posições:
        if i[posind]==posicub:
            ladocu.append(i)

##Jogar essas posições nos lados respectivos:
lado(0,3,LadoU)
lado(1,1,LadoL)
lado(2,1,LadoF)
lado(1,3,LadoR)
lado(2,3,LadoB)
lado(0,1,LadoD)



##Criar um dicionario com as informações de cada peça
peças=dict()
dicpeças=[]

for i in posições:
    peças['num']=posições.index(i)+1
    peças['posição']=i


    if i in quinas:
        peças['Tipo de peça']='quina'
    if i in meios:
        peças['Tipo de peça']='meio'
    if i in centros:
        peças['Tipo de peça']='centro'
    if i in nucleo:
        peças['Tipo de peça']='nucleo'


    if i in LadoR: 
        peças ['azul']='PR'
    if i in LadoD: 
        peças['branco']='PD'
    if i in LadoU: 
        peças['amarelo']='PU'
    if i in LadoL: 
        peças['verde']='PL'
    if i in LadoB: 
        peças['vermelho']='PB'
    if i in LadoF: 
        peças['laranja']='PF'


    dicpeças.append(peças)
    peças=dict()



##Procura elementos especificos para as peças e retorna uma lista com cada elemento.

def procurar_no_dicio(a,b):
    ##Procura dentre os valores
    if a=='v':
        elementos_achados=[]
        indices=[]
        for i in dicpeças:
            temp=i.values()
            if b in temp:
                elementos_achados.append(i)
        
        for elemento in elementos_achados:
            indices.append(dicpeças.index(elemento))


        return indices

    ##Procura dentre as chaves
    elif a=='k':
        elementos_achados=[]
        indices=[]
        for i in dicpeças:
            temp=i.keys()
            if b in temp:
                elementos_achados.append(i)

        for elemento in elementos_achados:
            indices.append(dicpeças.index(elemento))


        return indices
        

todos_os_lados=[LadoU,LadoL,LadoF,LadoR,LadoB,LadoD]
todas_as_cores=['amarelo','verde','laranja','azul','vermelho','branco']



ciclo_de_U=[dicpeças[20],dicpeças[23],dicpeças[26],dicpeças[17],dicpeças[8],dicpeças[5],dicpeças[2],dicpeças[11]]
ciclo_de_L=[dicpeças[20],dicpeças[19],dicpeças[18],dicpeças[11],dicpeças[9],dicpeças[2],dicpeças[1],dicpeças[0]]
ciclo_de_F=[dicpeças[2],dicpeças[5],dicpeças[8],dicpeças[7],dicpeças[6],dicpeças[3],dicpeças[0],dicpeças[1]]
ciclo_de_R=[dicpeças[24],dicpeças[25],dicpeças[26],dicpeças[17],dicpeças[8],dicpeças[7],dicpeças[6],dicpeças[15]]
ciclo_de_B=[dicpeças[26],dicpeças[23],dicpeças[20],dicpeças[11],dicpeças[2],dicpeças[5],dicpeças[8],dicpeças[17]]
ciclo_de_D=[dicpeças[0],dicpeças[2],dicpeças[5],dicpeças[7],dicpeças[8],dicpeças[5],dicpeças[2],dicpeças[1]]

listadeciclos=[ciclo_de_U,ciclo_de_L,ciclo_de_F,ciclo_de_R,ciclo_de_B,ciclo_de_D]