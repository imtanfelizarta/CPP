/**************************************************************************************

	FELIZARTA, KENTH TRISTAN DATUIN.                       DFCAMCLP-IT BSIS II - 13
	DATA STRUCTURE                                                    MS. GUILLERMO
	
	PROJECT: SIMPLE GRADING SYTEM
	VERSION: 09.2020
	https://github.com/tanfelizarta/CPP/grading-system/

**************************************************************************************/

#include <windows.h>
#include <iostream>
using namespace std;

void MAINSCREEN() {
	cout << "              _____________________________________________________________________________________               " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                OOOOO   OOOO     OOO    OOOO    OOOOO   O   O   OOOOO                |              " << endl;
	cout << "             |                O       O   O   O   O   O   O     O     OO  O   O                    |              " << endl;
	cout << "             |                OOOOO   OOOO    OOOOO   O   O     O     O O O   OOOOO                |              " << endl;
	cout << "             |                O   O   O   O   O   O   O   O     O     O  OO   O   O                |              " << endl;
	cout << "             |                OOOOO   O   O   O   O   OOOO    OOOOO   O   O   OOOOO                |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                    OOOOO   O   O   OOOOO   OOOOO   OOOOO   O   O                    |              " << endl;
	cout << "             |                    O        O O    O         O     O       OO OO                    |              " << endl;
	cout << "             |                    OOOOO     O     OOOOO     O     OOOOO   O O O                    |              " << endl;
	cout << "             |                        O     O         O     O     O       O   O                    |              " << endl;
	cout << "             |                    OOOOO     O     OOOOO     O     OOOOO   O   O                    |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |               _______________     _______________     _______________               |              " << endl;
	cout << "             |              |               |   |               |   |               |              |              " << endl;
	cout << "             |              |   [1] START   |   |  [2] THEMES   |   |   [3] EXIT    |              |              " << endl;
	cout << "             |              |_______________|   |_______________|   |_______________|              |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |     TAN FELIZARTA                                                VERSION 09.2020    |              " << endl;
	cout << "             |_____________________________________________________________________________________|              " << endl;
}

void HOMESCREEN(int MAX, string STUDENTS[], int GRADES[10][8]) {
	cout << "              _____________________________________________________________________________________               " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |   ID   |   STUDENTS                                     |   AVERAGE   |   REMARKS   |              " << endl;
	cout << "             |_____________________________________________________________________________________|              " << endl;
	cout << "             |                                                                                     |              " << endl;

	int average;
	string remarks;

	for(int x = 0; x < MAX; x++) {
		for(int z = 0; z < 8; z++) {
			average = ((((GRADES[x][0] + GRADES[x][1]) / 2) * .40) + (((GRADES[x][2] + GRADES[x][3] + GRADES[x][4] + GRADES[x][5]) / 4) * .10) + (GRADES[x][6] * .50));

			if(average >= 75) {
				remarks = "PASSED";
			} else {
				remarks = "FAILED";
			}
		}

		cout << "             |   0" << x << "   |   " << STUDENTS[x];

		for(int a = 1; a <= (45 - STUDENTS[x].length()); a++) {
			cout << " ";
		}

		cout << "|     " << average << "      |   " << remarks << "    |" << endl;
	}

	cout << "             |_____________________________________________________________________________________|              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |               _______________     _______________     _______________               |              " << endl;
	cout << "             |              |               |   |               |   |               |              |              " << endl;
	cout << "             |              |  [1] SEARCH   |   |   [2] HOME    |   |   [3] EXIT    |              |              " << endl;
	cout << "             |              |_______________|   |_______________|   |_______________|              |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |_____________________________________________________________________________________|              " << endl;
}

void INFORMATION(int SEARCH, string STUDENTS[], string SUBJECTS[], int GRADES[10][8]) {
	cout << "              _____________________________________________________________________________________               " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |   ID: " << SEARCH << "      STUDENT: " << STUDENTS[SEARCH];

	for(int a = 1; a <= (45 - STUDENTS[SEARCH].length()); a++) {
		cout << " ";
	}

	cout <<    "     BSIS - 00   |              " << endl;
	cout << "             |_____________________________________________________________________________________|              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |   SUBJECTS                 GRADES                                                   |              " << endl;
	cout << "             |                                                                                     |              " << endl;

	int average;
	string remarks;

	for(int z = 0 ; z < 7; z++) {
		average = ((((GRADES[SEARCH][0] + GRADES[SEARCH][1]) / 2) * .40) + (((GRADES[SEARCH][2] + GRADES[SEARCH][3] + GRADES[SEARCH][4] + GRADES[SEARCH][5]) / 4) * .10) + (GRADES[SEARCH][6] * .50));
		cout << "             |   " << SUBJECTS[z] << "     " << GRADES[SEARCH][z] << "                                                     |              " << endl;

		if(average >= 75) {
			remarks = "PASSED";
		} else {
			remarks = "FAILED";
		}
	}

	cout << "             |                                                                                     |              " << endl;
	cout << "             |   AVERAGE                    " << average << "                                                     |              " << endl;
	cout << "             |   REMARKS                    " << remarks << "                                                 |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |     _______________     _______________     _______________     _______________     |              " << endl;
	cout << "             |    |               |   |               |   |               |   |               |    |              " << endl;
	cout << "             |    |   [1] EDIT    |   |  [2] UPDATE   |   |  [3] DELETE   |   |   [4] BACK    |    |              " << endl;
	cout << "             |    |_______________|   |_______________|   |_______________|   |_______________|    |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |_____________________________________________________________________________________|              " << endl;
}

void LOADING() {
	for(int x = 0; x < 3; x++) {
		if(x == 0) {
			cout << ".";
			Sleep(300);
		} else if(x == 1) {
			cout << ".";
			Sleep(300);
		} else if(x == 2) {
			cout << ".";
			Sleep(300);
		} else { }
	}
	
	Sleep(1000);
}

void ENGINES(int MAX, string STUDENTS[], string SUBJECTS[], int GRADES[10][8]) {
	int NEW_GRADES;
	string CHOICES, NAME;
	bool REVERSE;

	do {
		MAINSCREEN();

		cout << "             " << endl;
		cout << "             ENTER: ";
		cin >> CHOICES;

		REVERSE = false;

		if(CHOICES == "1") {
			do {
				system("cls");
				HOMESCREEN(MAX, STUDENTS, GRADES);
				cout << "             " << endl;
				cout << "             ENTER: ";
				cin >> CHOICES;

				if(CHOICES == "1") {
					int SEARCH;
					bool FOUND;

					do {
						FOUND = true;
						REVERSE = false;

						system("cls");
						HOMESCREEN(MAX, STUDENTS, GRADES);

						cout << "             " << endl;
						cout << "             ENTER ID OF STUDENT: ";
						cin >> SEARCH;

						for(int x = 0; x < 10; x++) {
							if(x == SEARCH) {
								SEARCH = x;
								FOUND = true;
								break;
							} else {
								FOUND = false;
							}

						}

						if(FOUND == false) {
							cout << "             ERROR: ID NOT FOUND! REFRESHING";

							LOADING();
							REVERSE = true;
						}
					} while(REVERSE == true);

					do {
						REVERSE = false;

						system("cls");
						INFORMATION(SEARCH, STUDENTS, SUBJECTS, GRADES);


						cout << "             " << endl;
						cout << "             ENTER: ";
						cin >> CHOICES;

						if(CHOICES == "1") {
							do {
								REVERSE = false;

								system("cls");
								INFORMATION(SEARCH, STUDENTS, SUBJECTS, GRADES);

								cout << "             " << endl;
								cout << "             CHOOSE DO YOU WANT TO EDIT:     [1] STUDENT NAME     [2] GRADES     [3] BACK" << endl;
								cout << "             ENTER: ";
								cin >> CHOICES;

								if(CHOICES == "1") {
									system("cls");
									INFORMATION(SEARCH, STUDENTS, SUBJECTS, GRADES);

									cout << "             " << endl;
									cout << "             NOTE: LASTNAME ONLY WITHOUT SPACE!" << endl;
									cout << "             ENTER NEW STUDENT NAME: ";
									cin >> NAME;

									STUDENTS[SEARCH] = NAME;

									cout << "             SUCCESS: STUDENT NAME IS EDITED. PLEASE WAIT";

									LOADING();
									CHOICES = "XX";
								} else if(CHOICES == "2") {
									for(int x = 0; x < 7; x++) {
										cout << "             ENTER NEW GRADES IN " << SUBJECTS[x] << ": ";
										cin >> NEW_GRADES;

										GRADES[SEARCH][x] = NEW_GRADES;
									}

									cout << "             SUCCESS: STUDENT GRADES IS EDITED. PLEASE WAIT";

									LOADING();
									CHOICES = "XX";
								} else if(CHOICES == "3") {
									CHOICES = "XX";
								} else {
									cout << "             ERROR: INVALID INPUT! REFRESHING";

									LOADING();
									REVERSE = true;
								}
							} while(REVERSE == true);
						} else if(CHOICES == "2") {
							system("cls");
							INFORMATION(SEARCH, STUDENTS, SUBJECTS, GRADES);

							cout << "             " << endl;
							cout << "             NOTE: LASTNAME ONLY WITHOUT SPACE!" << endl;
							cout << "             ENTER NEW STUDENT NAME: ";
							cin >> NAME;

							STUDENTS[SEARCH] = NAME;

							for(int x = 0; x < 7; x++) {
								cout << "             ENTER NEW GRADES IN " << SUBJECTS[x] << ": ";
								cin >> NEW_GRADES;

								GRADES[SEARCH][x] = NEW_GRADES;
							}

							cout << "             SUCCESS: STUDENTS AND GRADES IS UPDATED. PLEASE WAIT";

							LOADING();
							CHOICES = "XX";
						} else if(CHOICES == "3") {
							do {
								REVERSE = false;

								system("cls");
								INFORMATION(SEARCH, STUDENTS, SUBJECTS, GRADES);

								cout << "             " << endl;
								cout << "             ARE YOU SURE YOU WANT TO DELETE?     [1] YES     [2] BACK" << endl;
								cout << "             ENTER: ";

								cin >> CHOICES;

								if(CHOICES == "1") {
									for(int x = 0; x < 10; x++) {
										if(x == SEARCH) {
											for(int z = x; z < (10 - 1); z++) {
												STUDENTS[z] = STUDENTS[z + 1];

												for(int a = 0; a < (8 -1); a++) {
													GRADES[z][a] = GRADES[z + 1][a];
												}
											}
											break;
										}
									}

									MAX -= 1;

									cout << "             SUCCESS: DELETING STUDENTS PLEASE WAIT";

									LOADING();
									system("cls");
									CHOICES = "XXXX";
								} else if(CHOICES == "2") {
									CHOICES = "XXX";
								} else {
									cout << "             ERROR: INVALID INPUT! REFRESHING";

									LOADING();
									REVERSE = true;
								}
							} while(REVERSE == true);
						} else if(CHOICES == "4") {
							CHOICES = "X";
						} else {
							cout << "             ERROR: INVALID INPUT! REFRESHING";

							LOADING();
							REVERSE = true;
						}
					} while(REVERSE == true || CHOICES == "XX" || CHOICES == "XXX");
				} else if(CHOICES == "2") {
					system("cls");
					ENGINES(MAX, STUDENTS, SUBJECTS, GRADES);
				} else if(CHOICES == "3") {
					system("cls");
				} else {
					cout << "             ERROR: INVALID INPUT! REFRESHING";

					LOADING();
					CHOICES = "X";
				}
			} while(CHOICES == "X" || CHOICES == "XXXX");
		} else if(CHOICES == "2") {
			string themes;

			do {
				system("cls");
				MAINSCREEN();

				cout << "             " << endl;
				cout << "                          [1] LIGTHMODE     [2] DARKMODE     [3] SKYBLUE     [4] BACK" << endl;
				cout << "             ENTER: ";
				cin >> themes;

				if(themes == "1") {
					system("cls");
					system("Color 7A");
					REVERSE = true;
				} else if(themes == "2") {
					system("cls");
					system("Color 0A");
					REVERSE = true;
				} else if(themes == "3") {
					system("cls");
					system("Color 9F");
					REVERSE = true;
				} else if(themes == "4") {
					system("cls");
					REVERSE = true;
				} else {
					cout << "             ERROR: INVALID INPUT! REFRESHING";

					LOADING();
					themes = "X";
				}
			} while(themes == "X");
		} else if(CHOICES == "3") {
			system("cls");
		} else {
			cout << "             ERROR: INVALID INPUT! REFRESHING";

			LOADING();
			system("cls");
			REVERSE = true;
		}

	} while(REVERSE == true);
}

void LOADINGSCREEN(string STUDENTS[], string SUBJECTS[], int GRADES[10][8]) {
	cout << "              _____________________________________________________________________________________               " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                OOOOO   OOOO     OOO    OOOO    OOOOO   O   O   OOOOO                |              " << endl;
	cout << "             |                O       O   O   O   O   O   O     O     OO  O   O                    |              " << endl;
	cout << "             |                OOOOO   OOOO    OOOOO   O   O     O     O O O   OOOOO                |              " << endl;
	cout << "             |                O   O   O   O   O   O   O   O     O     O  OO   O   O                |              " << endl;
	cout << "             |                OOOOO   O   O   O   O   OOOO    OOOOO   O   O   OOOOO                |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                    OOOOO   O   O   OOOOO   OOOOO   OOOOO   O   O                    |              " << endl;
	cout << "             |                    O        O O    O         O     O       OO OO                    |              " << endl;
	cout << "             |                    OOOOO     O     OOOOO     O     OOOOO   O O O                    |              " << endl;
	cout << "             |                        O     O         O     O     O       O   O                    |              " << endl;
	cout << "             |                    OOOOO     O     OOOOO     O     OOOOO   O   O                    |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |     TAN FELIZARTA                                               VERSION 09.2020     |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             |                                LOADING PLEASE WAIT                                  |              " << endl;
	cout << "             |                                                                                     |              " << endl;
	cout << "             O";

	for(int x = 0; x < 86; x++) {
		cout << "O";
		Sleep(50);
	}

	int MAX = 10;

	system("cls");
	ENGINES(MAX, STUDENTS, SUBJECTS, GRADES);
}

int main() {
	// DATABASE

	string STUDENTS[] = {
		"FELIZARTA", 
		"FELIA", 
		"ASERIT", 
		"TANAEL", 
		"JULIO", 
		"CASIDSID", 
		"MORADA", 
		"CANDA", 
		"MALLARES", 
		"ADONAIS"
	};

	string SUBJECTS[] = {
		"PROGRAMMING           ", "ENGLISH               ", 
		"INFRANET              ", "SCIENCE               ", 
		"HISTORY               ", "MAPEH                 ", 
		"FILIPINO              ", "AVERAGE               ",
	};

	int GRADES[10][8] = {
		{65, 75, 65, 75, 60, 83, 64, 00}, {95, 83, 87, 86, 90, 85, 92, 00}, 
		{75 ,90, 86, 90, 90, 83, 92, 00}, {87, 90, 86, 70, 86, 75, 79, 00}, 
		{74, 84, 86, 75, 76, 86, 69, 00}, {60, 76, 81, 86, 78, 89, 72, 00}, 
		{75, 75, 79, 80, 86, 75, 90, 00}, {86, 82, 85, 77, 91, 83, 84, 00}, 
		{65, 77, 82, 79, 75, 70, 86, 00}, {84, 86, 73, 86, 92, 86, 95, 00}
	};

	// END OF DATABASE

	system("Color 0A");
	LOADINGSCREEN(STUDENTS, SUBJECTS, GRADES);
}
