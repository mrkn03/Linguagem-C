//Para ler um texto de tamanho N até a quabra de linha

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

//Comando para limpeza de buffer de entrada
void limpar_entrada()
{
    charc;
    while ((c = getchar()) != '\n' && c != E0F)) {}
}
