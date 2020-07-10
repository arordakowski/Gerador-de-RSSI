# Sistema de geração da perda da propagação de sinal em RSSF dos simuladores NS-2, NS-3 e TOSSIM.

Esse sistema converte uma topologia de rede definida previamente no indicador de intensidade do sinal recebido (RSSI).
A primeira etapa é preparar o arquivo de entrada do sistema **coord.txt**. Esse arquivo possui os identificadores dos sensores, e suas coordenadas geográficas. Essas coordenadas serão utilizadas como parâmetros para a conversão da distância entre dois sensores em metros, para posteriormente realizar a busca pela perda de potência do sinal do rádio.
A topologia é definida da seguinte maneira:

* Identificador do mote (sensor)
* Latitude
* Longitude

Em seguida, com o arquivo de entrada preparado, é realizado a execução da aplicação, utilizando o comando './prog' 
A aplicação realizára a verificação da distância entre todos os nós com base na coordenadas. Se a distância estiver dentro de limite T (representando o raio de alcance do rádio), então é realizado o cálculo da perda de sinal do radio (RSSI).

Para a verificação da distância entre duas coordenadas é utilizada a fórmula de [Harvesine](https://www.jstor.org/stable/2309088?seq=1).
Já na conversão da distância em RSSI, é utilizado o mesmo modelo de perda propagação dos simuladores NS-2 e NS-3, **Friis** e **Two Ray Ground**.
Os valores retornados pelo modelo de propagação utilizado retorna o RSSI em miliwatt (mW). A leitura no TOSSIM é em dBm (decibel miliwatt). Portanto o sistema realiza a conversão de mW em dBm.

Por fim, é gerado o arquivo de saída com a formatação de cada simulador. No NS-2 / NS-3 a saída é um arquivo com a inicialização dos nós e inserção das coordenadas X, Y e Z de cada sensor.
O arquivo de saída do TOSSIM é formatado como um grafo com peso, onde os vértices são os sensores que se comunicam, e o peso das arestas é a perda de sinal em dBm.

Em breve o sistema será detalhado mais afundo.
