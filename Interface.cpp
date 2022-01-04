#include "Interface.h"

Interface::Interface() {
    game = new App;
}

Interface::~Interface() {
    delete game;
}

void Interface::SplashScreen() { //Todo: Apagar dps...
    cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n";
    cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n";
    cout << "OOOOOOOOO                          OOOOOO                          OOOOOO                          OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO                          OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOO   OOOOOOOOOOOOOOOOOOOO   OOOOOOOOO\n";
    cout << "OOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOO                          OOOOOO                          OOOOOOOOO\n";
    cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n";
    cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n";
    cout << "                                        A carregar jogo...                                                  \n";
    cout << "                                        Por favor aguarde.                                                  \n";
    sleep_for(seconds(2));
    system("cls");
}

void Interface::Start() {
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //Todo: Also apagar dps...
    SplashScreen();
    game->Init();
}

void Interface::Loop() {
    while (true) {
        game->GetInput();
    }
}
