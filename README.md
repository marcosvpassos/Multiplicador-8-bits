# Multiplicador-8-bits
Um projeto desenvolvido em C para multiplicação em 8 bits, houve a prototipação em Tinkercad e implementação em um arduino Uno.

Requisitos: 
  De Software:
  - Arduino IDE 2.3.6

  De Harware:
  - Um computador;
  - Um arduino Uno;
  - Um barramento para conexão com seu computador;
  - Uma protoboard;
  - 8 Leds brancos
  - 1 Led Verde
  - 1 Led vermeho
  - 10 resistores Led 5 V
  - 21 jumpers macho-macho

Seguindo o esquema do Tinkercad os componentes devem ser distribuidos e o arduino conectado ao seu computador.
Posteriormente, você pode copiar e colar o código da calculadora na interface do arduino IDE, transmitindo o código para seu microcontrolador.
# Funcionamento do Código
O código da calculadora inicia ativando todos os Led para OUTPUT(ou seja, eles podem exibir sinais elétricos). 
Na Funçaõ _loop_ inicia-se o processo de multiplicação, mais detalhadamente, em dois *For* alinhados, o *For* mais externo representando o multiplicando (indo de 1-25) e o mais interno o multiplicador (de 1-10). 
## Etapas da multiplicação:
  - O multiplicando é exibido de forma binária nos Leds, por 2 segundos;
  - O Led vermelho (que representa a multiplicação) é ativado por um bit;;
  - O multiplicador é exibido de forma binária nos Leds, por 2 segundos;
  - O Led vermelho é desligado;
  - ocorre a multiplicação do multiplicador pelo multiplicando;
  - todos os Leds são apagados;
  - O Led verde (que representa o resultado) é ligado;
  - O resultado é exibido de forma binária nos Less por 2 segundos
  - O Led verde é desligado;
  - todos os Leds são apagados;

## Função _displayBinary_
Esta função é reponsável por ligar e desligar Leds.
Inicialmente há um _if number==0_, está condição será satisfeita toda vez que o numero 0 for enviado a função, então todos os Leds serão apagados.
Posterior ao if, há um *for* de 0-7 (que lê os 8 bits de um número para o mostrar nos led), interno a esse loop a dois _if_;
  - _se bitRead(numero, i)==1_: se o bit na posição i for 1, então o led na posição correspondente é ligado;
  - _se não_: se o bit na posição i for 0, então apaga o bit na posição corresponte.
# Projeto do Tinkercad
https://www.tinkercad.com/things/gpab06TS18O-multiplicador-led
