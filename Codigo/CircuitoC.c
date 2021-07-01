#include <16f886.h>
#Fuses XT,NOPROTECT,NOWDT,NOBROWNOUT,PUT,NOLVP      
#use delay(clock= 4M)
#byte portB = 0x06
#byte portA = 0x05
#byte tris_a = 0x85
#byte tris_b = 0x86

byte const miDisplay[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

void main()
{

tris_b= 0x00;
//tris_a = 0xFF;
portB = 0x00;
bit_set(tris_a,0);
output_c(0x00);
int i=0;
set_tris_c(0x00); 
set_tris_a(0xFF);
int Tiempo = 1500;

while(true)
{

if(bit_test(portA,0)==1)
{
  switch(i)
  {
    case 0:
           output_b(miDisplay[i]);
           output_c(0x00);
           delay_ms(Tiempo);
          
           i++;
    break;
    case 1:
           output_b(miDisplay[i]);
           output_c(0b01000000);
         delay_ms(Tiempo);
           
           i++;
    break;
    case 2:
           output_b(miDisplay[i]);
           output_c(0b00100000);
           delay_ms(Tiempo);
           i++;
    break;
    case 3:
           output_b(miDisplay[i]);
           output_c(0b00010000);
           delay_ms(Tiempo);
           i++;
    break;
    case 4:
           output_b(miDisplay[i]);
           output_c(0b00010000);
           delay_ms(Tiempo);
           i++;
    break;
    case 5:
           output_b(miDisplay[i]);
           output_c(0b00001000);
          delay_ms(Tiempo);
           i++;
    break;
      case 6:
           output_b(miDisplay[i]);
            output_c(0b00000100);
           delay_ms(Tiempo);
           i++;
    break;
    
      case 7:
           output_b(miDisplay[i]);
            output_c(0b00000010);
           delay_ms(Tiempo);
           i++;
    break;
    
     case 8:
           output_b(miDisplay[i]);
            output_c(0b00000001);
           delay_ms(Tiempo);
           i++;
    break;
  }

}

if(bit_test(portA,1)==1)
{

i--;
 switch(i)
  {
    case 0:
           output_b(miDisplay[i]);
           output_c(0x00);
           delay_ms(Tiempo);
          
        
    break;
    case 1:
           output_b(miDisplay[i]);
           output_c(0b01000000);
           delay_ms(Tiempo);
           
         
    break;
    case 2:
           output_b(miDisplay[i]);
           output_c(0b00100000);
         delay_ms(Tiempo);
         
    break;
    case 3:
           output_b(miDisplay[i]);
           output_c(0b00010000);
           delay_ms(Tiempo);
          
    break;
    case 4:
           output_b(miDisplay[i]);
           output_c(0b00010000);
          delay_ms(Tiempo);
      
    break;
    case 5:
           output_b(miDisplay[i]);
           output_c(0b00001000);
           delay_ms(Tiempo);
       
    break;
      case 6:
           output_b(miDisplay[i]);
            output_c(0b00000100);
           delay_ms(Tiempo);
       
    break;
    
      case 7:
           output_b(miDisplay[i]);
            output_c(0b00000010);
           delay_ms(Tiempo);
       
    break;
    
     case 8:
           output_b(miDisplay[i]);
            output_c(0b00000001);
           delay_ms(Tiempo);
          
    break;
    
    default:
             output_b(miDisplay[0]);
            output_c(0x00);
          delay_ms(Tiempo);
    break;
  }
 
  

}

if(i==9)
{
  i=0;
  
}



}


}
