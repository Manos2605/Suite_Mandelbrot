Ce programme C++ permet de calculer et d'afficher les itérations d'un point complexe dans la suite de Mandelbrot. 
Il calcule combien d'itérations sont nécessaires avant que la suite diverge (si elle diverge). Si la norme dépasse
2, cela signifie que le point ne fait pas partie de l'ensemble de Mandelbrot.

## Fonctionnalités

- Calcul de la suite de Mandelbrot pour un point complexe donné.
- Affichage de chaque itération de la suite, sous la forme \( z(n) = a + bi \).
- Détermination du nombre d'itérations nécessaires pour que la suite diverge (si applicable).
- Affichage du statut du point complexe : il appartient ou non à l'ensemble de Mandelbrot.

## Formule de la Suite de Mandelbrot

La suite de Mandelbrot est définie par la relation récurrente suivante :

\[
z_{n+1} = z_n^2 + c
\]

où \( z_0 = 0 \) et \( c \) est un nombre complexe donné (c = partie réelle + partie imaginaire i). 
La suite est itérée jusqu'à ce que la norme de \( z_n \) dépasse 2, indiquant que le point diverge. 
Si elle ne diverge pas après un nombre maximal d'itérations, on considère que le point fait partie de l'ensemble de Mandelbrot.


## Exemple d'exécution1
Entrez la partie réelle de c : 1 
Entrez la partie imaginaire de c : 0.5 
z(0) = 0 + 0 i 
z(1) = 1 + 0.5 i 
z(2) = 1.25 + 1.5 i 
z(3) = 0.4375 + 4.25 i 
Le complexe c = 1 + 0.5i diverge après 3 itération(s) dans la suite de Mandelbrot.
Cela signifie qu'il n'appartient pas à l'ensemble de Mandelbrot.

## Exemple d'exécution2
Entrez la partie réelle de c : 0 
Entrez la partie imaginaire de c : 0
z(0) = 0 + 0 i 
z(1) = 0 + 0 i 
z(2) = 0 + 0 i 
...
z(999) = 0 + 0 i 
Le complexe c = 0 + 0 diverge après 999 itération(s) dans la suite de Mandelbrot.
Cela signifie qu'il pourrait appartenir à l'ensemble de Mandelbrot.
