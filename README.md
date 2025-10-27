# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

# Veille technologique
Question 1 : C++
Une notion dans le code que nous avons pas vue en cours que j'ai choisit, est la lecture d'information d'une ligne. Dans ce code, on lit les fichiers users.txt et books.txt pour pouvoir récupérer les objets user et book sur chaque ligne. Chaque lignes est ensuite envoyer à la fonction fromFileFormat() pour extraire les informations. 
La fonction ss() rend la ligne à un objet stringstream se qui permet la lecture. On l'initialise avec 'stringstream ss(line)'. La syntaxe de getline() est : getline(stream, str, delim) dans notre code, le stream est le ss. Le str est la chaîne où la valeur est stockée après la lecture. Le delim est un paramètre optionnel qui permet à la lecture de s'arrêter au charactère mit. La valeur de défaut de celle si est : "\n" dans notre cas c'est le '|'.
Sources : 
1. https://www.geeksforgeeks.org/cpp/getline-string-c/
2. https://www.geeksforgeeks.org/cpp/stringstream-c-applications/

Question 2 : Options de développement possible
Si Alexandrie pense agrandir sa bibliothèque la première solution plus adaptée pour la gestion qui me vient en tête est d'avoir une base de donnée sur le cloud. Si la bibliothèque pourrait monter jusquà des millions de livres c'est la meilleur chose à faire pour la gestion à mon avis. 