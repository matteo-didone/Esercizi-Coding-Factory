/******************************************************************************

Creare una classe Televisione sapendo che lo stato di una televisione è
caratterizzato dal fatto di essere accesa o spenta, dal volume
(che è compreso tra zero e 10), dal canale (che è compreso tra 0 e 99)
e dal fatto che sia in modalità  silenziosa o meno.

Creare un opportuno costruttore, e i seguenti metodi: pulasanterosso(),
canaleSuccessivo(), canalePrecedente(), aumentaVolume(), abbassaVolume(),
impostaCanale(int c), print(), pulsanteSilenzioso().
Si rendano esplicitino le scelte implementative fatte nei commenti all' inizio
del codice.
Testare la classe con un opportuno main.

Si rispettino i dettami della programmazione orientata agli oggetti con
gli attributi privati e i metodi pubblici

*******************************************************************************/
#include <iostream>
using namespace std;

class Televisione
{
    // Di default, è privato
    bool accesa;
    int volume;
    int canale;
    bool silenziosa;

public:
    // costruttore senza parametri che crea una tv spenta non silenziosa
    //  con canale iniziale 1 e volume 5
    Televisione()
    {
        accesa = false;
        volume = 5;
        canale = 1;
        silenziosa = false;
    }

    // crea una televisione con i valori passati
    Televisione(bool a, int v, int c, bool s)
    {
        accesa = a;
        volume = v;
        canale = c;
        silenziosa = s;
    }

    void pulsanteRosso()
    {
        accesa = !accesa;
    }

    // se la tv è accesa aumenta il canale
    // e restituisce il canale realmente impostato
    // se il canale supera il 99 torna a zero
    int canaleSuccessivo()
    {
        if (accesa == true)
        {
            canale = (canale + 1) % 100;
        }
        return canale;
    }

    // se la tv è accesa diminuisce il canale di uno
    // e restituisce il canale realmente impostato
    // se il canale va sotto lo zero va a 99
    int canalePrecedente()
    {
        if (accesa == true)
        {
            canale = (canale - 1);
            if (canale < 0)
            {
                canale = 100 + canale;
            }
        }
        return canale;
    }

    // se la tv è accesa aumenta se possibile il volume di uno
    // e restituisce il volume realmente impostato
    int aumentaVolume()
    {
        if (accesa)
        {
            volume = volume + 1;
            if (volume > 10)
            {
                volume = 10;
            }
        }
        return volume;
    }

    // se la tv è accesa diminuisce se possibile il volume di uno
    // e restituisce il volume realmente impostato
    int abbassaVolume()
    {
        volume = volume - 1;
        if (volume < 0)
        {
            volume = 0;
        }
        return volume;
    }
    int impostaCanale(int c)
    {
        canale = c % 100;
        while (canale < 0)
        {
            canale = 100 + canale;
        }
        return canale;
    }

    void print()
    {
        cout << "accesa " << accesa << " silenziosa " << silenziosa << endl;
        cout << "canale " << canale << " volume " << volume << endl;
    }

    void pulsanteSilenzioso()
    {
        silenziosa = !silenziosa;
    }
};

int main()
{
    Televisione t;
    t.print();
    t.pulsanteRosso();
    t.print();
    t.canaleSuccessivo();
    t.print();
    t.canalePrecedente();
    t.canalePrecedente();
    t.canalePrecedente();
    t.print();
    t.aumentaVolume();
    t.print();
    t.pulsanteRosso();
    t.print();
    return 0;
}