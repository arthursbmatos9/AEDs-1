/******************************************************************************
Um programa deverá oferecer o seguinte menu de opções:
0 – Sair do programa
1 – Cadastrar senha
2 – Validar senha

A opção 1 deverá permitir ao usuário cadastrar uma senha. Para isto, ele deverá digitar a senha e, em seguida, repeti-la para confirmação.
Se as duas senhas cadastradas estiverem iguais, a senha deverá ser armazenada em um arquivo denominado “senha.dat”. Se o arquivo não existir, ele deverá ser 
criado. Se ele já existir, a nova senha deverá sobrepor a senha anteriormente cadastrada.
Ao digitar a senha, o caractere digitado não deverá ser exibido na tela. Ao contrário, em seu lugar deverá ser exibido o caractere asterisco.

A opção 2 deverá solicitar ao usuário que digite a senha. A senha digitada deverá ser comparada com aquela armazenada no arquivo. Se iguais, exibir a mensagem
“Senha correta”. Se diferentes, exibir a mensagem “Senha incorreta”
*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcaoEscolhida;
    printf("Digite opcao [0-Sair, 1-Cadastrar senha, 2-Validar senha]: ");
    scanf(" %i", &opcaoEscolhida);
    
    char senha1[10];
    char senha2[10];
    
    if(opcaoEscolhida == 1)
    {
        FILE* arq = fopen("senha.dat", "w");
        
        printf("Digite sua senha: ");
        scanf(" %s", senha1);
        printf("Confirme sua senha: ");
        scanf(" %s", senha2);
        
        if(!strcmp(senha1, senha2))
            fprintf(arq, " %s", senha1); 
            
        fclose(arq);
    }
    
    if(opcaoEscolhida == 2)
    {
        FILE* arq = fopen("senha.dat", "r");
        
        fscanf(arq, " %s", senha1);
        
        printf("\nDigite sua senha: ");
        scanf(" %s", senha2);
        
        if(!strcmp(senha1, senha2))
            printf("Senha correta");
        else
            printf("Senha incorreta");
        
        fclose(arq);
        
    }
    
    return 0;
}

