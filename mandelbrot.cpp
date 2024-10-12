#include <iostream>

const int MAX_ITER = 1000; // Nombre maximal d'itérations

// Fonction pour calculer si un point appartient à l'ensemble de Mandelbrot
int mandelbrot(float reel, float img) {
    float z_reel = 0.0f;
    float z_img = 0.0f;
    int n = 0;

    while (z_reel * z_reel + z_img * z_img < 4.0f && n < MAX_ITER) {
        float z_reel_new = z_reel * z_reel - z_img * z_img + reel;
        float z_img_new = 2 * z_reel * z_img + img;
        z_reel = z_reel_new;
        z_img = z_img_new;
        n++;
    }
    return n;
}

int main() {
    float reel, img;

    // Récupérer le complexe c
    std::cout << "Entrez la partie réelle de c : ";
    std::cin >> reel;
    std::cout << "Entrez la partie imaginaire de c : ";
    std::cin >> img;

    // Calcul du nombre d'itérations pour le complexe c
    int iterations = mandelbrot(reel, img);

    // Affichage du message final
    std::cout << "Le complexe c = " << reel << " + " << img 
              << "i diverge après " << iterations 
              << " itération(s) dans la suite de Mandelbrot." << std::endl;

    if (iterations < MAX_ITER) {
        std::cout << "Cela signifie qu'il n'appartient pas à l'ensemble de Mandelbrot." << std::endl;
    } else {
        std::cout << "Cela signifie qu'il pourrait appartenir à l'ensemble de Mandelbrot." << std::endl;
    }

    return 0;
}