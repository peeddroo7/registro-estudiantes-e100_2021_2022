#include <stdio.h>

 void introduccion();
 void juego1();
 void snake();
 void ahorcado();
 void coches();


int main()
{
    char a;
    char b;
    char usuario [30];
    char contrase [30];
    FILE *iniciosesion;
     char nombre [30];
    int fecha ;
    FILE *iniciosesionfecha;
     char registronombre [30];
    char contrasena[30] ;
    FILE *registro;
    int elegir;
    elegir=0;
    printf("Elige entre las opciones introduciendo el numero de delante\n");
    printf("1 Iniciar sesion con el email \n ");
    printf("2 Iniciar sesion con fecha y nombre \n");
    printf("3 Registrarse\n");
    printf("Opcion:");
    scanf("%i", &elegir);
    switch (elegir)
    {
    case 1://Iniciar sesion


    iniciosesion=fopen ("INICIOSESION.txt", "w");
    printf ("introduzca su usuario\n");
    scanf ("%s", usuario);
    printf("introduzca su contrasena\n");
    scanf ("%s", contrase);
    fprintf (iniciosesion, "USUARIO\n CONTRASEÑA\t");
    fprintf(iniciosesion, "%s\n", usuario);
    fprintf(iniciosesion, "%s", contrase);

    fclose (iniciosesion);

    printf("¿Que quieres hacer? \n");
    printf("1 Salir. \n");
    printf("2 Jugar. \n");
    // introduccion();
    // juego1();
    // snake();
    // ahorcado();
    // coches();
    scanf("%i", &elegir);


            switch (elegir)
                {
                case 1://Salir
                elegir=0;

                break;

                case 2://Jugar
                elegir=0;
                printf("Eres un detective en colombia.");

                break;


            }
            break;

            case 2:


    iniciosesionfecha=fopen ("INICIOSESIONfecha.txt", "w");
    printf ("introduzca su nombre\n");
    scanf ("%s", nombre);
    printf("introduzca su fecha de nacimiento sin guiones ni espacios (diamesaño)\n");
    scanf ("%s", fecha);
    fprintf (iniciosesionfecha, "USUARIO\n FECHA\t");
    fprintf(iniciosesionfecha, "%s\n", nombre);
    fprintf(iniciosesionfecha, "%i", fecha);

    fclose (iniciosesionfecha);
            //Se supone que aquí te lo verifica y tal pero es con ficheros y no se jajaja
            printf("¿Que quieres hacer? \n");
            printf("1 Salir. \n");
            printf("2 Jugar. \n");

            scanf("%i", &elegir);


            switch (elegir)
                {
                case 1://Salir
                elegir=0;

                break;

                case 2://Jugar
                elegir=0;
                printf("Eres un detective en colombia.");
                break;

            }
        break;


    case 3://Registrarse
    elegir=0;
    printf ("Registarse\n");

    registro=fopen ("Registro.txt", "w");
    printf ("introduzca su nombre\n");
    scanf ("%s", registronombre);
    printf("introduzca contraseña\n");
    scanf ("%s", contrasena);
    fprintf (registro, "USUARIO\n CONTRASEÑA\t");
    fprintf(registro, "%s\n", registro);
    fprintf(registro, "%i", contrasena);

    fclose (registro);
    return 0;


}
    }
 void introduccion(){
 
 }
 void juego1(){
     
 }
 void snake(){
     
 }
 void ahorcado(){
  char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
    int repetido=0,gano=0;

    printf("\tJuego del Ahorcado\n");
    printf("Introduzca la palabra a adivinar: ");
    gets(frase);

    system("cls");

    longitud = 0;
    inicial = 0;
    j = 0;

    rep[0] = ' ';
    rep[1] = '\0';


    do {
                system("cls");
        temp=0;

        if(inicial == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';
             longitud++;
          }
         }
        }

        inicial = 1;

        temporal[longitud] = '\0';

        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }

        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }

        if(repetido == 0) {
         if(temp == 0) {
           oportunidades = oportunidades - 1;
         }
        }
        else {
         printf("Ya se ha introducido este caracter");
         printf("\n\n");
        }

        printf("\n");

        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }

        printf("\n");

        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }

        printf("\n");
        printf("Letras Acertadas: %d",acertado);
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");

        rep[j] = pal;
        j++;

        if (oportunidades==0)
        {
           break;
        }

        printf("Introduzca una letra:");
        scanf("\n%c",&pal);

    }while(oportunidades != 0);


    if(gano) {
                printf("\n\n");
        printf("Enhorabuena, has ganado.");
    }
    else {
                printf("\n\n");
        printf("Has perdido.");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
     
 }
 void coches(){
     
 }

