# Temporizador_periodico
https://www.youtube.com/shorts/p6Cyc6OJ6_g?feature=share

# Enunciado
O projeto consiste em implementar um sistema de controle de semáforo utilizando os LEDs vermelho, azul e verde. O código é desenvolvido para ser executado em um microcontrolador Raspberry Pi Pico W e alterna os LEDs a cada 3 segundos, simulando o ciclo de um semáforo com estes LEDs.

# Objetivos
Criar um sistema simples de controle de semáforo com LEDs utilizando o Raspberry Pi Pico W.
Alternar entre os estados dos LEDs de forma cíclica (vermelho, azul, verde).
Garantir que o sistema alterne os LEDs automaticamente a cada 3 segundos.

# Descrição do Projeto
Este projeto foi desenvolvido para controlar três LEDs, que representam um semáforo, com a utilização de um Raspberry Pi Pico. O código configura três pinos GPIO para controlar os LEDs nas cores vermelha, azul e verde. A cada 3 segundos, o sistema alterna o estado dos LEDs, simulando o ciclo de um semáforo. A troca entre os estados dos LEDs é feita de forma cíclica, começando pelo vermelho, passando para o azul e finalizando com o verde.

# Funcionalidade
Estado inicial: O sistema começa com o LED vermelho aceso.
Alternância de estados: O sistema alterna entre os LEDs vermelho, azul e verde a cada 3 segundos.
Timer repetitivo: Utiliza-se um timer repetitivo para garantir que a troca de LEDs aconteça a cada intervalo de tempo fixo.
Impressão no console: Durante o funcionamento, o sistema imprime uma mensagem a cada segundo indicando que está operando.

# Requisitos
Hardware:

Raspberry Pi Pico.
Três LEDs (vermelho, azul e verde) conectados aos pinos 11, 12 e 13, respectivamente(Simulador Wokwi).
OBS: Na BitBogLab, essa configuração dos pinos é diferente, mas a funcionalidade é a mesma.
Resistores de 330 Ohms limitadores de corrente para os LEDs (Simulador Wokwi).

Software:

Sistema operacional Raspberry Pi OS ou similar.
Biblioteca Pico SDK para programar o Raspberry Pi Pico.
Compilador C para compilar o código.

# Requisitos de funcionamento:

O sistema deve alternar entre os LEDs a cada 3 segundos.
O estado do semáforo deve começar com o LED vermelho aceso, seguir para o azul e, por fim, para o verde, repetindo este ciclo infinitamente.