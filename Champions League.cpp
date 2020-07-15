#include<conio.h>
#include<stdio.h>
main ()
{
	int op,stop;
	do
	{
	printf("\t\t Champions League\n\n");
	printf("1.- Resultados de octavos de final\n");
	printf("2.- Resultados de cuartos de final\n");
	printf("3.- Resultados de semifinal\n");
	printf("4.- Resultados de la final\n");
	printf("5.- Desglosar todos los partidos\n");
	printf("SELECCIONE UNA OPCION\n");
	scanf("%d",&op);
	if (op<=0 || op>5 )
	{
		printf("VALOR FUERA DEL RANGO DE OPCIONES O NO ES NUMERO INTENTE DE NUEVO\n\n");
		stop==op;
		
	}
	switch (op)
	{
		case 1:
			printf("\t\t                   OCTAVOS DE FINAL\n\n");
			printf("\t\tDortmund                0-4       Tottenham\n\n");
			printf("\t\tReal Madrid             3-5       Ajax\n\n");
			printf("\t\tParis Saint-Germain     3-3       Manchester United\n\n");
			printf("\t\tOporto                  4-3       Roma\n\n");
			printf("\t\tManchester City         7-0       Schalke\n\n");
			printf("\t\tJuventus                3-0       Atletico de Madrid\n\n");
			printf("\t\tBarcelona               5-1       Lyon\n\n");
			printf("\t\tBayern de MUnich        1-3       Liverpool\n\n");
			printf("\t\tNOTA: (EL MANCHESTER AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("ESCRIBA UN CARACTER Y ENTER PARA REGRESAR AL MENU\n");
			scanf("%d",&stop);
			break;
		case 2:
			printf("\t\t                  CUARTOS DE FINAL\n\n");
			printf("\t\tBarcelona               4-0       Manchester United\n\n");
			printf("\t\tJuventus                2-3       Ajax\n\n");
			printf("\t\tManchester City         4-4       Tottenham\n\n");
			printf("\t\tOporto                  1-6       Liverpool\n\n");
			printf("\t\tNOTA: (EL TOTTENHAM AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("ESCRIBA UN CARACTER Y ENTER PARA REGRESAR AL MENU\n");
			scanf("%d",&stop);
			break;
		case 3:
			printf("\t\t                    SEMIFINALES\n\n");
			printf("\t\tLiverpool               4-3       Barcelonan\n");
			printf("\t\tAjax                    3-3       Tottenham\n\n");
			printf("\t\tNOTA: (EL MANCHESTER AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("ESCRIBA UN CARACTER Y ENTER PARA REGRESAR AL MENU\n");
			scanf("%d",&stop);
			break;
		case 4:
			printf("\t\t                       FINAL\n\n");
			printf("\t\tTottenham               0-2       Liverpool\n");
			printf("ESCRIBA UN CARACTER Y ENTER PARA REGRESAR AL MENU\n");
			scanf("%d",&stop);
			break;
		case 5:
			printf("\t\t                   OCTAVOS DE FINAL\n\n");
			printf("\t\tDortmund                0-4       Tottenham\n\n");
			printf("\t\tReal Madrid             3-5       Ajax\n\n");
			printf("\t\tParis Saint-Germain     3-3       Manchester United\n\n");
			printf("\t\tOporto                  4-3       Roma\n\n");
			printf("\t\tManchester City         7-0       Schalke\n\n");
			printf("\t\tJuventus                3-0       Atletico de Madrid\n\n");
			printf("\t\tBarcelona               5-1       Lyon\n\n");
			printf("\t\tBayern de MUnich        1-3       Liverpool\n\n");
			printf("\t\tNOTA: (EL MANCHESTER AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("\t\t                  CUARTOS DE FINAL\n\n");
			printf("\t\tBarcelona               4-0       Manchester United\n\n");
			printf("\t\tJuventus                2-3       Ajax\n\n");
			printf("\t\tManchester City         4-4       Tottenham\n\n");
			printf("\t\tOporto                  1-6       Liverpool\n\n");
			printf("\t\tNOTA: (EL TOTTENHAM AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("\t\t                    SEMIFINALES\n\n");
			printf("\t\tLiverpool               4-3       Barcelonan\n");
			printf("\t\tAjax                    3-3       Tottenham\n\n");
			printf("\t\tNOTA: (EL MANCHESTER AVANZA POR EL VALOR DOBLE DE LOS GOLES)\n\n");
			printf("\t\t                       FINAL\n\n");
			printf("\t\tTottenham               0-2       Liverpool\n\n\n");
			
			printf("\t\t    GANADOR DE LA CHAMPIONS LEAGUE: LIVERPOOL \n\n\n");
			printf("ESCRIBA UN CARACTER Y ENTER PARA REGRESAR AL MENU\n");
			scanf("%d",&stop);
			break;
			
	}
}while(!(stop==1234));
	return 0;
}
