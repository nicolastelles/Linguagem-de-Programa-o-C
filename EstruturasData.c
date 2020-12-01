#include <stdio.h>

 struct dma {
      int dia;
      int mes;
      int ano; 
   }; 
struct hm {
   int horas;
   int minutos;
};


struct dma fim_evento (struct dma datainicio, int duracao) {
   struct dma datafim;  
    int mes = (int)duracao / 30;

    int dia = duracao % 30;
    datafim.ano = datainicio.ano;
    
    //definindo dia 
     if(datainicio.dia + dia > 30){ 
      datafim.dia = (datainicio.dia + dia)-30;
      datafim.mes+=1;
     }else
      datafim.dia = datainicio.dia + dia;

    //definindo mes e ano 
    if(datainicio.mes + mes > 12) {
        if (mes>=24){
          datafim.ano = datainicio.ano + (int)mes/12;
          datafim.mes = (datainicio.mes + mes%12);
        }else{  
          datafim.mes = (datainicio.mes + mes%12) -12 ;
          datafim.ano +=1;
          }
    }else{ 
      datafim.mes = datainicio.mes + mes;
      datafim.ano = datainicio.ano;
      }
    
   return datafim;
}



struct dma dias_passados (struct dma datainicio , struct dma datafim){




}

struct hm time(int minutos){
struct hm relogio;
  relogio.horas = (int)minutos/60;
  relogio.minutos = minutos % 60; 
  return relogio;
}




int main(void) {
 struct dma inicio;
 struct dma x;  
 int dura;
 struct hm y;  
   //EX 1
   /*
   scanf ("%d %d %d", &inicio.dia, &inicio.mes, &inicio.ano);
   scanf ("%d", &dura);
   x = fim_evento(inicio,dura);
   printf("%d/%d/%d", x.dia,x.mes,x.ano);
  */

  //EX3
  scanf ("%d", &dura);
  y = time(dura);
  printf("%d horas e %d minutos", y.horas,y.minutos);



  return 0;
}
