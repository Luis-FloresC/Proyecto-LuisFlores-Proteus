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
int i=0,j=0;

while(true)
{

if(bit_test(portA,0)==1)
{
  switch(i)
  {
    case 0:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    case 1:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    case 2:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    case 3:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    case 4:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    case 5:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
      case 6:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    
      case 7:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
    
     case 8:
           output_b(miDisplay[i]);
           delay_ms(1500);
           i++;
    break;
  }
  bit_set(tris_a,0);
}

if(bit_test(portA,1)==1)
{

if(i == 0)
{
   j = i;
}
else
{
   j=i-1;
}
output_b(miDisplay[4]);
  switch(j)
  {
    case 0:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
    case 1:
           output_b(miDisplay[j]);
           delay_ms(1500);
           j--;
    break;
    case 2:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
    case 3:
           output_b(miDisplay[j]);
           delay_ms(1500);
           j--;
    break;
    case 4:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
    case 5:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
      case 6:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
    
      case 7:
           output_b(miDisplay[j]);
           delay_ms(1500);
           
    break;
    
     case 8:
           output_b(miDisplay[j]);
           delay_ms(1500);
          
    break;
  }
  bit_set(tris_a,0);
}

if(i==9)
{
  i=0;
  
}

if(j < 0)
{
  j=8;
}

}


}
