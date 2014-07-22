#include<avr/io.h>
#include<uart.h>
#include<lcd.h>
#include<delay.h>
int main(void)
{
	DDRB=0xF0;
	PORTB=0x00;
	uartinit();
	delayms(200);
	lcd_init();
	DDRA=0x00;
	PORTA=0x00;
	unsigned char x;
	while(1)
	{
		x=dispdata();
		if(x=='w')
		{	
			switch(PINA & 0x70)
			{
				case 0x70:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Forward ");
					PORTB=0xA0;
					break;
				}
				case 0x00:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Backward");
					PORTB=0x50;
					break;
				}
				case 0x10:
				case 0x30:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Left   ");
					PORTB=0x90;
					break;
				}
				case 0x60:
				case 0x40:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Right  ");
					PORTB=0x60;
					break;
				}
				case 0x20:
				{
					lcd_gotoxy(0,0);
					lcd_string("Obstacle Found ");
					PORTB=0x00;
					break;
				}
				default:
				{
					lcd_gotoxy(0,0);
					lcd_string(" Moving Forward");
					delayms(100);
					PORTB=0xA0;
					break;
				}
			}
			break;
		}
		else if(x=='a')
		{
			switch(PINA & 0x70)
			{
				case 0x70:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Forward ");
					PORTB=0xA0;
					break;
				}
				case 0x00:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Backward");
					PORTB=0x50;
					break;
				}
				case 0x10:
				case 0x30:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Left   ");
					PORTB=0x90;
					break;
				}
				case 0x60:
				case 0x40:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Right  ");
					PORTB=0x60;
					break;
				}
				case 0x20:
				{
					lcd_gotoxy(0,0);
					lcd_string("Obstacle Found ");
					PORTB=0x00;
					break;
				}
				default:
				{
					lcd_gotoxy(0,0);
					lcd_string(" Turning Left  ");
					delayms(100);
					PORTB=0x80;
					break;
				}
			}
			break;
		}
		else if(x=='e')
		{
			switch(PINA & 0x70)
			{
				case 0x10:
				case 0x30:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Left   ");
					PORTB=0x90;
					break;
				}
				case 0x60:
				case 0x40:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Right  ");
					PORTB=0x60;
					break;
				}
				case 0x20:
				{
					lcd_gotoxy(0,0);
					lcd_string("Obstacle Found ");
					PORTB=0x00;
					break;
				}
				default:
				{
					lcd_gotoxy(0,0);
					lcd_string("Spinning Right ");
					delayms(100);
					PORTB=0x60;
					break;
				}
			}
			break;
		}
		else if(x=='q')
		{
			switch(PINA & 0x70)
			{
				case 0x10:
				case 0x30:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Left   ");
					PORTB=0x90;
					break;
				}
				case 0x60:
				case 0x40:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Right  ");
					PORTB=0x60;
					break;
				}
				case 0x20:
				{
					lcd_gotoxy(0,0);
					lcd_string("Obstacle Found ");
					PORTB=0x00;
					break;
				}
				default:
				{
					lcd_gotoxy(0,0);
					lcd_string(" Spinning Left ");
					delayms(100);
					PORTB=0x90;
					break;
				}
			}
			break;
		}
		else if(x=='d')
		{
			switch(PINA & 0x70)
			{
				case 0x70:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Forward ");
					PORTB=0xA0;
					break;
				}
				case 0x00:
				{
					lcd_gotoxy(0,0);
					lcd_string("Moving Backward");
					PORTB=0x50;
					break;
				}
				case 0x10:
				case 0x30:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Left   ");
					PORTB=0x90;
					break;
				}
				case 0x60:
				case 0x40:
				{
					lcd_gotoxy(0,0);
					lcd_string("Turning Right  ");
					PORTB=0x60;
					break;
				}
				case 0x20:
				{
					lcd_gotoxy(0,0);
					lcd_string("Obstacle Found ");
					PORTB=0x00;
					break;
				}
				default:
				{
					lcd_gotoxy(0,0);
					lcd_string(" Turning Right ");
					delayms(100);
					PORTB=0x20;
					break;
				}
			}
			break;
		}
		else if(x=='s')
		{
			lcd_gotoxy(0,0);
			lcd_string("Moving Backward");
			PORTB=0x50;
			break;
		}
	}
}