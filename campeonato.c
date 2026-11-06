#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "campeonato.h"

/* 1) Aloque com malloc um Campeonato e preencha seus campos:
      - Para a quantidade de times, use o valor do parametro 'quantidade'.
      - Para o vetor de times, aloque dinamicamente um vetor de struct Time com 'quantidade' elementos.
   Copie os dados de timesIniciais (parâmetro da função) para o novo vetor, na mesma ordem.
   Considere que as alocacoes sao bem-sucedidas. */
Campeonato *criarCampeonato(const Time timesIniciais[], int quantidade) {

}

/* 2) Registre o resultado de uma partida entre dois times.
   'time1' e 'time2' sao indices no vetor de times dado no main.
   Atualize os campos 'golsPro' (gols marcados) e 'golsContra' (gols sofridos) de ambos.
   Atualize o campo 'pontos' de acordo com:
      - Vitoria: +3 pontos ao vencedor; 
      - Empate: +1 ponto para cada;
      - Derrota: 0 ponto. */
void registrarPartida(Campeonato *campeonato, int time1, int time2, int golsTime1, int golsTime2) {

}

/* 3) Retorne o indice do lider do campeonato (maior numero de pontos).
   Em caso de empate na pontuacao, utilize os seguintes criterios,
   nesta ordem:
   a) maior saldo de gols (golsPro - golsContra);
   b) maior numero de golsPro.
   Se ainda houver empate, mantenha o time que aparece primeiro no vetor. */
int indiceLider(const Campeonato *campeonato) {

}

/* 4) Conte quantos times possuem saldo de gols positivo, isto e, golsPro > golsContra. */
int contarSaldoPositivo(const Campeonato *campeonato) {

}

/* 5) Libere o vetor de times e a struct Campeonato.
   Ao final, *campeonato deve ser NULL. */
void liberarCampeonato(Campeonato **campeonato) {

}

/* DESAFIO OPCIONAL: Implemente a mesma contagem da funcao 4,
   mas utilizando recursividade, sem for ou while.

   O parametro quantidade representa o numero de times
   que ainda precisam ser analisados.

   Comece pelo ultimo time do vetor (índice 'quantidade - 1')
   e avance em direcao ao primeiro (índice '0').

   Caso-base: se quantidade == 0, retorne 0.

   Caso recursivo: verifique se o ultimo time possui saldo
   positivo e some esse resultado com a contagem dos times
   anteriores, chamando a funcao com 'quantidade - 1'. */
int contarSaldoPositivoRecursivo(const Campeonato *campeonato, int quantidade) {

}


/*

RESPONDA AS PERGUNTAS ABAIXO, APOS IMPLEMENTAR AS FUNCOES E EXECUTAR O PROGRAMA:

a) Quantos pontos o Santos possui?
Resposta:

b) Quantos pontos o lider possui?
Resposta:

c) Qual e o time lider do campeonato?
Resposta:

d) Quantos times possuem saldo de gols positivo?
Resposta:


*/
