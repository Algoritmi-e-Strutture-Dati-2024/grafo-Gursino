#include <iostream>
#include "Grafo.cpp" // Include la classe Grafo direttamente

int main() {
    // Creazione del grafo
    Grafo<int> mioGrafo;

    // Aggiunta dei nodi (numeri interi)
    mioGrafo.aggiungiNodo(10);
    mioGrafo.aggiungiNodo(20);
    mioGrafo.aggiungiNodo(30);
    mioGrafo.aggiungiNodo(40);
    mioGrafo.aggiungiNodo(50);

    // Aggiunta degli archi con pesi
    mioGrafo.aggiungiArco(10, 20, 5);
    mioGrafo.aggiungiArco(10, 30, 3);
    mioGrafo.aggiungiArco(20, 40, 2);
    mioGrafo.aggiungiArco(30, 50, 4);
    mioGrafo.aggiungiArco(40, 50, 1);
    mioGrafo.aggiungiArco(50, 20, 6);

    // Stampa della matrice di adiacenza del grafo
    mioGrafo.stampa();

    // Verifica se un nodo esiste
    std::cout << "Esiste il nodo 30? " << (mioGrafo.verificaNodo(30) ? "Sì" : "No") << std::endl;

    // Verifica se un arco esiste
    std::cout << "Esiste un arco tra 10 e 20? " << (mioGrafo.verificaArco(10, 20) ? "Sì" : "No") << std::endl;
    std::cout << "Esiste un arco tra 10 e 40? " << (mioGrafo.verificaArco(10, 40) ? "Sì" : "No") << std::endl;

    // Visualizza i nodi adiacenti a un nodo
    mioGrafo.nodiAdiacenti(10);

    // Rimuove un arco
    mioGrafo.rimuoviArco(10, 20);
    std::cout << "Matrice di Adiacenza dopo la rimozione dell'arco tra 10 e 20:" << std::endl;
    mioGrafo.stampa();

    // Rimuove un nodo
    mioGrafo.rimuoviNodo(30);
    std::cout << "Matrice di Adiacenza dopo la rimozione del nodo 30:" << std::endl;
    mioGrafo.stampa();

    // Aggiunta di un nuovo nodo e arco
    mioGrafo.aggiungiNodo(60);
    mioGrafo.aggiungiArco(50, 60, 7);
    std::cout << "Matrice di Adiacenza dopo l'aggiunta del nodo 60 e dell'arco tra 50 e 60:" << std::endl;
    mioGrafo.stampa();

    // Verifica connettività tra due nodi
    std::cout << "Il nodo 10 è connesso al nodo 50? " << (mioGrafo.verificaArco(10, 50) ? "Sì" : "No") << std::endl;

    // Trova l'arco con peso minore per un nodo
    int arcoMinimo = mioGrafo.arcoConPesoMinore(50);
    if (arcoMinimo != -1) {
        std::cout << "L'arco con il peso minimo da 50 ha peso: " << arcoMinimo << std::endl;
    } else {
        std::cout << "Non ci sono archi uscenti da 50." << std::endl;
    }

    return 0;
}
