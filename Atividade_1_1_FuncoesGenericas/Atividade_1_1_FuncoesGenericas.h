// ----------------------------------------------------------
// ---- Definição dos tipos de dado -------------------------
// ----------------------------------------------------------
struct CartaBaralho
{
    char naipe;
    int  valor;
};

// ----------------------------------------------------------
// ---- Definição dos tipos de ponteiros para função---------
// ----------------------------------------------------------
typedef  int   (*FuncaoComparacao)   (void *, void *);
typedef  int   (*FuncaoPredicado)    (void *);
typedef  float (*FuncaoMapeamento)   (void *);
typedef  void  (*FuncaoOperacao)     (void *);
typedef  int   (*FuncaoCoringa)      (struct CartaBaralho, struct CartaBaralho);

// ----------------------------------------------------------
// --------- Assinaturas das funções ------------------------
// ----------------------------------------------------------

//-------------------------------------------
/* a função bubbleSort é aquela mesma discutida em aula, está pronta */
void bubbleSort(void* [], int, FuncaoComparacao);

//-------------------------------------------
/* o objetivo da função "encontrarMaior" é retornar o maior valor contido no vetor
*/
void* encontrarMaior(void* [], int, FuncaoComparacao);

//-------------------------------------------
/* o objetivo da função "contar" é contabilizar a quantidade de elementos do
   vetor que atendem à um determinado predicado
*/
int contar(void* [], int, FuncaoPredicado);

//-------------------------------------------
/* o objetivo da função "calcularMedia" é contabilizar a média das informações do
   vetor. Observe que o vetor contem (ponteiros para) qualquer tipo de dado, mas o
   cálculo da média precisa ser realizado com valores numéricos.
   Essa incompatibilidade é resolvida com a função de mapeamento, a qual mapeia
   o ponteiro sem tipo (void *) para um valor real de acordo com o contexto de uso
   da função de cálculo da média.
*/
float calcularMedia(void* [], int, FuncaoMapeamento);

//-------------------------------------------
/* o objetivo da função "aplicarOperacao" é executar uma operação em cada elemento do
   vetor, alterando seu conteúdo conforme a operação aplicada.
*/
void aplicarOperacao(void* [], int, FuncaoOperacao);

//-------------------------------------------
/* o objetivo da função "identificarCoringa" é realizar o processamento das
   cartas do baralho com o objetivo de identificar qual é o coringa considerando
   a carta "vira".
*/
void identificarCoringa(struct CartaBaralho[], int, struct CartaBaralho, FuncaoCoringa);



// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// --------- implementação das funções descritas acima-------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------

void bubbleSort(void* dados[], int tam, FuncaoComparacao pfc)
{

    int   res, i, j, r;
    void  *temp;

    for (i=0; i<tam-1; i++)
    {
        /*printf("Iteracao %d \n", i+1);*/
        for (j=0; j<tam-(i+1); j++)
        {
            /* invocacao da funcao de comparacao por meio do ponteiro para funcao*/
            r = pfc(dados[j],dados[j+1]);
            if (r<0)
            {
                temp       = dados[j];
                dados[j]   = dados[j+1];
                dados[j+1] = temp;
            }
        }
    }
}

//---------------------------------------------------------------
void* encontrarMaior(void* dados[], int tam, FuncaoComparacao pfc)
{

    int i;
    void* maior;

    maior = dados[0];

    for(i=0; i<tam; i++)
    {
        if(pfc(dados[i],maior) > 0)
        {
            maior = dados[i];
        }
    }

    return maior;
}

//---------------------------------------------------------------
int contar(void* dados[], int tam, FuncaoPredicado pfp)
{

    int cont = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if (pfp(dados[i]) != 0)
            cont++;
    }

    return cont;
}

//---------------------------------------------------------------
float calcularMedia(void* dados[], int tam, FuncaoMapeamento pfm)
{
    int i;

    float* acumula;
    *acumula = pfm(dados[0]);

    for(i=1; i<tam; i++)
    {
       *acumula += pfm(dados[i]);
    }

    return *acumula / tam;
}

//---------------------------------------------------------------
void aplicarOperacao(void* dados[], int tam, FuncaoOperacao pfo)
{
    int i;

    for(i=0; i<tam; i++)
    {
        pfo(dados[i]);
    }
}

//---------------------------------------------------------------
void identificarCoringa(struct CartaBaralho baralho[], int tam,
                        struct CartaBaralho vira, FuncaoCoringa pfm)
{
    int i;

    for(i=0; i<tam; i++)
    {
       if(pfm(baralho[i],vira) > 0)
    }

}
