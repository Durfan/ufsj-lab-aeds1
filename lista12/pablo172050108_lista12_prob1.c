#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct avioes {
  int prefixo;
  int lugares;
} Frota;

typedef struct reservas {
  char nome[50];
  int  codigo_aviao;
} Book;

Frota aviao[4]={0};
Book reserva[60];


int CAD_AVIAO   ( Frota aviao[4] );
int PRINTABLE   ( Frota aviao[4] );
int CAD_RESERVA ( Frota aviao[4], Book reserva[60], int *rsv );
int CONS_AVIAO  ( Frota aviao[4], Book reserva[60] );
int CONS_PASSA  ( Frota aviao[4], Book reserva[60] );
void PAUSE();


int main (void) {
  int opt, rsv=0;

  while ( 1 ) {
    system("clear");
    printf ("\nSistema de Reservas\n\n");
    printf ("Reservas Atuais: %d\n\n", rsv);
    printf ("(1) Cadastro de avioes\n");
    printf ("(2) Reservar Lugar\n");
    printf ("(3) Consultar por Aviao\n");
    printf ("(4) Consultar por Passageiro\n");
    printf ("(5) Finalizar\n");
    printf ("\n( ) Opcao: ");
    scanf ("%d", &opt);
    switch ( opt ) {
      case 1: CAD_AVIAO (aviao); break;
      case 2: CAD_RESERVA (aviao,reserva,&rsv); break;
      case 3: CONS_AVIAO  (aviao,reserva); break;
      case 4: CONS_PASSA  (aviao,reserva); break;
      case 5: exit(0);
      default: printf ("(%d) Opcao invalida...", opt); PAUSE(); break;
    }

  }
  return 0;
}

int CAD_AVIAO ( Frota aviao[4] ) {
  int i, opt;
  dados: i=0;
  do {
    system ("clear");
    printf ("\nCADASTRO DE AERONAVES\n\n");
    PRINTABLE (aviao);

    printf ("\nPrefixo Aeronave %d: ", i+1);
    scanf  ("%d", &aviao[i].prefixo);
    printf ("Capacidade de passageiros: ");
    scanf  ("%d", &aviao[i].lugares);
    i++;
  } while ( i<4);

  while ( 1 ) {
    system ("clear");
    printf ("\nCADASTRO DE AERONAVES\n\n");
    PRINTABLE (aviao);
    printf ("\n(1) Alterar dados\n");
    printf ("(2) Volta...\n");
    printf ("\n( ) Opcao: ");
    scanf  ("%d", &opt);
    switch ( opt ) {
      case ( 1 ): goto dados;
      case ( 2 ): return 0;
      default: printf ("(%d) Opcao invalida...", opt); PAUSE(); break;
    }
  }
  return 0;
}

int PRINTABLE ( Frota aviao[4] ) {
  int i;
  printf ("PRF\tCAP\n");
  for ( i=0; i<4; i++) {
      printf ("%d\t%d passageiros\n", aviao[i].prefixo, aviao[i].lugares);
    }
  return 0;
}

int CAD_RESERVA ( Frota aviao[4], Book reserva[60], int *rsv ) {
    int i, opt;
    *rsv+=1;
    if ( *rsv==60 ) {
      printf ("Numero maximo de reservas alcancado!");
      PAUSE();
      return 0;
    }
    int cad=*rsv-1;
    system ("clear");
    printf ("\nRESERVAR LUGAR\n\n");
    printf ("Nome: ");
    scanf  ("%s", reserva[cad].nome);
    printf ("\n");
    for ( i=0; i<4; i++ ) {
      if ( !aviao[i].prefixo ) { printf ("Nenhuma aeronave cadastrada... "); PAUSE(); *rsv-=1; return 0; }
    }
    for ( i=0; i<4; i++ ) {
      printf ("(%d) - %d ", i+1, aviao[i].prefixo);
      printf ("Lugares: %d\n", aviao[i].lugares);
    }
    aeronave: printf ("\n( ) Aeronave: ");
    scanf  ("%d", &opt);
    if ( aviao[opt-1].lugares==0 ) { printf ("Aviao na lotacao maxima\n"); PAUSE(); goto aeronave; }
    reserva[cad].codigo_aviao=aviao[opt-1].prefixo;
    aviao[opt-1].lugares-=1;
  return 0;
}

int CONS_AVIAO ( Frota aviao[4], Book reserva[60] ) {
    int i, opt;
    for ( i=0; i<4; i++ ) {
      if ( !aviao[i].prefixo ) { printf ("Nenhuma aeronave cadastrada... "); PAUSE(); return 0; }
    }
    system ("clear");
    printf ("\nCONSULTA AVIAO\n\n");
    for ( i=0; i<4; i++ ) {
      printf ("(%d) - %d ", i+1, aviao[i].prefixo);
      printf ("Lugares: %d\n", aviao[i].lugares);
    }
    aeronave: printf ("\n( ) Aeronave: ");
    scanf  ("%d", &opt);
    printf ("\nReservas em nome de:\n\n");
    for ( i=0; i<60; i++ ) {
      if ( aviao[opt-1].prefixo==reserva[i].codigo_aviao ) printf ("%s\n", reserva[i].nome);
    }
    PAUSE();
  return 0;
}

int CONS_PASSA ( Frota aviao[4], Book reserva[60] ) {
    int i;
    char nome[50];
    for ( i=0; i<4; i++ ) {
      if ( !aviao[i].prefixo ) { printf ("Nenhuma aeronave cadastrada... "); PAUSE(); return 0; }
    }
    system ("clear");
    printf ("\nCONSULTA PASSAGEIRO\n\n");
    printf ("\nNome: ");
    scanf  ("%s", nome);
    printf ("\nReserna na aeronave:\n\n");
    for ( i=0; i<60; i++ ) {
      if ( !strcmp(nome,reserva[i].nome) ) printf ("%d\n", reserva[i].codigo_aviao);
    }
    PAUSE();
  return 0;
}

void PAUSE () {
    printf ("\nPressione [Enter] para continuar.");
    while (getchar()!='\n');
    getchar();
}
