


struct menu {
    stack<string> options; // opciones del menu
    string title ;
    int selected ;
    /**
        Descripcion: agrega una nueva opcion al menu
        parametros:
            name: nombre de la nueva opcion del menu
    */
    void add(string name ) {
        options.push( name ) ;
    }

    /**
      Descripcion: Muestra el menu en pantalla

    */
    void show() {
        showMessage(title) ;
        int pos; // posicion a mostrar
        int length; // numero de opciones del menu

        length = options.size() ; // calcular

        // mostrar cada opcion
        for (pos = 1; pos <= length; pos++){

            string *nodo = &options.top() ; // ubicacion del ultimo elemento del menu
            nodo -= (length - pos) ; // mover la ubicacion hasta la posicion de seada

            cout << " " << pos << ". " << *nodo << endl ; // mostrar la opcion
        }


        setData("Escoge una opcion: ", selected ) ;
        if (selected < 1 || selected > length) {
            show() ;
        }
    }
};
