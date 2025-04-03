// MAIN SYSTEM //
/*
COMMENTS
Tester/s:
- Hydro (aka my brother)
- Saf (aka kielskii, aka my sister)
*/

// IMPORTS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// FILES
/*
#include "Access.c"
#include "Menu.c"
#include "Options_Order.c"
*/

int main() {
	// DECLARING VARIABLES
	// Access
	char username[20];
	char password[20];
	int access = 0;
	// Menu
	char order[1];
	int display_menu = 0;
	int display_category = 0;
	// Options-Order
	int cate_pick;
	int pick = 0;
	int chosen = 0;
	int choose;
	int quantity;
	int total = 0;
	int N = 0;
	int YN = 0;
	char call[5];
	int count = 0;
	// Receipt Storages
	char ur_order[50][50];
	int ur_quantity[50];
	int ur_price[50];
	int cash, change;
	int proper_cash = 1;
	int discount;
	// Retry
	int retry;
	int error;
								
	// USERNAME STORAGE
	char user[5][20] = {
		"lasalle",
		"Hydro",
		"kiellskii",
		"Vaseball",
		"1"
	};
	// PASSWORD STORAGE
	char pass[5][20] = {
		"benildean",
		"HowToMakeTix&Robux",
		"faqmalife_fml",
		"Omega_27",
		"1"
	};
	// CATEGORY STORAGE
	char category_1[6][30] = {
		"[1] Writing Materials	",
		"[2] Paper Supplies	",
		"[3] Coloring Supplies	",
		"[4] Office Supplies	",
		"[5] Filing Supplies	",
		"[6] Arts and Crafts	"
	};
	char category_2[6][30] = {
		"[7] Audio/Visual Accessories",
		"[8] Computer Accessories	",
		"[9] Home & Office Essentials",
		"[10] Office Equipment		",
		"--							",
		"--							"
	};
	char category_3[6][30] = {
		"[11] Gifts				",
		"[12] Occasion Supplies	",
		"[13] Seasonal Supplies	",
		"--						",
		"--						",
		"--						"
	};
	// MENU STORAGE
	char num_menu[22][20] = {
		"P1",
		"P2",
		"P3",
		"P4",
		"P5",
		"P6",
		"P7",
		"P8",
		"P9",
		"P10",
		"P11",
		"P12",
		"P13",
		"P14",
		"P15",
		"P16",
		"P17",
		"P18",
		"====",
		"R1",
		"R2",
		"R3"
	};
	char menu[22][60] = {
		"Lamy Safari Fine Ballpoint Pen Terra Red 241			",
		"Lamy Safari Fine Ballpoint Pen Red 216				",
		"Lamy Safari Fine Ballpoint Pen Blue 214				",
		"Lamy Logo M+ Fine Ballpoint Pen Black Matt 204			",
		"Lamy Logo M+ Fine Ballpoint Pen Blackberry Matt 204		",
		"Lamy Logo M+ Fine Ballpoint Pen Lime Matt 204			",
		"Lamy Logo M+ Fine Ballpoint Pen Night Blue 204			",
		"Lamy Logo M+ Fine Ballpoint Pen Rose 204			",
		"Lamy Logo M+ Fine Ballpoint Pen White 204			",
		"Lamy Logo M+ Fine Ballpoint Pen Blue 204			",
		"Lamy Logo M+ Fine Ballpoint Pen Red 204				",
		"Lamy Safari Fine Ballpoint Pen Savannah Green 241		",
		"Lamy Safari Fine Rollerball Pen Red 316				",
		"Lamy Safari Fountain Pen Medium Nib Mango 21			",
		"Lamy Safari Fountain Pen Medium Nib Red 16			",
		"Pilot Gel Pen Regular BLGM4 Blue 0.4				",
		"Pilot Gel Pen Regular BLGM4 Black 0.4				",
		"Pilot Gel Pen Regular BLGM4 Green 0.4				",
		"REFILLS ======							",
		"Pilot Coleto Gel Pen Ink Refill 0.4mm Violet			",
		"Pilot Coleto Gel Pen Ink Refill 0.4mm Green			",
		"Pilot Coleto Gel Pen Ink Refill 0.5mm Blue Black		"
	};
	int price_menu[22] = {
		899,
		899,
		899,
		569,
		569,
		569,
		569,
		569,
		569,
		569,
		569,
		899,
		1499,
		1499,
		1499,
		51,
		51,
		51,
		0,
		51,
		51,
		51
	};
	int stocks[22] = {
		10,
		10,
		10,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		20,
		20,
		20,
		0,
		7,
		8,
		9
	};
	
	// == ENHANCED SECURITY AND ANTI-FRAUD PROTECTION ==
	// USERNAME ASK
	while (!access){
		printf("\nUSERNAME:\n");
		scanf("%s", &username);
		printf("\nPASSWORD:\n");
		scanf("%s", &password);
		
		// CHECKING USERNAME
		for (int i=0; i<5; i++) { //iterates thru the array of users
			// USERNAME + PASSWORD IDENTIFICATION
			if (strcmp(username, user[i]) == 0 && strcmp(password, pass[i]) == 0) {
				access = 1;
			}
		}
		
		// ACCESS GRANT OR DECLINE
		if (access == 1) {
			printf("\n== Sign-in confirmed! Welcome back, %s. ==\n", username);
			display_category = 1;
		}
		else {
			printf("\n== Invalid username or password ==\n");
		}
	}
	
	// == MENU DISPLAY ==
	// CATEGORY
	if (display_category == 1) {
		display_menu = 0;
		
		printf("\nSTATIONARY 		WORKSTATION				GIFTS & OCCASSION SUPPLIES\n");
		printf("==================================================================================");
		for (int i = 0; i < 6; i++) {
			printf("\n%s\t%s\t%s", category_1[i], category_2[i], category_3[i]);
		}
		printf("Page 1 of 5 ...");
		printf("\n\n");
		system("PAUSE");
		
		// CATEGORY PICK
		while (display_category == 1) {	
			printf("\nChoose your purchase! [Unfortunately, only Writing Materials can be accessible for the meantime. We apologize for the inconvenience.]\n>> ");
			scanf("%d", &cate_pick);
			
			// JUST MONIC-- I MEAN JUST 'WRITING MATERIALS'
			if (cate_pick == 1) {
				display_menu = 1;
				display_category = 0;
			}
			else {
				printf("\nSorry, that category is unavailable right now :(");
			}
		}
	}
	
	// MENU
	if (display_menu == 1) {
		printf("\n\nWRITING MATERIALS >>>");
		printf("\n==================================================================================");
		printf("\nCALL\tPENS\t\t\t\t\t\t\t\t\t\tPRICE\t\tSTOCKS\n");
		for (int i = 0; i < 22; i++) {
			printf("\n%s\t%s\t\t%d\t\t%d", num_menu[i], menu[i], price_menu[i], stocks[i]); //CHANGE
		}
		printf("\n\n");
		system("PAUSE");
		
		display_menu = 0;
	}
	
	// == OPTION DISPLAY ==
	// OPTION ASK
	printf("\n\nOPTIONS\n");
	printf("\n<< Return [1]");
	printf("\n<< Take Order [2]");
	printf("\n<< Exit Program [3]");
	
	pick = 0;
	
	while (!pick){
		printf("\n\nOPTION:\n>> ");
		if (scanf("%d", &choose) != 1) {
        	// cheskc for stdrings
	        while (getchar() != '\n');  // Discard invalid characters
	        printf("\nNot an option. Please enter a valid number.\n");
	        continue;  // Restartsjaing ...
	    }
		
		// OPTION IDENTIFY
		if (choose >= 1 && choose <= 3) {
			pick = 1;
		}
		else {
			printf("That's not an option.");
		}
		
		if (pick == 1) {
			switch (choose) {
				case 1:
					display_menu = 1;
					//printf("\n%s\t %s\t\t P %d\t", num_menu[i], menu[i], price_menu[i]);
					pick = 0; // reset for OPTIONS ASK
					break;
				case 2:
					// == ORDER ENTRY ==
					chosen = 0;
					
					while (!chosen){
						count += 1; // counts amount of times you would order?
						
						N = 0; // reset for CHOSEN ORDER
						
						printf("\n\n Enter call of your order:\n>> ");
						scanf("%s", &call);
						                   
						// ORDER IDENTIFY
						for (int i=0; i<23; i++) {
							if (strcmp(call, num_menu[i]) == 0) {
								if (stocks[i] == 0){
									printf("Sorry, that's out of stock.'");
									chosen = 0;
								}
								else {
									chosen = 1;
								}
							}
						}
						// WHEN "===="
						if (strcmp(call, "====") == 0) {
							printf("\nYZMA: Let them call the order calls, Kronk!");
							printf("\n<User has knowledge on coding and knows '====' is within array, calls it>");
							printf("\nYZMA: WRONG CALLLLllLlLl LLllLL l ----- -  - - - -");
							printf("\nYZMA: Why do we even HAVE that order call!");
							printf("\nKRONK: Beats me. Maybe they were too lazy to make a new array.");
							
							printf("\n\nOkay, no go back to picking in the menu.");
						}
						
						if (!chosen) {
							printf("\nThat purchase is not within our system.");
						}
						
						// CHOSEN ORDER
						if (chosen == 1) {
							N = 0;
							
							while (!N) {
								// INPUT QUANTITY
								printf("\n Quantity:\n>> ");
								if (scanf("%d", &quantity) != 1) {
						        	// cheskc for stdrings
							        while (getchar() != '\n');  // Discard invalid characters
							        printf("\nPlease please input a number.\n");
							        continue;  // Restartsjaing ...
							    }						
							    
							    // supposed to update the stocks
							    for (int i = 0; i < 22; i++) {
							    	if (call == num_menu[i]) {
							    		stocks[i] = stocks[i] - 1;
									}
								}
								// CALCULATIONS DYING
								int grab = 0;
								for (int i = 0; i < 22; i++) {
									if (strcmp(call, num_menu[i]) == 0) {
										grab = i;
									}
								}
								
								total += price_menu[grab] * quantity;
								
								printf("\nTOTAL: P %d", total);
								
								// MORE CALCULATIONS
								strcpy(ur_order[count - 1], menu[grab]);
								ur_quantity[count - 1] = quantity;
								ur_price[count - 1] = price_menu[grab];
								
								// CONTINUE ORDERING
								YN = 0;
								
								while (!YN) {
									printf("\n\nAdditional Order? [Y or N]\n>> ");
									scanf("%s", &order);
									
									if(!YN) {
										YN = 0;
										printf("\nPlease input 'Y' or 'N'");
									}
									
									if (strcmp(order, "Y") == 0) {
										chosen = 0;
										N = 1;
										YN = 1;
										printf("\nContinuing ...");
										display_menu = 1;
									}
									else if (strcmp(order, "N") == 0) {
										N = 1;
										YN = 1;
										printf("\n\n\nPrinting receipt ...");
										
										// == RECEIPT ==
										printf("\n== BOOKSTORE'S RECEIPT ==");
										printf("\nORDER\t\t\t\t\t\t\t\t\t\tQUANTITY\t\tPRICE");
										for (int i = 0; i < count; i++) {
											printf("\n%s\t\t%d\t\t%d", ur_order[i], ur_quantity[i], ur_price[i]);
										}
										printf("\nTOTAL == P %d", total);
										
										// DISCOUNT + CASH-CHANGE
										printf("\n\nDiscount? None [0], Senior [1] (20 Percent), Others [2] (30 Percent)\n>> ");
										if (scanf("%d", &discount) != 1) {
								        	// cheskc for stdrings
									        while (getchar() != '\n');  // Discard invalid characters
									        printf("\nInput the right number, I have to do this command for every integer input.\n");
									        continue;  // Restartsjaing ...
									    }
									    
										switch (discount) { // SWITCH CASES FOR THEM
											case 0:
												total = total;
												break;
											case 1:
												total = total - (int)(total*0.20);
												break;
											case 2:
												total = total - (int)(total*0.30);
												break;
										}
										
										// CASH SYSTEM
										proper_cash = 1;
										
										if (proper_cash = 1) {
											printf("\nEnter CASH: ");
											if (scanf("%d", &cash) != 1) {
									        	// cheskc for stdrings
										        while (getchar() != '\n');  // Discard invalid characters
										        printf("\nHello, it's 2:00 AM. Please input proper cash.'\n");
										        continue;  // Restartsjaing ...
										    }
											
											// CASH AMOUNT CHECK
											if (cash < total) {
												proper_cash = 0;
												error = 0;
												
												printf("\nSorry, your order cannot be processed due to the lack of cash needed to pruchase products.");
												while (!error) {
													printf("Would you like to continue and input a proper payment [1]? Or, return back at selection [2]?\n>> ");
													if (scanf("%d", &retry) != 1 || retry < 1 || retry > 3) {
											        	// cheskc for stdrings
												        while (getchar() != '\n');  // Discard invalid characters
												        printf("\nPlease input number, it's 3:00 AM now, my back is in pain. Originally I had this as 'Y' or 'N' but strcmp() is not working much and the code is having diffiulty reading single characters. If you don't input a number, you're going to get greeted by this long thing again of me yapping. Anyways, sorry\n");
												        continue;  // Restartsjaing ...
												    }
													
													switch (retry) {
														case 1:
															error = 1;
															proper_cash = 1;
														case 2:
															printf("Then please consider your budget :(");
															error = 1; //resetting everything
															display_category = 1;
															total = 0;
															
															for (int i = 0; i < count; i++) {
															    strcpy(ur_order[i], "");
																ur_quantity[i] = 0;  // Free each string
																ur_price[i] = 0;
														}
													}
												}
											}
											else {
												change = cash - total;
												printf("\nCHANGE: %d\nThank you for shopping at National Bookstore!", change);
												break;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 3:
					printf("\n\nExiting program ...\n");
					break;
			}
		}
	}
	
	// SYSTEMS
	getch();
	system("PAUSE");
	return 0;
}