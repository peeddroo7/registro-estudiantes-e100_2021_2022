#include <stdio.h>
typedef struct
{
    char nombre[11];
    char edad;
    char email[25];
    char contrasena[25];
} usuario ;

usuario mail(usuario p);
usuario fecha(usuario z);

int main()
{
    char a;
    char b;
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
  
    printf("Introduce el email:");
    scanf("%s", &b); 
    printf("Introduce la contrasena:");
    scanf("%s", &a);
    //Se supone que aquí te lo verifica y tal pero es con ficheros y no se jajaja
    printf("¿Que quieres hacer? \n");
    printf("1 Salir. \n");
    printf("2 Jugar. \n");
    printf("3 Estadisticas. \n");
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

                case 3://Estadisticas
                elegir=0;
                printf("Sabias que tienes mas brazos que la media." );

                break;
            }
            break;

            case 2:
  
            printf("Introduce tu nombre:");
            scanf("%s", &b); 
            printf("Introduce tu fecha de nacimiento (dd/mm/aa):");
            scanf("%s", &a);
            //Se supone que aquí te lo verifica y tal pero es con ficheros y no se jajaja
            printf("¿Que quieres hacer? \n");
            printf("1 Salir. \n");
            printf("2 Jugar. \n");
            printf("3 Estadisticas. \n");
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

                case 3://Estadisticas
                elegir=0;
                printf("Sabias que tienes mas brazos que la media." );

                break;
            }
        break;
    
    
    case 3://Registrarse
    elegir=0;
    
    printf("1 Registrarse con email y contraseña:");
    printf("2 Registrarse con nombre y fecha de nacimiento:");
    scanf("%i",&elegir);
    
        switch (elegir)
        {
        case 1://Nombre Fecha
        elegir=0;

            usuario x;
            printf("Escribe un numero:");
            scanf("%i", &x);
            fecha(x);
    
            printf("¿Que quieres hacer? \n");
            printf("1 Salir. \n");
            printf("2 Jugar. \n");
            printf("3 Estadisticas. \n");
            scanf("%i", &elegir);
            switch (elegir)
            {
            case 1://Salir
            elegir=0;
                
                break;
            
            case 2://Jugar
            elegir=0;
            printf("Eres un detective y te van a follar en colombia.");
                break;

            case 3://Estadisticas
            elegir=0;
            printf("Sabias que tienes mas brazos que la media." );

                break;
            }
        break;
        
        case 2://Email y contraseña
        elegir=0;

            usuario v;
            printf("Escribe un numero:");
            scanf("%i", &v);
            mail(v);
    
            printf("¿Que quieres hacer? \n");
            printf("1 Salir. \n");
            printf("2 Jugar. \n");
            printf("3 Estadisticas. \n");
            scanf("%i", &elegir);

            break;
        }

        break;

   

    }

   

}

usuario mail(usuario p)
{
    

    printf("Escribe tu email:");
    scanf("%s", &p.email);

    printf("Escribe tu contrasena:");
    scanf("%s", &p.contrasena);

 
    printf("%s \n", p.email);
    printf("%s \n", p.contrasena);

    return (usuario){p.edad, p.nombre, p.email, p.contrasena};
}

usuario fecha(usuario z)
{
    printf("Escribe tu nombre:");
    scanf("%s", &z.nombre);

    printf("Escribe tu fecha de nacimiento (dd/mm/aa):");
    scanf("%s", &z.edad);

    printf("%s \n", z.nombre);
    printf("%i \n", z.edad);  
}