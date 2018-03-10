#include<iostream>

using namespace std;


int main()
{
	int date,month;
	char ch;
	do{
		cout<<"Enter your birthday and i vl tell you your horoscope sign.\n";
		cin>>date>>month;	
	
		switch(month)
		{
			case 1:	if(date<=19)
					{
						cout<<"Capricorn.\n";
						if((20-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Aquaris.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Taurus and Virgo as their sign.\n";
					}
					else
						{
						cout<<"Aquaris.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Gemini and Libra as their sign.\n";
						}
					break;
			case 2: if(date<=18){
						cout<<"Aquaris.\n";
						if((19-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Pieces.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Gemini and Libra as their sign.\n";
						}
					else
					{
						cout<<"Pisces.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Cancer and Scorpio as their sign.\n";
					}
					break;
			case 3: if(date<=20){
						cout<<"Pisces.\n";
						if((21-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Aries.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Cancer and Scorpio as their sign.\n";
							}
					else
					{
						cout<<"Aries.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Sagittarius and Leo as their sign.\n";
					}
					break;
			case 4: if(date<=19){
						cout<<"Aries.\n";
						if((20-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Taurus.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Sagittarius and Leo as their sign.\n";
							}
					else
					{
						cout<<"Taurus.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Capricorn and Virgo as their sign.\n";
					}
					break;
			case 5: if(date<=20){
						cout<<"Taurus.\n";
						if((21-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Gemini.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Capricorn and Virgo as their sign.\n";
							}
					else
					{
						cout<<"Gemini.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Aquaris and Libra as their sign.\n";	
					}
					break;
			case 6: if(date<=21){
						cout<<"Gemini.\n";
						if((22-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Cancer.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Aquaris and Libra as their sign.\n";
							}
					else
					{
						cout<<"Cancer.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Pisces and Scorpio as their sign.\n";
					}
					break;
			case 7: if(date<=22){
						cout<<"Cancer.\n";
						if((23-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Leo.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Pisces and Scorpio as their sign.\n";
						}
					else
					{
						cout<<"Leo.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Sagittarius and Aries as their sign.\n";
					}
					break;
			case 8: if(date<=22){
						cout<<"Leo.\n";
						if((23-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Virgo.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Sagittarius and Aries as their sign.\n";
						}
					else
					{
						cout<<"Virgo.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Capricorn and Taurus as their sign.\n";
					}	
					break;
			case 9: if(date<=22){
						cout<<"Virgo.\n";
						if((23-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Libra.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Capricorn and Taurus as their sign.\n";
						}
					else
					{
						cout<<"Libra.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Aquaris and Gemini as their sign.\n";
					}
					break;
			case 10: if(date<=22){
						cout<<"Libra.\n";
						if((23-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Scorpio.\n";
						cout<<"You belong to the Air element and you are comfortable with people having Aquaris and Gemini as their sign.\n";
						}
					else
					{
						cout<<"Scorpio.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Pisces and Cancer as their sign.\n";
					}
					break;
			case 11: if(date<=21){
						cout<<"Scorpio.\n";
						if((22-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Sagittarius.\n";
						cout<<"You belong to the Water element and you are comfortable with people having Pisces and Cancer as their sign.\n";
						}
					else
					{
						cout<<"Sagittarius.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Leo and Aries as their sign.\n";
					}
					break;
			case 12: if(date<=21){
						cout<<"Sagittarius.\n";
						if((22-date)<=2)
							cout<<"Your birthday is on a cusp and the nearest horoscope is Capricorn.\n";
						cout<<"You belong to the Fire element and you are comfortable with people having Leo and Aries as their sign.\n";
						}
					else
					{
						cout<<"Capricorn.\n";
						cout<<"You belong to the Earth element and you are comfortable with people having Taurus and Virgo as their sign.\n";
					}
					break;
			default: cout<<"Please enter a valid month.\n";
		};
		cout<<"Wanna try again? press y to continue.\n";
		cin>>ch;
	}while(ch=='y'|| ch=='Y');
	
	return 0;
}
