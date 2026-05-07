# Sistema de Gerenciamento de Estacionamento Rotativo

## Nome e Matrícula
- Nome: Douglas Rafael Farias Araujo
- Matrícula: 20240005626  

## Descrição do Problema
Este projeto implementa um sistema que gerencia um estacionamento rotativo. Ele calcula o valor a pagar conforme o tipo de veículo e tempo de permanência, aplicando regras de desconto ou multa quando necessário. O sistema exibe todas as informações do veículo e o valor final ao usuário.

## Análise do Problema
Na prática, um estacionamento rotativo recebe veículos de diferentes tipos e calcula o valor a ser pago de acordo com o tempo de permanência. Cada tipo de veículo possui um valor por hora diferente.

O sistema precisa tomar as seguintes decisões:

- Identificar o tipo do veículo informado pelo usuário;
- Definir o valor por hora conforme o tipo do veículo;
- Calcular o valor base de acordo com o tempo de permanência;
- Verificar se o tempo é maior que 5 horas para aplicar desconto de 10%;
- Verificar se o tempo é maior que 10 horas para aplicar multa adicional de R$ 20,00;
- Exibir a placa, tipo do veículo, tempo, valor base, desconto, multa e valor final.

## Definição das Variáveis
| Nome         | Tipo       | Finalidade                                           |
|--------------|-----------|----------------------------------------------------|
| placa        | char[10]  | Armazena a placa do veículo                        |
| tipoVeiculo  | int       | Tipo do veículo (1-Carro, 2-Moto, 3-Caminhonete) |
| tempo        | int       | Tempo de permanência em horas                      |
| valorBase    | float     | Valor calculado sem desconto ou multa             |
| desconto     | float     | Valor do desconto aplicado                         |
| multa        | float     | Valor da multa aplicada                            |
| valorFinal   | float     | Valor final a pagar                                |
| tipoTexto    | char[20]  | Nome do tipo de veículo para exibição             |

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

## Fluxograma do Processamento

```text
+-----------------------------+
|           INÍCIO            |
+-----------------------------+
            |
            v
+-----------------------------+
| Entrada de dados:           |
| - Placa                     |
| - Tipo do veículo           |
| - Tempo (horas)             |
+-----------------------------+
            |
            v
+-----------------------------+
| Verifica tipo do veículo    |
| (switch-case)               |
+-----------------------------+
    |        |        |
    v        v        v
  Carro     Moto   Caminhonete
    |        |        |
    +--------+--------+
             |
             v
+-----------------------------+
| Calcula valor base:         |
| valorBase = valorHora*tempo |
| Se tempo <= 1h → valorHora  |
+-----------------------------+
             |
             v
+-----------------------------+
| Tempo > 10 horas?           |
+-----------+-----------------+
| Sim       | Não             |
v           v
+------+     |
| multa=20|  |
+------+     |
             v
+-----------------------------+
| Tempo > 5 horas?            |
+-----------+-----------------+
| Sim       | Não             |
v           v
+-----------------+           |
| desconto=10%val |           |
+-----------------+           |
             v
+-----------------------------+
| Calcula valor final:        |
| valorFinal = valorBase -    |
| desconto + multa            |
+-----------------------------+
             |
             v
+-----------------------------+
| Exibe resumo:               |
| Placa, Tipo, Tempo          |
| Valor base, Desconto, Multa |
| Valor final                 |
+-----------------------------+
             |
             v
+-----------------------------+
|            FIM              |
+-----------------------------+

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
