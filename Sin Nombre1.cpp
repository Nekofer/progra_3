void modi()
{
	char letra, palabra[20];
	int posicion=0;
	int ent=0;
	int opModi;
	int buscar;
	cout << "Introduce la contraseña: ";
	while (letra!=char(13))
	{
		letra=getch();
		palabra[posicion]=letra;
		posicion++;
		cout << "+";
	} 
	if ()
	cout << endl << palabra;
	for (int ciclo=0; ciclo<=posicionL; ciclo++ )
		if (strcmp (palabra,"fernando")==0)
			{
				ent=1;
				buscar=ciclo;
				ciclo=posicionL;
			}
	if (ent==1)
	{
		cout << "\nContraseña aceptada...\n";
		cout << "\nQue dato va a modificar [1=Precio / 2=Existencias]: "; cin >> opModi;
		switch (opModi)
		{
			case 1: cout << "Ingrese el nuevo precio: "; cin >> libro[posicionL].precio; break;
			case 2: cout << "Ingrese las nuevas existencias: "; cin >> libro[posicionL].existencias; break;
		}
	}
	else
	{
		cout << "\nContraseña incorrecta...\n";
	}
	system("pause>nul");
	system("cls");
}
