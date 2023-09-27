#include <iostream>
#include <stack>
#include <sstream>

int plakaty() {
    int liczba_budynkow;
    std::cin >> liczba_budynkow;

    int lista[liczba_budynkow];
    std::cin.ignore();

    for(int i=0; i < liczba_budynkow; i++){
        int szerokosc, wysokosc; scanf("%d%d",&szerokosc,&wysokosc);
        lista[i] = wysokosc;
        }


    int p = 0;
    std::stack<int> stos;

    for (int i = 0; i < liczba_budynkow; i++){
        while(!stos.empty() && stos.top() > lista[i]){
            stos.pop();
        }
        if(stos.empty() || stos.top() < lista[i]){
            stos.push(lista[i]);
            p++;
        }
    }
    return p;

}

int main() {
    std::cout << plakaty() << std::endl;

    return 0;
}
