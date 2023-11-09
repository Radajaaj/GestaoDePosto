#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "database.h"
#include "LoadSave.h"
#include "cadastro.h"
#include "vendas.h"
#include "login.h"
#include "relatorio.h" 


struct produto{
    char nome[50];
    int id;
    float preco;
    struct lote;
};
struct lote{
    int estoque;
    int validade;
    int codigo;
};
struct funcionario{
    char nome[50];
    int nascimento;
    
};