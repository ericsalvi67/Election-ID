# Election-ID

O número de Inscrição do Título Eleitoral, em geral, possui doze dígitos. Os oito (8) primeiros dígitos correspondem ao número sequencial. O nono e o décimo dígitos correspondem à Unidade Federativa (UF) ao qual o eleitor pertence. Por fim, os dois últimos dígitos correspondem aos Dígitos Verificadores.

Assim, o Título Eleitoral número 004356870906, por exemplo, tem como:
    • Número sequencial: 00435687
    • Número da Unidade Federativa: 09 (SC)
    • Dígitos Verificadores: 06

O primeiro Dígito Verificador corresponde ao resto da divisão por 11 do somatório do produto de cada algarismo do número sequencial respectivamente por 2, 3, 4, 5, 6, 7, 8 e 9, a partir da esquerda. Quando o resto da divisão do somatório por 11 for igual a 10, o dígito verificador é definido como 0. Por exemplo, para o número sequencial 00435687 tem-se:

![image](https://github.com/user-attachments/assets/a61b4511-f731-43eb-9c3c-01501e9804ce)


Como o resto da divisão de 230 por 11 é igual a 10 tem-se que o primeiro dígito verificador é 0.

O segundo dígito verificador corresponde ao resto da divisão por 11 do somatório do produto dos dois números da UF e do primeiro dígito verificador por 7, 8 e 9, respectivamente, a partir da esquerda. Quando o resto do somatório por 11 for igual a 10, o dígito verificador é definido como 0.

![image](https://github.com/user-attachments/assets/99d2d051-934e-4652-a76d-fd886390b68d)


Como o resto da divisão de 72 por 11 é igual a 6 tem-se que segundo dígito verificador é 6.

Faça uma função que receba uma string com os 10 primeiros dígitos do título de eleitor, ou seja, os 8 dígitos do número sequencial e os dois dígitos correspondentes à Unidade Federativa. A função deverá calcular e retornar os dois dígitos verificadores. A função implementada deverá obrigatoriamente seguir o protótipo definido abaixo.

void titulo_de_eleitor(char *titulo, int *dv1, int *dv2)

Faça ainda o programa principal que deverá ler a string com os 10 primeiros dígitos do título de eleitor e após escrever os dois dígitos verificadores. Esses valores deverão ser retornados pela função implementada.
