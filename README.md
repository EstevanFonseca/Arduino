# Descrição:
O nosso projeto é a automitazação de uma lixeira residencial onde há o uso de um sensor ultrassônico de 
distância para a detecção de alguém que esteja próximo da lixeira para o acionamento do servo motor e 
levantamento da tampa ao qual o servo está acopplado.

# Código:
- sketch.cpp contém o código da lixeira automática.
- firmata_alterado é standard firmata junto com sketch.cpp para ser integrado com o Node Red.
- NodeRed.json é o json gerado pelo Node Red.

# Materiais utilizados:
 - 1 BlackBoard UNO R3
 - 1 Protoboard de 400 Pontos
 - 1 Micro Servo 9g SG90
 - 1 Sensor Ultrassônico - HC-SR04
 - 1 Resistor 300Ω   
 - 1 LED vermelho
 - 1 LED verde
 - Jumpers M/M e M/F 
 - 1 Cabo USB AB 50cm

# Montagem do projeto
Para o nosso projeto em especifico, nos optamos por substituir a tampa da lixeira por uma de 
papelão, gerando maior facilidade para o servo levantar a tampa. O sensor de distância foi
então acoplado na parte frontal da lixeira e o servomotor na parte traseira da lixeira.

