#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Fonction Niveau 0 Zanzibar
void PartieSolo() {
    int ValeursDe[6]{100,2,3,4,5,60 };
    int De1joueur1 = 0;
    cout << "\nSaisissez la valeur du premier lance : ";
    cin >> De1joueur1;
    int De2joueur1 = 0;
    cout << "\nSaisissez la valeur du deuxieme lance : ";
    cin >> De2joueur1;
    int De3joueur1 = 0;
    cout << "\nSaisissez la valeur du troisieme lance : ";
    cin >> De3joueur1;
    int De4joueur1 = 0;
    cout << "\nSaisissez la valeur du quatrieme lance : ";
    cin >> De4joueur1;
    int De5joueur1 = 0;
    cout << "\nSaisissez la valeur du cinquieme lance : ";
    cin >> De5joueur1;
    int De6joueur1 = 0;
    cout << "\nSaisissez la valeur du sixieme lance : ";
    cin >> De6joueur1;
    int De7joueur1 = 0;
    cout << "\nSaisissez la valeur du septieme lance";
    cin >> De7joueur1;
    int De8joueur1 = 0;
    cout << "\nSaisissez la valeur du huitieme lance : ";
    cin >> De8joueur1;
    int De9joueur1 = 0;
    cout << "\nSaisissez la valeur du neuvieme lance";
    cin >> De9joueur1;
    int ScoreTour1 = 0;
    int ScoreTour2 = 0;
    int ScoreTour3 = 0;
    ScoreTour1 = ValeursDe[De1joueur1] + ValeursDe[De2joueur1] + ValeursDe[De3joueur1];
    ScoreTour2 = ScoreTour1 + ValeursDe[De4joueur1] + ValeursDe[De5joueur1] + ValeursDe[De6joueur1];
    ScoreTour3 = ScoreTour2 + ValeursDe[De7joueur1] + ValeursDe[De8joueur1] + ValeursDe[De9joueur1];

    cout << "SCORE TOUR 1 : " << ScoreTour1 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur1] << "\nD2 = " << ValeursDe[De2joueur1] << "\nD3 = " << ValeursDe[De3joueur1] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur1] << "\nD2 = " << ValeursDe[De5joueur1] << "\nD3 = " << ValeursDe[De6joueur1] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur1] << "\nD2 = " << ValeursDe[De8joueur1] << "\nD3 = " << ValeursDe[De9joueur1] << "\n" ;
}
void PartieSoloPost() {
    int ValeursDe[6] = {100, 2, 3, 4, 5, 60};  // Les valeurs possibles sur chaque dé

    int Lancers[9];  // Tableau pour stocker les valeurs saisies (entre 1 et 6)

    // Demander les valeurs des lancers au joueur
    for (int i = 0; i < 9; ++i) {
        cout << "\nSaisissez la valeur du " << i + 1 << "er lancer (valeur entre 1 et 6) : ";
        cin >> Lancers[i];

        // Vérification si la valeur est valide
        while (Lancers[i] < 1 || Lancers[i] > 6) {
            cout << "Valeur invalide ! Saisissez une valeur entre 1 et 6 : ";
            cin >> Lancers[i];
        }
    }

    // Calcul des scores par tour
    int ScoreTour1 = ValeursDe[Lancers[0] - 1] + ValeursDe[Lancers[1] - 1] + ValeursDe[Lancers[2] - 1];
    int ScoreTour2 = ValeursDe[Lancers[3] - 1] + ValeursDe[Lancers[4] - 1] + ValeursDe[Lancers[5] - 1];
    int ScoreTour3 = ValeursDe[Lancers[6] - 1] + ValeursDe[Lancers[7] - 1] + ValeursDe[Lancers[8] - 1];

    // Affichage des résultats par tour
    cout << "\n--- Resultats ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1 << "\n";
    cout << "D1 = " << ValeursDe[Lancers[0] - 1] << "\nD2 = " << ValeursDe[Lancers[1] - 1] << "\nD3 = " << ValeursDe[Lancers[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2 << "\n";
    cout << "D1 = " << ValeursDe[Lancers[3] - 1] << "\nD2 = " << ValeursDe[Lancers[4] - 1] << "\nD3 = " << ValeursDe[Lancers[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3 << "\n";
    cout << "D1 = " << ValeursDe[Lancers[6] - 1] << "\nD2 = " << ValeursDe[Lancers[7] - 1] << "\nD3 = " << ValeursDe[Lancers[8] - 1] << "\n";
}



//Fonction niveau 1
void PartieDuo(){
    int ValeursDe[6]{100,2,3,4,5,60 };
    //Lancés du Joueur 1
    int De1joueur1 = rand() %6;
    int De2joueur1 = rand() %6;
    int De3joueur1 = rand() %6;
    int De4joueur1 = rand() %6;
    int De5joueur1 = rand() %6;
    int De6joueur1 = rand() %6;
    int De7joueur1 = rand() %6;
    int De8joueur1 = rand() %6;
    int De9joueur1 = rand() %6;
    //Lancés du Joueur 2
    int De1joueur2 = rand() %6;
    int De2joueur2 = rand() %6;
    int De3joueur2 = rand() %6;
    int De4joueur2 = rand() %6;
    int De5joueur2 = rand() %6;
    int De6joueur2 = rand() %6;
    int De7joueur2 = rand() %6;
    int De8joueur2 = rand() %6;
    int De9joueur2 = rand() %6;
    //Initialisation Valeur scores aux tours 1, 2 et 3 pour Joueur 1
    int ScoreTour1Joueur1 = 0;
    int ScoreTour2Joueur1 = 0;
    int ScoreTour3Joueur1 = 0;
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 1
    ScoreTour1Joueur1 = ValeursDe[De1joueur1] + ValeursDe[De2joueur1] + ValeursDe[De3joueur1];
    ScoreTour2Joueur1 = ScoreTour1Joueur1 + ValeursDe[De4joueur1] + ValeursDe[De5joueur1] + ValeursDe[De6joueur1];
    ScoreTour3Joueur1 = ScoreTour2Joueur1 + ValeursDe[De7joueur1] + ValeursDe[De8joueur1] + ValeursDe[De9joueur1];
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 2
    int ScoreTour1Joueur2 = 0;
    int ScoreTour2Joueur2 = 0;
    int ScoreTour3Joueur2 = 0;
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 2
    ScoreTour1Joueur2 = ValeursDe[De1joueur2] + ValeursDe[De2joueur2] + ValeursDe[De3joueur2];
    ScoreTour2Joueur2 = ScoreTour1Joueur2 + ValeursDe[De4joueur2] + ValeursDe[De5joueur2] + ValeursDe[De6joueur2];
    ScoreTour3Joueur2 = ScoreTour2Joueur2 + ValeursDe[De7joueur2] + ValeursDe[De8joueur2] + ValeursDe[De9joueur2];

    //Affichage Résultat joueur 1
    cout << "   ---Resultat joueur 1---\n\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur1] << "\nD2 = " << ValeursDe[De2joueur1] << "\nD3 = " << ValeursDe[De3joueur1] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur1] << "\nD2 = " << ValeursDe[De5joueur1] << "\nD3 = " << ValeursDe[De6joueur1] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur1] << "\nD2 = " << ValeursDe[De8joueur1] << "\nD3 = " << ValeursDe[De9joueur1] << "\n" ;
    //Affichage Résultat joueur 2
    cout << "   ---Resultat joueur 2---\n\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur2] << "\nD2 = " << ValeursDe[De2joueur2] << "\nD3 = " << ValeursDe[De3joueur2] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur2] << "\nD2 = " << ValeursDe[De5joueur2] << "\nD3 = " << ValeursDe[De6joueur2] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur2] << "\nD2 = " << ValeursDe[De8joueur2] << "\nD3 = " << ValeursDe[De9joueur2] << "\n" ;
}

#include <iostream>
#include <cstdlib>  // Pour rand() et srand()
#include <ctime>    // Pour time()

using namespace std;

void PartieDuoPost() {
    int ValeursDe[6] = {100, 2, 3, 4, 5, 60};  // Valeurs des faces du dé (indexées de 0 à 5 pour 1 à 6)

    // Tableau pour stocker les lancers des joueurs
    int LancersJoueur1[9], LancersJoueur2[9];

    // Initialisation de la fonction srand pour générer des nombres aléatoires différents à chaque exécution
    srand(time(0));

    // Générer aléatoirement les lancers pour le Joueur 1
    cout << "\n--- Joueur 1 ---\n";
    for (int i = 0; i < 9; ++i) {
        LancersJoueur1[i] = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        cout << "Lancer " << i + 1 << " : " << LancersJoueur1[i] << endl;
    }

    // Générer aléatoirement les lancers pour le Joueur 2
    cout << "\n--- Joueur 2 ---\n";
    for (int i = 0; i < 9; ++i) {
        LancersJoueur2[i] = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        cout << "Lancer " << i + 1 << " : " << LancersJoueur2[i] << endl;
    }

    // Calcul des scores pour le Joueur 1
    int ScoreTour1J1 = ValeursDe[LancersJoueur1[0] - 1] + ValeursDe[LancersJoueur1[1] - 1] + ValeursDe[LancersJoueur1[2] - 1];
    int ScoreTour2J1 = ValeursDe[LancersJoueur1[3] - 1] + ValeursDe[LancersJoueur1[4] - 1] + ValeursDe[LancersJoueur1[5] - 1];
    int ScoreTour3J1 = ValeursDe[LancersJoueur1[6] - 1] + ValeursDe[LancersJoueur1[7] - 1] + ValeursDe[LancersJoueur1[8] - 1];

    // Calcul des scores pour le Joueur 2
    int ScoreTour1J2 = ValeursDe[LancersJoueur2[0] - 1] + ValeursDe[LancersJoueur2[1] - 1] + ValeursDe[LancersJoueur2[2] - 1];
    int ScoreTour2J2 = ValeursDe[LancersJoueur2[3] - 1] + ValeursDe[LancersJoueur2[4] - 1] + ValeursDe[LancersJoueur2[5] - 1];
    int ScoreTour3J2 = ValeursDe[LancersJoueur2[6] - 1] + ValeursDe[LancersJoueur2[7] - 1] + ValeursDe[LancersJoueur2[8] - 1];

    // Affichage des résultats pour le Joueur 1
    cout << "\n--- Resultats Joueur 1 ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[0] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[1] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[3] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[4] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[6] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[7] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[8] - 1] << "\n";

    // Affichage des résultats pour le Joueur 2
    cout << "\n--- Resultats Joueur 2 ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[0] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[1] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[3] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[4] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[6] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[7] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[8] - 1] << "\n";

    // Comparaison des scores finaux
    int ScoreTotalJ1 = ScoreTour1J1 + ScoreTour2J1 + ScoreTour3J1;
    int ScoreTotalJ2 = ScoreTour1J2 + ScoreTour2J2 + ScoreTour3J2;

    cout << "\n--- Resultats finaux ---\n";
    cout << "Total score Joueur 1 : " << ScoreTotalJ1 << "\n";
    cout << "Total score Joueur 2 : " << ScoreTotalJ2 << "\n";

    // Déterminer le gagnant
    if (ScoreTotalJ1 > ScoreTotalJ2) {
        cout << "\nLe Joueur 1 gagne !\n";
    } else if (ScoreTotalJ1 < ScoreTotalJ2) {
        cout << "\nLe Joueur 2 gagne !\n";
    } else {
        cout << "\nMatch nul !\n";
    }
}


//Fonction niveau 2
void PartieTrio(){
    int ValeursDe[6]{100,2,3,4,5,60 };
    //Lancés du Joueur 1
    int De1joueur1 = rand() %6;
    int De2joueur1 = rand() %6;
    int De3joueur1 = rand() %6;
    int De4joueur1 = rand() %6;
    int De5joueur1 = rand() %6;
    int De6joueur1 = rand() %6;
    int De7joueur1 = rand() %6;
    int De8joueur1 = rand() %6;
    int De9joueur1 = rand() %6;
    //Lancés du Joueur 2
    int De1joueur2 = rand() %6;
    int De2joueur2 = rand() %6;
    int De3joueur2 = rand() %6;
    int De4joueur2 = rand() %6;
    int De5joueur2 = rand() %6;
    int De6joueur2 = rand() %6;
    int De7joueur2 = rand() %6;
    int De8joueur2 = rand() %6;
    int De9joueur2 = rand() %6;
    //Lancés du Joueur 3
    int De1joueur3 = rand() %6;
    int De2joueur3 = rand() %6;
    int De3joueur3 = rand() %6;
    int De4joueur3 = rand() %6;
    int De5joueur3 = rand() %6;
    int De6joueur3 = rand() %6;
    int De7joueur3 = rand() %6;
    int De8joueur3 = rand() %6;
    int De9joueur3 = rand() %6;
    //Initialisation Valeur scores aux tours 1, 2 et 3 pour Joueur 1
    int ScoreTour1Joueur1 = 0;
    int ScoreTour2Joueur1 = 0;
    int ScoreTour3Joueur1 = 0;
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 1
    ScoreTour1Joueur1 = ValeursDe[De1joueur1] + ValeursDe[De2joueur1] + ValeursDe[De3joueur1];
    ScoreTour2Joueur1 = ScoreTour1Joueur1 + ValeursDe[De4joueur1] + ValeursDe[De5joueur1] + ValeursDe[De6joueur1];
    ScoreTour3Joueur1 = ScoreTour2Joueur1 + ValeursDe[De7joueur1] + ValeursDe[De8joueur1] + ValeursDe[De9joueur1];
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 2
    int ScoreTour1Joueur2 = 0;
    int ScoreTour2Joueur2 = 0;
    int ScoreTour3Joueur2 = 0;
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 2
    ScoreTour1Joueur2 = ValeursDe[De1joueur2] + ValeursDe[De2joueur2] + ValeursDe[De3joueur2];
    ScoreTour2Joueur2 = ScoreTour1Joueur2 + ValeursDe[De4joueur2] + ValeursDe[De5joueur2] + ValeursDe[De6joueur2];
    ScoreTour3Joueur2 = ScoreTour2Joueur2 + ValeursDe[De7joueur2] + ValeursDe[De8joueur2] + ValeursDe[De9joueur2];
//Initialisation Valeur scores aux tours 1, 2 et 3 pour Joueur 3
    int ScoreTour1Joueur3 = 0;
    int ScoreTour2Joueur3 = 0;
    int ScoreTour3Joueur3 = 0;
    // Calcul Valeur des score aux tours 1,2 et 3 pour le Joueur 3
    ScoreTour1Joueur3 = ValeursDe[De1joueur3] + ValeursDe[De2joueur3] + ValeursDe[De3joueur3];
    ScoreTour2Joueur3 = ScoreTour1Joueur3 + ValeursDe[De4joueur3] + ValeursDe[De5joueur3] + ValeursDe[De6joueur3];
    ScoreTour3Joueur3 = ScoreTour2Joueur3 + ValeursDe[De7joueur3] + ValeursDe[De8joueur3] + ValeursDe[De9joueur3];
    //Affichage Résultat joueur 1
    cout << "   ---Resultat joueur 1---\n\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur1] << "\nD2 = " << ValeursDe[De2joueur1] << "\nD3 = " << ValeursDe[De3joueur1] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur1] << "\nD2 = " << ValeursDe[De5joueur1] << "\nD3 = " << ValeursDe[De6joueur1] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3Joueur1 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur1] << "\nD2 = " << ValeursDe[De8joueur1] << "\nD3 = " << ValeursDe[De9joueur1] << "\n" ;
    //Affichage Résultat joueur 2
    cout << "   ---Resultat joueur 2---\n\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur2] << "\nD2 = " << ValeursDe[De2joueur2] << "\nD3 = " << ValeursDe[De3joueur2] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur2] << "\nD2 = " << ValeursDe[De5joueur2] << "\nD3 = " << ValeursDe[De6joueur2] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3Joueur2 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur2] << "\nD2 = " << ValeursDe[De8joueur2] << "\nD3 = " << ValeursDe[De9joueur2] << "\n" ;
    //Affichage Résultat joueur 3
    cout << "   ---Resultat joueur 3---\n\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1Joueur3 << "\n";
    cout << "D1 = " << ValeursDe[De1joueur3] << "\nD2 = " << ValeursDe[De2joueur3] << "\nD3 = " << ValeursDe[De3joueur3] << "\n" ;
    cout << "SCORE TOUR 2 : " << ScoreTour2Joueur3 << "\n";
    cout << "D1 = " << ValeursDe[De4joueur3] << "\nD2 = " << ValeursDe[De5joueur3] << "\nD3 = " << ValeursDe[De6joueur3] << "\n" ;
    cout << "SCORE TOUR 3 : " << ScoreTour3Joueur3 << "\n";
    cout << "D1 = " << ValeursDe[De7joueur3] << "\nD2 = " << ValeursDe[De8joueur3] << "\nD3 = " << ValeursDe[De9joueur3] << "\n" ;
}
#include <iostream>
#include <cstdlib>  // Pour rand() et srand()
#include <ctime>    // Pour time()

using namespace std;

void PartieTrioPost() {
    int ValeursDe[6] = {100, 2, 3, 4, 5, 60};  // Valeurs des faces du dé (indexées de 0 à 5 pour 1 à 6)

    // Tableau pour stocker les lancers des joueurs
    int LancersJoueur1[9], LancersJoueur2[9], LancersJoueur3[9];

    // Initialisation de la fonction srand pour générer des nombres aléatoires différents à chaque exécution
    srand(time(0));

    // Générer aléatoirement les lancers pour le Joueur 1
    cout << "\n--- Joueur 1 ---\n";
    for (int i = 0; i < 9; ++i) {
        LancersJoueur1[i] = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        cout << "Lancer " << i + 1 << " : " << LancersJoueur1[i] << endl;
    }

    // Générer aléatoirement les lancers pour le Joueur 2
    cout << "\n--- Joueur 2 ---\n";
    for (int i = 0; i < 9; ++i) {
        LancersJoueur2[i] = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        cout << "Lancer " << i + 1 << " : " << LancersJoueur2[i] << endl;
    }

    // Générer aléatoirement les lancers pour le Joueur 3
    cout << "\n--- Joueur 3 ---\n";
    for (int i = 0; i < 9; ++i) {
        LancersJoueur3[i] = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        cout << "Lancer " << i + 1 << " : " << LancersJoueur3[i] << endl;
    }

    // Calcul des scores pour le Joueur 1
    int ScoreTour1J1 = ValeursDe[LancersJoueur1[0] - 1] + ValeursDe[LancersJoueur1[1] - 1] + ValeursDe[LancersJoueur1[2] - 1];
    int ScoreTour2J1 = ValeursDe[LancersJoueur1[3] - 1] + ValeursDe[LancersJoueur1[4] - 1] + ValeursDe[LancersJoueur1[5] - 1];
    int ScoreTour3J1 = ValeursDe[LancersJoueur1[6] - 1] + ValeursDe[LancersJoueur1[7] - 1] + ValeursDe[LancersJoueur1[8] - 1];

    // Calcul des scores pour le Joueur 2
    int ScoreTour1J2 = ValeursDe[LancersJoueur2[0] - 1] + ValeursDe[LancersJoueur2[1] - 1] + ValeursDe[LancersJoueur2[2] - 1];
    int ScoreTour2J2 = ValeursDe[LancersJoueur2[3] - 1] + ValeursDe[LancersJoueur2[4] - 1] + ValeursDe[LancersJoueur2[5] - 1];
    int ScoreTour3J2 = ValeursDe[LancersJoueur2[6] - 1] + ValeursDe[LancersJoueur2[7] - 1] + ValeursDe[LancersJoueur2[8] - 1];

    // Calcul des scores pour le Joueur 3
    int ScoreTour1J3 = ValeursDe[LancersJoueur3[0] - 1] + ValeursDe[LancersJoueur3[1] - 1] + ValeursDe[LancersJoueur3[2] - 1];
    int ScoreTour2J3 = ValeursDe[LancersJoueur3[3] - 1] + ValeursDe[LancersJoueur3[4] - 1] + ValeursDe[LancersJoueur3[5] - 1];
    int ScoreTour3J3 = ValeursDe[LancersJoueur3[6] - 1] + ValeursDe[LancersJoueur3[7] - 1] + ValeursDe[LancersJoueur3[8] - 1];

    // Affichage des résultats pour le Joueur 1
    cout << "\n--- Resultats Joueur 1 ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[0] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[1] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[3] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[4] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3J1 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur1[6] - 1] << "\nD2 = " << ValeursDe[LancersJoueur1[7] - 1] << "\nD3 = " << ValeursDe[LancersJoueur1[8] - 1] << "\n";

    // Affichage des résultats pour le Joueur 2
    cout << "\n--- Resultats Joueur 2 ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[0] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[1] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[3] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[4] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3J2 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur2[6] - 1] << "\nD2 = " << ValeursDe[LancersJoueur2[7] - 1] << "\nD3 = " << ValeursDe[LancersJoueur2[8] - 1] << "\n";

    // Affichage des résultats pour le Joueur 3
    cout << "\n--- Resultats Joueur 3 ---\n";
    cout << "SCORE TOUR 1 : " << ScoreTour1J3 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur3[0] - 1] << "\nD2 = " << ValeursDe[LancersJoueur3[1] - 1] << "\nD3 = " << ValeursDe[LancersJoueur3[2] - 1] << "\n";

    cout << "SCORE TOUR 2 : " << ScoreTour2J3 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur3[3] - 1] << "\nD2 = " << ValeursDe[LancersJoueur3[4] - 1] << "\nD3 = " << ValeursDe[LancersJoueur3[5] - 1] << "\n";

    cout << "SCORE TOUR 3 : " << ScoreTour3J3 << "\n";
    cout << "D1 = " << ValeursDe[LancersJoueur3[6] - 1] << "\nD2 = " << ValeursDe[LancersJoueur3[7] - 1] << "\nD3 = " << ValeursDe[LancersJoueur3[8] - 1] << "\n";

    // Comparaison des scores finaux
    int ScoreTotalJ1 = ScoreTour1J1 + ScoreTour2J1 + ScoreTour3J1;
    int ScoreTotalJ2 = ScoreTour1J2 + ScoreTour2J2 + ScoreTour3J2;
    int ScoreTotalJ3 = ScoreTour1J3 + ScoreTour2J3 + ScoreTour3J3;

    cout << "\n--- Resultats finaux ---\n";
    cout << "Total score Joueur 1 : " << ScoreTotalJ1 << "\n";
    cout << "Total score Joueur 2 : " << ScoreTotalJ2 << "\n";
    cout << "Total score Joueur 3 : " << ScoreTotalJ3 << "\n";

    // Déterminer le gagnant
    if (ScoreTotalJ1 > ScoreTotalJ2 && ScoreTotalJ1 > ScoreTotalJ3) {
        cout << "\nLe Joueur 1 gagne !\n";
    } else if (ScoreTotalJ2 > ScoreTotalJ1 && ScoreTotalJ2 > ScoreTotalJ3) {
        cout << "\nLe Joueur 2 gagne !\n";
    } else if (ScoreTotalJ3 > ScoreTotalJ1 && ScoreTotalJ3 > ScoreTotalJ2) {
        cout << "\nLe Joueur 3 gagne !\n";
    } else {
        cout << "\nMatch nul !\n";
    }
}
int main() {
    srand(time(0));
    int choixmenu1 = 0;
    cout <<   "---Menu Principal---\n     1-Code avant correction\n     2-Code apres correction";
    cin >> choixmenu1;
    if (choixmenu1 == 1) {
        int choixMenu2 = 0;
        cout << "  \n\n---Menu Pre Correction---\n     1- Partie Solo\n     2-Partie Deux Joueurs\n     3-Partie Trois Joueurs";
        cin >> choixMenu2;
        if (choixMenu2 == 1){
            PartieSolo();
        }
        else if (choixMenu2 ==2){
            PartieDuo();
        }
        else if (choixMenu2 ==3){
            PartieTrio();
        }
    }
    else if (choixmenu1 == 2){
        int choixMenu2 = 0;
        cout << "  \n\n---Menu Post Correction---\n     1- Partie Solo\n     2-Partie Deux Joueurs\n     3-Partie Trois Joueurs";
        cin >> choixMenu2;
        if (choixMenu2 == 1){
            PartieSoloPost();
        }
        else if (choixMenu2 ==2){
            PartieDuoPost();
        }
        else if (choixMenu2 ==3){
            PartieTrioPost();
        }
    }
}
