
// Nesta linha estamos cirando
// um tipo personalizado chamado Aluno
// que contem três campos: nome, idade e nota.
typedef struct
{
    char nome[50];
    int idade;
    float nota;
} Aluno;




int main() {

    // podemos declarar variáveis do tipo Aluno
    // para armazenar informações de um aluno específico
    Aluno aluno1;

    // Atribuindo valores aos campos do struct
    strcpy(aluno1.nome, "João");
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    // Imprimindo os valores
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);




    // Também podemos criar listas com 
    // itens dos tipos personalizados, 
    // como o tipo Aluno que acabamos de criar na linha 1
    // com a seguinte anotacao
    // nome_do_tipo nome_da_variavel[tamanho_do_array];
    // Chamamos isto de array de structs
    Aluno sala[5];


    // exemplo de codigo para ler os valores dos alunos na sala
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", sala[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &sala[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &sala[i].nota);
    }

     // Imprimindo os valores dos alunos na sala   
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", sala[i].nome);
        printf("Idade: %d\n", sala[i].idade);
        printf("Nota: %.2f\n", sala[i].nota);
    }




    return 0;
}