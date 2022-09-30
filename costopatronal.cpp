//#include <stdio.h>
//#include <math.h>
#include <cstdlib>
#include <stdio.h>
#include <math.h>








int main()
{

//Variables declarations

 float uma;
 float primart;
 float dias;
 float sbc;
 float cuotaFija;
 float prestdin,gtosmedicos,riesgotrabajo,invalidez,guarderias;
 double costoPatTotal;
 int respuesta;
 char coment1[8];

//Variables expressions

/*
CUOTA FIJA
cuotaFija = UMA*dias*2.4%%
 PRESTACIONES EN DINERO
 prestdin = DIAS*SBC*0.7%%
 GASTOS MEDICOS PENSIONADOS Y BENEFICIARIOS 
 gtosmedicos = DIAS*SBC*1.05%%
 RIESGO DE TRABAJO 
 riesgotrabajo =  DIAS*SBC*(PRIMA RT/100)
 INVALIDEZ Y VIDA
 invalidez = DIAS*SBC*1.75%%
 GUARDERIAS Y PRESTACIONES SOCIALES 
 guarderias = DIAS*SBC*1%%
 ___________________________________________________________________________________\n");
 \t \t\t Expresiones de Calculos\n\t\t\t\t COSTO EMPLEADO \n");
 INVALIDEZ Y VIDA- 
 DIAS*SBC*0.625%% \n");
 PRESTACIONES EN DINERO- 
 DIAS*SBC*0.25%% \n");
 GASTOS MEDICOS PENSIONADOS Y BENEFICIARIOS-- 
 DIAS*SBC*0.375%% \n");
 CESANTIA Y VEJEZ- 
 DIAS*SBC*1.125%% \n");
 ENFERMEDADES Y MATERNIDAD- 
 0.4%% SOBRE EXCEDENTE DE:[(3UMA)-SBC)]*DIAS \n");
 
*/

 printf("-Jesus Hernandez 2022-\n  CALCULO DE COSTO PATRONAL v.2.0\n"); 
 printf("___________________________________________________________________________________\n");
 printf("\t \t\t Expresiones de Calculos\n\t\t\t\t COSTO PATRONAL \n");	
 
 do
 {
 printf("----CALCULANDO COSTO PATRONAL DE CUOTAS IMSS---\n \n");
 printf("Capture la prima de riesgo de la empresa, si no la conoce capture 0.5: ");
 scanf("%f",&primart);
 printf("Capture el valor de la UMA vigente: ");
 scanf("%f",&uma);
 printf("Cuantos dias tiene el mes del calculo que desea realizar?: ");
 scanf("%f",&dias);
 printf("Cual es el salario base de cotizacion del trabajador?: ");
 scanf("%f",&sbc);
 
 //CALCULANDO COSTO PATRONAL
 
 cuotaFija=uma*dias*0.204; 
 prestdin=dias*sbc*0.007; 
 gtosmedicos=dias*sbc*0.0105; 
 riesgotrabajo=dias*sbc*(primart/100); 
 invalidez=dias*sbc*0.0175; 
 guarderias=dias*sbc*0.01;
 costoPatTotal=cuotaFija+prestdin+gtosmedicos+riesgotrabajo+invalidez+guarderias;
 
 printf("---------------------------------------RESULTADOS----------------------------------\n");
 printf("___________________________________________________________________________________\n");
 printf("El costo patronal es:\n Cuota Fija:%f\n Prestaciones en Dinero:%f\n Gastos Medicos:%f\n Riesgo de Trabajo:%f\n Invalidez y Vida:%f\n Guarderias y Prestaciones sociales:%f\n\n Costo Patronal Total:%lf\n\n",cuotaFija,prestdin,gtosmedicos,riesgotrabajo,invalidez,guarderias,costoPatTotal);
 printf("El costo patronal, es el monto mensual que le corresponde pagar al patron por afiliar a su empleado en el sistema de seguridad social \n");

 //CALCULANDO COSTO TRABAJADOR
 
 float compar,invalobr,prestdinobr,gtosmedobr,costoObrTot,cesob,enfymat; 
 invalobr=dias*sbc*0.00625; 
 prestdinobr=dias*sbc*0.0025; 
 gtosmedobr=dias*sbc*0.00375;
 cesob=dias*sbc*.01125;
 compar=0.004*(sbc-(3*uma))*dias;
 if(compar<0){
 	enfymat=0;
 	
 }
 else{
 	enfymat=compar;
 }
 
 costoObrTot=invalobr+prestdinobr+gtosmedobr+cesob+enfymat;
 
 
 float costoTotal;
 costoTotal=costoPatTotal+costoObrTot;
 printf("___________________________________________________________________________________\n");
 printf("El costo para el trabajador es:\n Invalidez y Vida:%f\n Prestaciones en dinero:%f\n Gastos Medicos:%f\n Cesantia y Vejez:%f\n Enfermedades y Maternidad:%f\n\n Costo Total para el Trabajador:%f\n ",invalobr,prestdinobr,gtosmedobr,cesob,enfymat,costoObrTot);
 printf("El costo total para el trabajador, es el monto mensual que el empleador descontara al trabajador a traves de los pagos de nomina\n");
 printf("___________________________________________________________________________________\n"); 
 printf("El Costo Total es de:%f\n\n",costoTotal); 
 printf("---AHORA CALCULAREMOS EL COSTO PATRONAL CORRESPONDIENTE A CUOTAS DE RCV E INFONAVIT---:\n\n");
 printf("\n");
 
 //CALCULANDO COSTO BIMESTRAL
 
 float retiro,cesantia,infonavit,cesobr,ctopatbim;
 printf("Cuantos dias tiene el bimestre a calcular?: ");
 scanf("%f",&dias);
 
 retiro=dias*sbc*.02;
 cesantia=dias*sbc*.0315;
 infonavit=dias*sbc*.05;
 ctopatbim=retiro+cesantia+infonavit;
 
 
 
 
 
 
 
 
 printf("El costo patronal bimestral es:\n Retiro:%f\n Cesantia en edad avanzada y vejez:%f\n Infonavit:%f\n Costo Patronal Total Bimestral:%f\n",retiro,cesantia,infonavit,ctopatbim);
 printf("\n \n");
 printf("***PRESIONE 1 PARA CONTINUAR, 2 PARA SALIR DEL PROGRAMA***:\n");
 scanf("%d",&respuesta);
 if(respuesta>=2)
{
 break;
               //exit(-1);
               }
               

}while(respuesta=1);




                  
system("PAUSE");
return 0;

} 
 
