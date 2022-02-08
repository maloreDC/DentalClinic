#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

char input;
int counter=0, countertwo=0, option=0;				// variables
string name, email, cont;
float total=0 , payment=0, change=0;

void firstpage();
void choiceone();
void choicetwo();
void choicethree();
void choicefour();						// functions
void choicefive();
void choicesix();
void transaction();


int main(){
	
		do{
		cout << "\n";
	    cout << "\n";
	    cout << "\n";
		cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\t\t\t\t\t*********************************************** \n";
		cout << "\t\t\t\t\t*        $$$$$$$$$$$$$$$$$$$$$$$              * \n";	        
		cout << "\t\t\t\t\t*       $$$$___$$$$$$$$$$$$$$$$$$$$$          * \n";			         
		cout << "\t\t\t\t\t*      $$$$______$$$$$$$$$$$$$$$$$$$$$$       * \n";			          
		cout << "\t\t\t\t\t*    $$$$$________$$$$$$$$$$$$$$$$$$$$$$$     * \n";				     
	    cout << "\t\t\t\t\t*   $$$$$__________$$$$$$$$$$$$$$$$$$$$$$$    * \n";				   
		cout << "\t\t\t\t\t*  $$$$$____________$$$$$$$$$$$$$$$$$$$$$$$   * \n";				   
		cout << "\t\t\t\t\t* $$$$$$____________$$$$$$$$$$$$$$$$$$$$$$$$  * \n";				  
		cout << "\t\t\t\t\t* $$$$$$___________$$$$$$$$$___________$$$$$$ * \n";					  
		cout << "\t\t\t\t\t* $$…$$$$$_________$$$_$$$_$$$_________$$$$$$ * \n";				  
		cout << "\t\t\t\t\t* $$$$$$$$______$$$$___$___$$$$______$$$$$$$$ * \n";					  
		cout << "\t\t\t\t\t* $$$$$$$$______$$$$___$___$$$$______$$$$$$$$ * \n";					  
		cout << "\t\t\t\t\t* $$$_$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$_o$$ * \n";			//Front page			 
		cout << "\t\t\t\t\t* $$$__$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$__$$$ * \n";					  
		cout << "\t\t\t\t\t*  $$$__$’$$$$$$$$$$$$$$$$$$$$$$$$$$$$$__o$$$ * \n";					   
		cout << "\t\t\t\t\t*  ’$$o__$$__$$’$$$$$$$$$$$$$$’$$__$$_____o$$ * \n";					   
		cout << "\t\t\t\t\t*    $$o$____$$__’$$’$$’$$’__$$______$___o$$  * \n";				     
		cout << "\t\t\t\t\t*     $$$o$__$____$$___$$___$$_____$$__o$     * \n";					      
		cout << "\t\t\t\t\t*      ’$$$$O$____$$____$$___$$ ____o$$$      * \n";				        
		cout << "\t\t\t\t\t*         ’$$o$$___$$___$$___$$___o$$$        * \n";			           
		cout << "\t\t\t\t\t*           ’$$$$o$o$o$o$o$o$o$o$$$$          * \n";			             
        cout << "\t\t\t\t\t*                                             * \n";
	    cout << "\t\t\t\t\t*                                             * \n";
		cout << "\t\t\t\t\t*  Welcome to I-Smile Dental Clinic           * \n";
		cout << "\t\t\t\t\t*  Press(1) to view our services offered      * \n";
		cout << "\t\t\t\t\t*  Press(0) to exit                           * \n";
		cout << "\t\t\t\t\t*                                             * \n";
		cout << "\t\t\t\t\t*                                             * \n";
		cout << "\t\t\t\t\t*********************************************** \n";
	    input = getche();
		system("cls");
		}
		while (input != '1' && input != '0');  // it will loop until you type the desired input
	
		
		if (input == '1'){
			firstpage();
		}
    
    else {
    	exit (0);
	}
}

void firstpage(){
		
	firstpage:
	do
	{
		cout << "\n";
	    cout << "\n";
	    cout << "\n";
		cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\n";
	    cout << "\t\t\t\t********************************************************** \n";
	    cout << "\t\t\t\t*                                                        * \n";
		cout << "\t\t\t\t*  Hello Customer here are the list of our Services      * \n";
		cout << "\t\t\t\t*  Press(1) General Services                             * \n";
		cout << "\t\t\t\t*  Press(2) Pedriatic Dentistry                          * \n";
		cout << "\t\t\t\t*  Press(3) Cosmetic Dentistry                           * \n";			//Services offered
		cout << "\t\t\t\t*  Press(4) Missing a Tooth?                             * \n";
		cout << "\t\t\t\t*  Press(5) Staighten your Teeth                         * \n";
		cout << "\t\t\t\t*  Press(6) In Pain?                                     * \n";
		cout << "\t\t\t\t*  ------------------------------                        * \n";
		cout << "\t\t\t\t*  Press(0) To go back                                   * \n";
		cout << "\t\t\t\t*                                                        * \n";
		cout << "\t\t\t\t********************************************************** \n";
		input = getche();
		system("cls");
		
		if (input == '1'){
			choiceone();
		}
		else if(input == '2'){
			choicetwo();
		}
		else if(input == '3'){
			choicethree();
		}
		else if(input == '4'){
			choicefour();
		}								//Function calls
		else if(input == '5'){
			choicefive();
		}
		else if(input == '6'){
			choicesix();
		}
		else if (input == '0'){
			main();
		}
		
		else{
			goto firstpage;
		}
	}
	while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '0');
}

void choiceone(){
	
			choiceone:
		  do{
		  	cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\t\t\t\t**********************************************************\n";
		    cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t*  General Services:                                     *\n";
			cout << "\t\t\t\t*  Press(1) Dental Cleaning                              *\n";
			cout << "\t\t\t\t*  Press(2) Flouride Treatment                           *\n";			// First set of Sub-Choices
			cout << "\t\t\t\t*  Press(3) Tooth Filling                                *\n";
			cout << "\t\t\t\t*--------------------------------------------------------*\n";
			cout << "\t\t\t\t*  Press(0) to back                                      *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
			
			if (input == '1'){
				
				dentalcleaning:
				do{
				 cout << "\n";
				 cout << "\n";
			     cout << "\n";
				 cout << "\n";
			     cout << "\n";
			     cout << "\n";
			     cout << "\n";
			     cout << "\n";
			     cout << "\n";
			     cout << "\t\t\t\t**********************************************************\n";
			     cout << "\t\t\t\t*                                                        * \n";
			   	 cout << "\t\t\t\t*  Dental Cleaning                                       *\n";
				 cout << "\t\t\t\t*  Benefits:                                             *\n";
				 cout << "\t\t\t\t*  Healthy mouth, healthy body.                          *\n";
				 cout << "\t\t\t\t*  Stay cavity-free.                                     *\n ";
				 cout << "\t\t\t\t*  Insure your mouth.                                    *\n ";
				 cout << "\t\t\t\t*  Fresh and pleasant breath.                            *\n ";
				 cout << "\t\t\t\t*  Shiny and bright.                                     *\n ";
				 cout << "\t\t\t\t*  It will cost you 750php                               *\n";
				 cout << "\t\t\t\t*--------------------------------------------------------* \n";
				 cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				 cout << "\t\t\t\t*--------------------------------------------------------*\n";
				 cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				 cout << "\t\t\t\t*                                                        * \n";
				 cout << "\t\t\t\t**********************************************************\n";
				 input = getche();
				 system("cls");
				 
				 if (input == '1'){
				 	counter = 1;					//Transaction call and assign value for counter works the same for the rest of sub choices
				 	transaction();
				 }
				 
				 else if(input == '0'){
				 	choiceone();
				 }
				 
				 else{
				 	goto dentalcleaning;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '2'){
				
				flouridetreatment:
				do
				{
				cout << "\n";
				cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t**********************************************************\n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Flouride Treatment                                    *\n";
				cout << "\t\t\t\t*  Benefits                                              *\n ";
				cout << "\t\t\t\t*  Prevention is always better than cure.                *\n ";
				cout << "\t\t\t\t*  Dont say hello to tooth decay.                        *\n ";
				cout << "\t\t\t\t*  Knowledge is power.                                   *\n ";
				cout << "\t\t\t\t*  Strengthen your teeth.                                *\n ";
				cout << "\t\t\t\t*  Benefits all ages.                                    *\n";
				cout << "\t\t\t\t*  It will cost you 1000php                              *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction                    *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back                                   *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t**********************************************************\n";
				input = getche();
				system("cls");
				
				if (input == '1'){
					counter = 2;
					transaction();
				 }
				 
				 else if(input == '0'){
				 	choiceone();
				 }
				 
				 else{
				 	goto flouridetreatment;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '3'){
				
				toothfilling:
				do{
				cout << "\n";
				cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t**********************************************************\n";
				cout << "\t\t\t\t*                                                        * \n";	
				cout << "\t\t\t\t*  Tooth Filling                                         *\n";
				cout << "\t\t\t\t*  Benefits                                              *\n ";
				cout << "\t\t\t\t*  You get back what you once had.                       *\n ";
				cout << "\t\t\t\t*  Say goodbye to damage.                                *\n ";
				cout << "\t\t\t\t*  Take back what time has taken from you.               *\n";
				cout << "\t\t\t\t*  of healthy teeth.                                     *\n ";
				cout << "\t\t\t\t*  Look natural.                                         *\n ";
				cout << "\t\t\t\t*  If you can repair it, then why not now?               *\n";
				cout << "\t\t\t\t*  It will cost you 850php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction                    *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back                                   *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t**********************************************************\n";	
				input = getche();
				system("cls");
				
				if (input == '1'){
					counter = 3;
					transaction();
				 }
				 
				 else if(input == '0'){
				 	choiceone();
				 }
				 
				 else{
				 	goto toothfilling;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				goto choiceone;
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}

void choicetwo(){
	
	 	 do{
	 	 	cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\t\t\t\t********************************************************** \n";
		    cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t*  Pedriatic Dentistry:                                  *\n";
			cout << "\t\t\t\t*  Press(1) The First Appointment                        *\n";
			cout << "\t\t\t\t*  Press(2) Ouchy Tooth                                  *\n";			// Second set of Sub-Choices
			cout << "\t\t\t\t*  Press(3) Special Needs Dentistry                      *\n";
			cout << "\t\t\t\t*--------------------------------------------------------* \n";
			cout << "\t\t\t\t*  Press(0) to back                                      *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
		
			if (input == '1'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  The First Appointment                                 *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Cut on dental costs.                                  *\n ";
				cout << "\t\t\t\t*  Dentist is a child’s friend.                          *\n ";
				cout << "\t\t\t\t*  Stop the oral problems from their tracks.             *\n ";
				cout << "\t\t\t\t*  Protect your pocket too.                              *\n ";
				cout << "\t\t\t\t*  Learn a daily dental routine.                         *\n ";
				cout << "\t\t\t\t*  Proper care for your tot.                             *\n";
				cout << "\t\t\t\t*  It will cost you 500php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 4;
					transaction();
				}
				
				else {
					choicetwo();
				}
			}
			
			else if (input == '2')
			{
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Ouchy Tooth                                           *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Learning the cause of the Ouchie Tooth                *\n ";
				cout << "\t\t\t\t*  Thorough Testing                                      *\n ";
				cout << "\t\t\t\t*  Education in Preventive Dentistry                     *\n ";
				cout << "\t\t\t\t*  Proper Treatment                                      *\n";
				cout << "\t\t\t\t*  It will cost you 600php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 5;
					transaction();
				}
				
				else {
					choicetwo();
				}
			}
			
			else if (input == '3'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*   Special Needs Dentistry                              *\n";
				cout << "\t\t\t\t*   Benefits:                                            *\n";
				cout << "\t\t\t\t*   Proper Care.                                         *\n ";
				cout << "\t\t\t\t*   Helping Hands.                                       *\n ";
				cout << "\t\t\t\t*   Specialized Treatment.                               *\n ";
				cout << "\t\t\t\t*   More Time.                                           *\n ";
				cout << "\t\t\t\t*   Long Term Benefits.                                  *\n";
				cout << "\t\t\t\t*  It will cost you 700php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*   Press(1) to proceed to transaction.                  *\n";
				cout << "\t\t\t\t*------------------------------------------------------- * \n";
				cout << "\t\t\t\t*   Press(0) to go back.                                 *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 6;
					transaction();
				}
				
				else {
					choicetwo();
				}
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				 choicetwo();
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}

void choicethree(){
		choicethree:
		  do{
		  	cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\t\t\t\t********************************************************** \n";
		    cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t*  Cosmetic Dentistry:                                   *\n";
			cout << "\t\t\t\t*  Press(1) Gingivoplasty                                *\n";
			cout << "\t\t\t\t*  Press(2) Veneers                                      *\n";		// Third set of Sub-Choices
			cout << "\t\t\t\t*  Press(3) Teeth Whitening                              *\n";
			cout << "\t\t\t\t*  Press(4) Dental Crowns                                *\n";
			cout << "\t\t\t\t*--------------------------                              *\n";
			cout << "\t\t\t\t*  Press(0) to back                                      *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
			
			if (input == '1'){
					gingivoplasty:
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
			   	cout << "\t\t\t\t*  Gingivoplasty                                         *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Reshape your smile.                                   *\n ";
				cout << "\t\t\t\t*  Gummy-free.                                           *\n ";
				cout << "\t\t\t\t*  Regain your self confidence.                          *\n ";
				cout << "\t\t\t\t*  Be camera-friendly.                                   *\n ";
				cout << "\t\t\t\t*  Say goodbye to gum diseases.                          *\n";
				cout << "\t\t\t\t*  It will cost you 250php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				cout << ": ";
				 input = getche();
				 system("cls");
				 
				 if (input == '1'){
				 	counter = 7;
				 	transaction();
				 }
				 
				 else if(input == '0'){
				 	choicethree();
				 }
				 
				 else{
				 	goto gingivoplasty;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '2'){
				
				veneers:
				do
				{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
			    cout << "\t\t\t\t*  Veneers                                               *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Reveal that smile.                                    *\n ";
				cout << "\t\t\t\t*  Teeth at their best.                                  *\n ";
				cout << "\t\t\t\t*  Enjoy your tea and coffee.                            *\n ";
				cout << "\t\t\t\t*  Show it off right away.                               *\n ";
				cout << "\t\t\t\t*  Just like normal teeth.                               *\n";
				cout << "\t\t\t\t*  It will cost you 350php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				
				if (input == '1'){
					counter = 8;
					transaction();
				 }
				 
				 else if(input == '0'){
				 	choicethree();
				 }
				 
				 else{
				 	goto veneers;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '3'){
				
				teethwhitening:
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Teeth Whitening                                       *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Look up to 10 years younger.                          *\n ";
				cout << "\t\t\t\t*  Make them want to get closer.                         *\n ";
				cout << "\t\t\t\t*  Look your very best in a while.                       *\n ";
				cout << "\t\t\t\t*  Stand out.                                            *\n";
				cout << "\t\t\t\t*  Look clean and fresh.                                 *\n ";
				cout << "\t\t\t\t*  Look great for photos.                                *\n ";
				cout << "\t\t\t\t*  No more shy smiles.                                   *\n";
				cout << "\t\t\t\t*  It will cost you 450php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				
				if (input == '1'){
					counter = 9;
					transaction();
				 }
				 
				 else if(input == '0'){
				 	choicethree();
				 }
				 
				 else{
				 	goto teethwhitening;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '4'){
				
				dentalcrowns:
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
			    cout << "\t\t\t\t*  Dental Crowns                                         *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Relieves uncomfortable symptoms.                      *\n ";
				cout << "\t\t\t\t*  Custom made to suit your smile.                       *\n ";
				cout << "\t\t\t\t*  Enhance appearance of teeth.                          *\n ";
				cout << "\t\t\t\t*  Typically lasts for many years.                       *\n";
				cout << "\t\t\t\t*  It will cost you 550php                               *\n";
				cout << "\t\t\t\t*  ------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*  ------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				cout << ": ";
				input = getche();
				system("cls");
				
				if (input == '1'){
					counter = 10;
					transaction();
				 }
				 
				 else if(input == '0'){
				 	choicethree();
				 }
				 
				 else{
				 	goto dentalcrowns;
				 }
				 
				}
				while (input != '1' && input != '0');
				
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				goto choicethree;
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}

void choicefour(){
	 do{
	 		cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\t\t\t\t********************************************************** \n";
		    cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t*  Missing A Tooth?:                                     *\n";
			cout << "\t\t\t\t*  Pres(1) Dental Implants                               *\n";
			cout << "\t\t\t\t*  Pres(2) Fixed Bridge                                  *\n";		// Fourth Set of sub-choices
			cout << "\t\t\t\t*  Pres(3) Dentures                                      *\n";
			cout << "\t\t\t\t*--------------------------------------------------------*\n";
			cout << "\t\t\t\t*  Press(0) to back                                      *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
		
			if (input == '1'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Dental Implants                                       *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  There is something new.                               *\n ";
				cout << "\t\t\t\t*  Smile all the way.                                    *\n ";
				cout << "\t\t\t\t*  Speak with confidence.                                *\n ";
				cout << "\t\t\t\t*  Build more self-esteem.                               *\n ";
				cout << "\t\t\t\t*  Live life to the fullest.                             *\n ";
				cout << "\t\t\t\t*  Enjoy eating.                                         *\n ";
				cout << "\t\t\t\t*  It is convenient, indeed.                             *\n";
				cout << "\t\t\t\t*  It will cost you 650php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 11;
					transaction();
				}
				
				else {
					choicefour();
				}
			}
			
			else if (input == '2')
			{
				do{
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
		    	cout << "\t\t\t\t*  Fixed Bridge                                          *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Maintain the beautiful shape of your face.            *\n ";
				cout << "\t\t\t\t*  Long-lasting.                                         *\n ";
				cout << "\t\t\t\t*  Brush like a pro.                                     *\n ";
				cout << "\t\t\t\t*  Everything else will stay in place.                   *\n ";
				cout << "\t\t\t\t*  Restore mouth functions like before.                  *\n";
				cout << "\t\t\t\t*  It will cost you 150php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				cout << ": ";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 12;
					transaction();
				}
				
				else {
					choicefour();
				}
			}
			
			else if (input == '3'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Dentures                                              *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Full and complete function.                           *\n ";
				cout << "\t\t\t\t*  Speak and socialize freely.                           *\n ";
				cout << "\t\t\t\t*  Reliable and long-lasting companion.                  *\n ";
				cout << "\t\t\t\t*  Efficient and inexpensive.                            *\n ";
				cout << "\t\t\t\t*  Made for you.                                         *\n";
				cout << "\t\t\t\t*  It will cost you 330php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*------------------------------------------------------- * \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				cout << ": ";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 13;
					transaction();
				}
				
				else {
					choicefour();
				}
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				 choicefour();
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}

void choicefive(){
	 do{
	        cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\t\t\t\t********************************************************** \n";
		    cout << "\t\t\t\t*                                                        * \n";  
			cout << "\t\t\t\t*   Staighten your Teeth:                                *\n";
			cout << "\t\t\t\t*   Press(1) Ceramic Braces                              *\n";
			cout << "\t\t\t\t*   Press(2) Traditional Metal Braces                    *\n";
			cout << "\t\t\t\t*   Press(3) Invisalign                                  *\n";		// Fifth Set of sub-choices
			cout << "\t\t\t\t*--------------------------------------------------------* \n";
			cout << "\t\t\t\t*   Press(0) to back                                     *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
		
			if (input == '1'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Ceramic Braces                                        *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Beautiful repair.                                     *\n ";
				cout << "\t\t\t\t*  Get perfect teeth quick.                              *\n ";
				cout << "\t\t\t\t*  Eat and rest easy.                                    *\n ";
				cout << "\t\t\t\t*  Healthier head.                                       *\n ";
				cout << "\t\t\t\t*  Smile comfortably.                                    *\n";
				cout << "\t\t\t\t*  It will cost you 950php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 14;
					transaction();
				}
				
				else {
					choicefive();
				}
			}
			
			else if (input == '2')
			{
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Traditional Metal Braces                              *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Protected and prevented.                              *\n ";
				cout << "\t\t\t\t*  Bye bye, periodontitis.                               *\n ";
				cout << "\t\t\t\t*  Be gap-free.                                          *\n ";
				cout << "\t\t\t\t*  Conveniently positioned teeth.                        *\n ";
				cout << "\t\t\t\t*  Strain no more.                                       *\n ";
				cout << "\t\t\t\t*  Enjoy your meals.                                     *\n";
				cout << "\t\t\t\t*  It will cost you 880php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 15;
					transaction();
				}
				
				else {
					choicefive();
				}
			}
			
			else if (input == '3'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
			    cout << "\t\t\t\t*  Invisalign                                            *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Virtually invisible.                                  *\n ";
				cout << "\t\t\t\t*  Comfortable.                                          *\n ";
				cout << "\t\t\t\t*  Removable.                                            *\n ";
				cout << "\t\t\t\t*  Fast Treatment.                                       *\n";
				cout << "\t\t\t\t*  It will cost you 920php                               *\n";
				cout << "\t\t\t\t*------------------------------------------------------- * \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 16;
					transaction();
				}
				
				else {
					choicefive();
				}
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				 choicefive();
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}

void choicesix(){
	     do{
	     	cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
		    cout << "\n";
			cout << "\t\t\t\t********************************************************** \n";
		    cout << "\t\t\t\t*                                                        * \n"; 
			cout << "\t\t\t\t*  In Pain?:                                             *\n";
			cout << "\t\t\t\t*  Press(1) Root Canal Treatment                         *\n";
			cout << "\t\t\t\t*  Press(2) Wisdom Tooth Removal                         *\n";		// Sixth Set of sub-choices
			cout << "\t\t\t\t*  Press(3) Tooth Extraction                             *\n";
			cout << "\t\t\t\t*---------------------------                             * \n";
			cout << "\t\t\t\t*  Press(0) to back                                      *\n";
			cout << "\t\t\t\t*                                                        * \n";
			cout << "\t\t\t\t********************************************************** \n";
			input = getche();
			system("cls");
		
			if (input == '1'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Root Canal Treatment                                  *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Save your teeth.                                      *\n ";
				cout << "\t\t\t\t*  Keep on smiling.                                      *\n ";
				cout << "\t\t\t\t*  Say goodbye to discomfort and pain.                   *\n ";
				cout << "\t\t\t\t*  Be confident.                                         *\n ";
				cout << "\t\t\t\t*  Worry no more.                                        *\n ";
				cout << "\t\t\t\t*  Life goes on.                                         *\n";
				cout << "\t\t\t\t*  It will cost you 240php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 17;
					transaction();
				}
				
				else {
					choicesix();
				}
			}
			
			else if (input == '2'){
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
			    cout << "\t\t\t\t*  Wisdom Tooth Removal                                  *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Dentists are your tooth fairy.                        *\n ";
				cout << "\t\t\t\t*  Stop holding on.                                      *\n ";
				cout << "\t\t\t\t*  Growing up is not always a good thing.                *\n ";
				cout << "\t\t\t\t*  Less is more.                                         *\n ";
				cout << "\t\t\t\t*  Prevent future tooth decays and gum diseases.         *\n";
				cout << "\t\t\t\t*  It will cost you 290php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*------------------------------------------------------- * \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 18;
					transaction();
				}
				
				else {
					choicesix();
				}
			}
			
			else if (input == '3'){
				
				do{
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
			    cout << "\n";
				cout << "\t\t\t\t********************************************************** \n";
			    cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t*  Tooth Extraction                                      *\n";
				cout << "\t\t\t\t*  Benefits:                                             *\n";
				cout << "\t\t\t\t*  Soothe your mouth.                                    *\n ";
				cout << "\t\t\t\t*  Protect the rest of the teeth.                        *\n ";
				cout << "\t\t\t\t*  Create a clean slate.                                 *\n ";
				cout << "\t\t\t\t*  Makes for better alignment.                           *\n ";
				cout << "\t\t\t\t*  Saves you from future expenses.                       *\n";
				cout << "\t\t\t\t*  It will cost you 130php                               *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(1) to proceed to transaction.                   *\n";
				cout << "\t\t\t\t*--------------------------------------------------------* \n";
				cout << "\t\t\t\t*  Press(0) to go back.                                  *\n";
				cout << "\t\t\t\t*                                                        * \n";
				cout << "\t\t\t\t********************************************************** \n";
				input = getche();
				system("cls");
				}
				while (input != '1' && input != '0');
				
				if (input == '1'){
					counter = 19;
					transaction();
				}
				
				else {
					choicesix();
				}
			}
			
			else if(input == '0'){
				firstpage();
			}
			
			else{
				 choicesix();
			}
			
			}
			while (input != '1' && input != '2' && input != '3' && input != '0');
}


void transaction(){


				if (counter == 1){
					total = total + 750;
				}	
			    else if(counter == 2){
					total = total + 1000;
				}
			    else if(counter == 3){
					total = total + 850;
				}	
				else if(counter == 4){
					total = total + 500;
				}
				else if(counter == 5){
					total = total + 600;
				}
				else if(counter == 6){
					total = total + 700;
				}
				else if(counter == 7){
					total = total + 250;
				}
				else if(counter == 8){				//Counter Id will determine the price of the chosen service
					total = total + 350;
				}
				else if(counter == 9){
					total = total + 450;
				}
				else if(counter == 10){
					total = total + 550;		
				}
				else if(counter == 11){
					total = total + 650;
				}
				else if(counter == 12){
					total = total + 150;
				}
				else if(counter == 13){
					total = total + 330;
				}
				else if(counter == 14){
					total = total + 950;
				}
				else if(counter == 15){
					total = total + 880;
				}
				else if(counter == 16){
					total = total + 920;
				}
				else if(counter == 17){
					total = total + 240;
				}
				else if(counter == 18){
					total = total + 290;
				}
				else if(counter == 19){
					total = total + 130;
				}
				
				if (countertwo == 1){
					total = total - 750;
				}	
			    else if(countertwo == 2){
					total = total - 1000;
				}
			    else if(countertwo == 3){
					total = total - 850;
				}	
				else if(countertwo == 4){
					total = total - 500;
				}
				else if(countertwo == 5){
					total = total - 600;
				}
				else if(countertwo == 6){
					total = total - 700;
				}
				else if(countertwo == 7){
					total = total - 250;
				}
				else if(countertwo == 8){
					total = total - 350;
				}
				else if(countertwo == 9){
					total = total - 450;
				}
				else if(countertwo == 10){
					total = total - 550;
				}
				else if(countertwo == 11){
					total = total - 650;
				}
				else if(countertwo == 12){
					total = total - 150;
				}
				else if(countertwo == 13){
					total = total - 330;
				}
				else if(countertwo == 14){
					total = total - 950;
				}
				else if(countertwo == 15){
					total = total - 880;
				}
				else if(countertwo == 16){
					total = total - 920;
				}
				else if(countertwo == 17){
					total = total - 240;
				}
				else if(countertwo == 18){
					total = total - 290;
				}
				else if(countertwo == 19){
					total = total - 130;
				}
			
					do{
				      	  paymentonethree:
				      	  cout << "\n";
						  cout << "\n";
						  cout << "\n";
						  cout << "\n";
						  cout << "\n";
				          cout << "\n";
						  cout << "\n";
						  cout << "\n";
						  cout << "\n";
						  cout << "\t\t\t\t********************************************************** \n";
						  cout << "\t\t\t\t*                                                        * \n"; 
						  cout << "\t\t\t\t*  Press(1) to avail more                                *\n";
						  cout << "\t\t\t\t*  Press(2) to end transaction                           *\n";		//First transaction part
						  cout << "\t\t\t\t*  Press(0) to cancel transaction                        *\n";
						  cout << "\t\t\t\t*                                                        * \n";
						  cout << "\t\t\t\t********************************************************** \n";
						  input = getche();
						  system("cls");
					  }
						  while (input != '1' && input != '2' && input != '3' && input != '0');

						  if (input == '1'){
						  	firstpage();
						  }
						  
						  else if (input == '2'){ 
							 cout << "Enter Name: ";
				             getline(cin, name);
			                 cout << "Enter Email Address: ";
			                 getline(cin, email);					// Gets info from the user
			                 cout << "Enter Contact Number: ";
			                 getline(cin, cont);
			                 system("cls");	
			                 
						  	do
							      {
							      	
							      	do{
							            cout << "Total Price is " << total << endl;
							            cout << "Enter Payment: ";
							            do{
										
							            cin >> payment;
							            
							            cin.clear();
							            cin.ignore(1000, '\n');
							            
										}while(!cin);								// Payment Part
							            system("cls");
									  }
							     while(payment < 0);
							      if (payment < total)
							      {
							                        cout << "Insufficient amount" << endl;
							                        cout << "Enter Again ";					                
							      }
							                        else 
							                            {
							                                change = payment - total;
															option = 1;     
							                            }
							       }
							       
                            while (option != 1);
                        ;
                        
                                   cout << "\n";
								   cout << "\n";
								   cout << "\n";
								   cout << "\n";
								   cout << "\n";
						           cout << "\n";
								   cout << "\n";
								   cout << "\n";
								   cout << "\n";
								   cout << "\t\t\t\t********************************************************** \n";
                                   cout << "\t\t\t\t   Name: " << name <<endl;
							       cout << "\t\t\t\t   Email: " << email <<endl;
							       cout << "\t\t\t\t   Contact Number: " << cont <<endl;
							       cout << "\t\t\t\t   Total amount: " << total <<endl;							// Last [art of the program works like a reciept
							       cout << "\t\t\t\t   Cash Recieved: " << payment <<endl;
							       cout << "\t\t\t\t   Change: " << change << endl;
						  	       cout << "\t\t\t\t\t\t   Thank you come again"<< endl;
						  	       cout << "\t\t\t\t********************************************************** \n";
						  	       total = 0;
						  	       option = 0;					//resets value to 0 for some of the variables
								   system("pause");
		                           cin.get();
		                           system("cls");
		                           main();
                    }
                    
                    else{
                    	total = 0;
                    	firstpage();
					}
	
}
