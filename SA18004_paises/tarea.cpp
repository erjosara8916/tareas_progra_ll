/*
    Autor: Erick Josue Saravia Aragon
    Carnet: SA18004
    fecha: 03/06/2019
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <array>
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Button.H>
#include<FL/fl_message.H>
#include<FL/Fl_Box.H>


using namespace std;

class Pais
{
    public: 
        Pais(string, string);
        string nombre;
        string capital;

        void mostrar(){
            fl_message("La capital de %s es: %s", nombre.c_str(), capital.c_str());
        }

    private:
        
};

array<Pais, 20> paises = {
        Pais("El Salvador", "San Salvador"),
        Pais("Guatemala", "Ciudad de Guatemala"),
        Pais("Belice", "Belmopan"),
        Pais("Honduras", "Tegucigalpa"),
        Pais("Venezuela", "Caracas"),
        Pais("Brasil", "Sao Paulo"),
        Pais("Estados Unidos", "Whasington"),
        Pais("Cuba", "La Habana"),
        Pais("Puerto Rico", "San Juan"),
        Pais("Italia", "Roma"),
        Pais("Costa Rica", "San Jose"),
        Pais("Chile", "Santiago de Chile"),
        Pais("Colombia", "Bogota"),
        Pais("Panama", "Ciudad de Panama"),
        Pais("Espa&ntilde;a", "Madrid"),
        Pais("Mexico", "Ciudad de Mexico"),
        Pais("Alemania", "Berlin"),
        Pais("Jamaica", "Kingstong"),
        Pais("Republica Cominicana", "Santo Domingo"),
        Pais("Bolivia", "Sucre")         
};

// ventana principal
class Ventana : public Fl_Window{
    Fl_Window *window;
    Fl_Box *box;
    Fl_Button *btn_pais1;
    Fl_Button *btn_pais2;
    Fl_Button *btn_pais3;
    Fl_Button *btn_pais4;
    Fl_Button *btn_pais5;
    Fl_Button *btn_reset;

    int pos_x;
    int pos_y;
    std::array<int, 5> pos = {-1, -2, -3, -4, -5} ;
    
    public:
    Ventana():Fl_Window(400,400){
     	begin();
        pos_x = 120; // posicion de referencia en x
        pos_y = 80; // posicion de referencia en y

        box = new Fl_Box(pos_x + 20,pos_y-65,150,50, "Paises y capitales");
    	box->box(FL_RFLAT_BOX);
        box->labelsize(25);
    	box->labelfont(FL_BOLD+FL_ITALIC);
    	box->labeltype(FL_SHADOW_LABEL); 

        
        ponerPaises();
    	
        btn_pais1->callback(mostrarCapital1,(void*)this);
        btn_pais2->callback(mostrarCapital2,(void*)this);
        btn_pais3->callback(mostrarCapital3,(void*)this);
        btn_pais4->callback(mostrarCapital4,(void*)this);
        btn_pais5->callback(mostrarCapital5,(void*)this); 

    	end();
    }

    void ponerPaises() 
    {
        generarPos();
        // botones 
    	btn_pais1 = new Fl_Button(pos_x, pos_y, 150, 30, paises[pos[0]].nombre.c_str());
    	btn_pais2 = new Fl_Button(pos_x, pos_y + 50, 150, 30, paises[pos[1]].nombre.c_str());
        btn_pais3 = new Fl_Button(pos_x, pos_y + 100, 150, 30, paises[pos[2]].nombre.c_str());
        btn_pais4 = new Fl_Button(pos_x, pos_y + 150, 150, 30, paises[pos[3]].nombre.c_str());
        btn_pais5 = new Fl_Button(pos_x, pos_y + 200, 150, 30, paises[pos[4]].nombre.c_str());
    }

    static void mostrarCapital1(Fl_Widget *w, void *data) 
    {
       Ventana *e = (Ventana*)data;
        
       paises[e->pos[0]].mostrar();
    }

    static void mostrarCapital2(Fl_Widget *w, void *data) 
    {
       Ventana *e = (Ventana*)data;
        
       paises[e->pos[1]].mostrar();
    }

    static void mostrarCapital3(Fl_Widget *w, void *data) 
    {
       Ventana *e = (Ventana*)data;
        
       paises[e->pos[2]].mostrar();
    }

    static void mostrarCapital4(Fl_Widget *w, void *data) 
    {
       Ventana *e = (Ventana*)data;
        
       paises[e->pos[3]].mostrar();
    }

     static void mostrarCapital5(Fl_Widget *w, void *data) 
    {
       Ventana *e = (Ventana*)data;
        
       paises[e->pos[4]].mostrar();
    } 
 
    void generarPos()
    {
        srand(time(nullptr));
    
        int random;
        int i = 0;

        while(i < 5) // generar 5 randoms
        {
            bool isValid; // validez del random
            int a; // para pausar la ejecucion
            isValid = false; // por defecto invalido
        
            // cout << "vuelta " << i << endl;
            random = rand()/((RAND_MAX + 1u)/paises.size());
        
            //cout << "vuelta " << i << "  " << random << endl;
            for (int j = 0; j < 5; j++)
            {
                // cout << "rnd: "<< random << "pos: " << pos[j] << endl;
                //cin >> a;
                if (random == pos[j])
                {
                    // cout << "Se cumplio" << endl;
                    isValid = true;
        
                }
            }
        
            if (isValid != true)
            {
                pos[i] = random;
                i++;
            }
        }
    }
};



Pais::Pais(string nom, string cap)
{
    nombre = nom;
    capital = cap;
}


int main(int argc, char** argv)
{
 
    Ventana *e=new Ventana();
	
	e->show(argc,argv);
	return Fl::run();
}