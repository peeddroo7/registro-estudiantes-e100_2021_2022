#include <stdio.h>


void introduccion();
void juego1();
 void snake();
 void texto1 ();
 void ahorcado();
 void texto2 ();
 void coches();
 void texto3 ();
 void texto4 ();



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


    iniciosesion=fopen ("INICIOSESION.txt", "a");
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
    
    scanf("%i", &elegir);


            switch (elegir)
                {
                case 1://Salir
                elegir=0;

                break;

                case 2://Jugar
                elegir=0;
                printf("Eres un detective en colombia.");
               introduccion();
     juego1();
    texto1();
     snake();
    texto2();
     ahorcado();
    texto3();
     coches();
    texto4();

                break;


            }
            break;

            case 2:


    iniciosesionfecha=fopen ("INICIOSESIONfecha.txt", "a");
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
               introduccion();
     juego1();
    texto1();
     snake();
    texto2();
     ahorcado();
    texto3();
     coches();
    texto4();
                break;

            }
        break;


    case 3://Registrarse
    elegir=0;
    printf ("Registarse\n");

    registro=fopen ("Registro.txt", "a");
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
 int primero;
	int puerta;
	int salida;
	int operacion, operacion2, operacion3;
	int a,b,c,d;
	
	
	printf("^ANYO 2017^\n");
	printf("Mi nombre es Sven, naci en Noruega en 1986. Estudie en la Universidad Politecnica de Madrid, donde curse\n");
	printf("ingenieria industrial. Despues de 7 largos anyos suspendiendo mas que aprobando, logre graduarme y entrar en una empresa\n");
	printf("Tras unos cuantos años trabajando alli, decidi cambiar mi vida\n");
	printf("embarcandome en un viaje muy loco. Mientras escribo esto me dirijo hacia Nueva York en el S.S.ANNE\n");
	printf("donde espero encontrar un buen trabajo y formar una bonita familia.Mi destino es Estados Unidos por la pasion\n");
	printf(" que tenia mi madre por su vieja Colorado.Aun recuerdo esas calidas tardes donde me contaba sus anecdotas. Como la echo de menos\n");
	printf("*AL DIA SIGUIENTE* ¡QUE HA SIDO ESO!Ha sonado un fuerte estruendo, como si hubiera habido un impacto contra algo.       *MEGAFONIA:ATENCION A TODOS LOS PASAJEROS\n");
	printf("HA HABIDO UN PERCANCE, ESTAMOS INTENTANDO REPARARLO, QUE NO CUNDA EL PANICO.* Vale, necesito subir a cubierta para ver  que esta pasando. Hay tres puertas, sin ningun cartel\n");
	 
	 
	 
 }
 void juego1(){
  int primero;
	int puerta;
	int salida;
	int operacion, operacion2, operacion3;
	int a,b,c,d;
	
		printf("¿Cual de todas las puertas sera? *Introduce numero de puerta, de la 1 a la 3*\n");
	scanf("%i",&puerta);
	
	
	if(puerta == 1)
	{
		
		printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
	    printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
	    printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
	    printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
	    printf("Volvere atras mejor\n");
		printf("*Introduce el numero de otra puerta*\n");
		scanf("%i",&puerta);
	}
		if(puerta==2)
	{
	    
	    printf("Esta puerta esta chapada, voy a tener que buscar alguna llave\n");
	    printf("*Introduce el numero de otra puerta*\n");
	    scanf("%i",&puerta);
	    if(puerta==3)
	    {
	    printf("Vale, esto parece un camarote, voy a mirar\n");
		printf("*Hay una comoda(4), una mesilla(5) y una estanteria(6), donde deberia mirar primero?");
		scanf("%i",&primero);
		if(primero==4)
		{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Introduce (5) o (6)\n");
			scanf("%i",&primero);
			if(primero==5)
			{
				printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
				printf("Ya solo me queda mirar en la estanteria.\n");
				printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
				
				printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}


}

}



}
				
				
				
				
				
				
			}
			
			else if(puerta==1)
			{
				printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
	    printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
	    printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
	    printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
	    printf("Volvere atras mejor\n");
		printf("*Introduce el numero de otra puerta*\n");
		scanf("%i",&puerta);
		if(puerta==3)
		{
			printf("Vale, esto parece un camarote, voy a mirar\n");
		printf("*Hay una comoda(4), una mesilla(5) y una estanteria(6), donde deberia mirar primero?");
		scanf("%i",&primero);
		if(primero==4)
		{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Introduce (5) o (6)\n");
			scanf("%i",&primero);
			if(primero==5)
			{
				printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
				printf("Ya solo me queda mirar en la estanteria.\n");
				printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
		}
			
			
			else if(primero==6)
			{
				printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, veamos mas puertas!\n");
			}
		}
		if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
			printf("Introduce (4) o (6)\n");
			scanf("%i",&primero);
			if(primero==4)
			{
				printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
				printf("Ya solo me queda mirar la estanteria. BINGO! Aqui esta la llave, voy a la puerta 2\n");
				printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3/=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}
			}
			else if(primero==6)
			{
				printf("b");
			}
			
		}
			
			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3/=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}




			
			
			
		}
		else if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, no hay nada util\n");
			printf("Introduce (4) o (6)\n");
			scanf("%i",&primero);
			if(primero==4)
			{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Ya solo me queda mirar en la estanteria.\n");
			printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
			
			
			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3/=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}


}

			
			
			}
		}//primero m
		else if(primero==6)
		{
			printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, veamos mas puertas!\n");
		}	
		}




		else if(puerta==3)
	{
		printf("Esto parece un camarote, voy a investigarlo\n");
		printf("*Hay una comoda(4), una mesilla(5) y una estanteria(6), donde deberia mirar primero?");
		scanf("%i",&primero);
		if(primero==4)
		{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Introduce (5) o (6)\n");
			scanf("%i",&primero);
			if(primero==5)
			{
				printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
				printf("Ya solo me queda mirar en la estanteria.\n");
				printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
			}
			else if(primero==6)
			{
				printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, vamos a otra puerta!\n");
				if(puerta==1)
				{
					printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
	            printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
	            printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
	            printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
	            printf("Volvere atras mejor\n");
		        printf("*Introduce el numero de otra puerta*\n");
		        scanf("%i",&puerta);
				}
			}
			
		}
		else if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, no hay nada util\n");
			printf("Introduce (4) o (6)\n");
			scanf("%i",&primero);
			if(primero==4)
			{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Ya solo me queda mirar en la estanteria.\n");
			printf("BINGO!Aqui hay una llave, vayamos a la puerta 2!\n");
			
			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3/=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}


}

			
			
			}
		}//primero m
		else if(primero==6)
		{
			printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, a la puerta 2!\n");
			
			
			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!*La llave abrio la puerta y entro una gelida ventisca* Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("*UNOS MINUTOS DESPUES*: *ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE*\n");
printf("Joder, me cago en la puta.\n");
printf("*UNA VEZ FUERA* CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("*UN RATO DESPUES* (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
	printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
	printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
	printf("Es a mi?\n");
	printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
			scanf("%i",&operacion3);
			if(operacion3!=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
			}
		}
	}
}


else if(salida==2)
{
	printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
	printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
	printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
	printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
	printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
	printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
	printf("Vale dime, que necesitas\n");
	printf("MECANICO: Cuanto es la raiz de 144?\n");
	scanf("%i",&operacion);
	if(operacion!=12)
	{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
	}
	else if(operacion==12)
	{
		printf("*CORRECTO*");
		printf("MECANICO: Bien, cuanto es 13x10+15\n");
		scanf("%i",&operacion2);
		if(operacion2!=145)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		return 0;
		}
		else if(operacion2==145)
		{
			printf("*CORRECTO");
			printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
			scanf("%i",&operacion3);
			if(operacion3/=281)
			{
			printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
		    return 0;
			}
			else if(operacion3==281)
			{
				printf("*CORRECTO*");
				printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
			}
		}
	}


}

			
			
		}//primero e
		}//puerta 4
	

	

	

return 0;
}
}
}
}
	  
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
void texto1 ()
 {
     printf("El barco se ha empezado a hundir mas rápido de lo que la flota y los tripulantes pensaban y al abrir los ojos, te encuentras que la marea te ha llevado a una isla desierta\n");
     printf("Lo primero que sientes es la boca seca, y una sensacion de hambre desmesurada\n");
     printf("*pensamiento interno* Tengo que buscar algo de comer si quiero sobrevivir\n");
     printf("Sin saber como, te ves convertido en serpiente, crees que es por las horas sin comer o el cansancio\n");
 }
 void texto2()
 {
     printf ("Con el estomago lleno y tropecientos cocos comidos se ven las cosas de otra manera, pero sientes que te invade una sensacion de agobio al no ver a nadie\n");
     printf("Echas a andar y despues de varios kilometros, empiezas a oir voces y canticos de humanos\n");
     printf("Cual es tu sorpresa cuando te acercas y ves una tribu indigena\n");
     printf("*pensamiento interno* ¿Voy hacia ellos? ¿Me alejo? Ire\n");
     printf("Indigena 1:si quieres pertener a nuestra tribu deberás pasar la prueba DIOSA");
     
 }
 void texto3 ()
 {
     printf("Ya eres una celebridad para ellos, y te tratan como uno de sus reyes.\n");
     printf("Decides dar un paseo para conocer mejor la isla\n");
     printf("*pensamiento interno* ¿QUE?¿ESCUCHO UN MOTOR?No puede ser\n");
     printf("Te acercas a donde proviene el ruido y tus ojos no dan credito a lo que ven: UN COCHE\n");
     printf("Es tu oportunidad para salir de ahi\n");
     printf("Llegas al coche y adios a esta isla infernal\n");
 }
 void texto4 ()
 {
     printf ("ADIOS LATAM\n");
 }


