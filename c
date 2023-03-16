int main()
{
  float tempo,distancia,resposta;
  printf("digite a hora:");
  scanf("%f",&tempo);
  printf("digite a distancia:");
  scanf("%f",&distancia);
  resposta=(distancia/tempo);
  if(resposta<=110){
      printf("correu igual a rbr");
      
  }
      if(resposta>=80){
          printf("\n mais rapido,resposta");
      }
 printf("\n media foi %.2fkm/h",resposta);

}
