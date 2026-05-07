# P1-programa-o-

# Sistema de Gerenciamento de Estacionamento Rotativo

## Nome e Matrícula
- Nome: Douglas Rafael Farias Araujo
- Matrícula: 20240005626  

## Descrição do Problema
Este projeto implementa um sistema que gerencia um estacionamento rotativo. Ele calcula o valor a pagar conforme o tipo de veículo e tempo de permanência, aplicando regras de desconto ou multa quando necessário. O sistema exibe todas as informações do veículo e o valor final ao usuário.

## Análise do Problema
Na prática, um estacionamento rotativo recebe diferentes tipos de veículos e precisa calcular a cobrança baseada no tempo de permanência.  
Decisões que o sistema precisa tomar:
- Identificar o tipo do veículo (Carro, Moto, Caminhonete)
- Calcular valor base
- Aplicar desconto ou multa conforme regras
- Exibir informações detalhadas para o usuário

## Definição das Variáveis
| Nome         | Tipo       | Finalidade                                        |
|--------------|-----------|----------------------------------------------------|
| placa        | char[10]  | Armazena a placa do veículo                        |
| tipoVeiculo  | int       | Tipo do veículo (1-Carro, 2-Moto, 3-Caminhonete)   |
| tempo        | int       | Tempo de permanência em horas                      |
| valorBase    | float     | Valor calculado sem desconto ou multa              |
| desconto     | float     | Valor do desconto aplicado                         |
| multa        | float     | Valor da multa aplicada                            |
| valorFinal   | float     | Valor final a pagar                                |
| tipoTexto    | char[20]  | Nome do tipo de veículo para exibição              |

## Regras de Negócio
- Tipos de veículos: Carro, Moto, Caminhonete  
- Tabela de preços:
  - Carro: R$5/h  
  - Moto: R$3/h  
  - Caminhonete: R$8/h  
- Regras adicionais:
  - Até 1 hora: valor mínimo
  - Acima de 5 horas: desconto de 10%
  - Acima de 10 horas: multa adicional de R$20

## Explicação da Lógica
1. Receber dados do usuário: placa, tipo e tempo de permanência  
2. Definir valor base conforme tipo do veículo e tempo  
3. Aplicar desconto se o tempo for maior que 5 horas e menor ou igual a 10 horas  
4. Aplicar multa se o tempo for maior que 10 horas  
5. Calcular valor final: `valorFinal = valorBase - desconto + multa`  
6. Exibir todas as informações detalhadas

## Como Compilar e Executar
```bash
# Compilar:
gcc main.c -o estacionamento

# Executar:

#Entrada:
./estacionamento
Placa: ABC1234
Tipo: 1
Tempo: 6

#saida:
#Resumo do Estacionamento:

Placa: ABC1234
Tipo de veiculo: Carro
Tempo de permanencia: 6 horas
Valor base: R$ 30.00
Desconto: R$ 3.00
Multa: R$ 0.00
Valor final a pagar: R$ 27.00
