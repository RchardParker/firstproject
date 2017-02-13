#pragma once		//Bedeutet, dass dieser Header nur in diesem Programm gilt

int fScan() {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0;

	//Werte einsammeln
	printf("Bitte geben Sie die DPI ein.\nDPI: ");
	scanf("%i", &dpi);

	printf("Bitte geben Sie die Farbtiefe ein.\nFarbtiefe: ");
	scanf("%i", &farbtiefe);

	printf("Bitte geben Sie die Breite in cm ein.\nBreite: ");
	scanf("%f", &breite);

	printf("Bitte geben Sie die H\x94\he in cm ein.\nH\x94\he ");
	scanf("%f", &hoehe);

	printf("-------------Ausgabe--------------------\n");

	//Berechnung
	groesse = (((breite * dpi) / 2.54) * ((hoehe * dpi) / 2.54) * farbtiefe) / 8 / 1024 / 1024;

	printf("Die zu erwartende Dateigr\x94\xE1\e entspricht %.4lf MIB\n");



	return 0;
}

int fKinder(void) {

	int a = 0, kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Wilkommen zum Kindergeburtstag!\n");
	printf("Bitte geben Sie die Anzahl der Kinder ein:\n");

	scanf("%i", &kinder);

	printf("Wie viele \x9a\x62\erraschungseier hast du?:\n(Ich hoffe mehr als Kinder, ansonsten gibt es streit!)\n");

	scanf("%i", &eier);

	erhalten = eier / kinder;

	rest = eier%kinder;

	printf("Es wurden %i Kinder eingeladen.\nUnd jedes hat %i \x9a\x62\erraschungseier erhalten.\n"
		"Es bleiben noch %i \x81\x62rig. \n", kinder, erhalten, rest);


	return 0;
}