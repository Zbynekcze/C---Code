
#include <iostream>

	using namespace std;

	int main()
	{
		int pole[] = { 18, 31, 22, 100, 83, -4, 1, 8 };
		int delkaPole = sizeof(pole) / sizeof(pole[0]); // zjisteni delky pole

		// vypis prvku z neserazeneho pole;
		for (int i = 0; i < delkaPole; i++)
		{
			cout << pole[i] << endl;
		}
		cout << "\n\n\nSerazeno:\n" << endl;

		// razeni za vyuziti pomocne promenne
		// kolik se projede prvku v poli
		for (int i = 0; i < delkaPole; i++)
		{
			// kolikrat se porovna promenna - musi se porovnat se vsema
			for (int x = 1; x < delkaPole; x++)
			{
				// pokud bude prvek pole vetsi, nez prvek pole nad nim, je potreba je prohodit
				if (pole[x] > pole[x + 1])
				{
					// mensi prvek umisteny vys si dame do pomocne promenne
					int pomocna = pole[x + 1];
					// na misto prvku co mame ted v pomocne si ulozime hodnotu, ktera se nachazela nize
					pole[x + 1] = pole[x];
					// vratime mensi prvek pole, ale tentokrat v pomyslnem seznamu nize
					pole[x] = pomocna;
				}
			}
		}

		// vypiseme nyni uz serazeny seznam
		for (int i = 0; i < delkaPole; i++)
		{
			cout << pole[i] << endl;
		}

		return 0;
	}


	