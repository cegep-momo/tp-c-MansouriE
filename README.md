# 2397233

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
## Question 1 : C++
Une notion dans le code que nous n'avons pas vue en cours que j'ai choisie, est la lecture d'informations d'une ligne. Dans ce code, on lit les fichiers users.txt et books.txt pour pouvoir récupérer les objets user et book sur chaque ligne. Chaque ligne est ensuite envoyée à la fonction fromFileFormat() pour extraire les informations. 
La fonction ss() rend la ligne à un objet stringstream ce qui permet la lecture. On l'initialise avec 'stringstream ss(line)'. La syntaxe de getline() est : getline(stream, str, delim) Dans notre code, le stream est le ss. Le str est la chaîne où la valeur est stockée après la lecture. Le delim est un paramètre optionnel qui permet à la lecture de s'arrêter au caractère mis. La valeur de défaut de celle-ci est : "\n" Dans notre cas, c'est le '|'.\
### Sources : 
1. https://www.geeksforgeeks.org/cpp/getline-string-c/
2. https://www.geeksforgeeks.org/cpp/stringstream-c-applications/
\
## Question 2 : Options de développement possible
Si Alexandrie pense agrandir sa bibliothèque la première solution pour la gestion qui me vient en tête est d'avoir une base de données sur le cloud. Si la bibliothèque pourrait monter jusqu'à des millions de livres, c'est la meilleure chose à faire pour la gestion à mon avis. Je lui propose une base données avec AWS, les services des Amazons lui permetterons de mieux géré sa base de données et lui offrerons une sécurité bien mieux pour ces données. Pour interfacer cela, il aura besoin d'un environnement de développement AWS Cloud9 EC2. Ensuite, installer g++ et les packages requis. De plus, il aura besoin de cmake, ce qu'il utilise déjà, donc aucune installation pour cela. Par la suite, il faut installer les SDK de c++ pour pouvoir communiquer avec les serveurs AWS. Il devrait refaire son fichier CMakeLists pour pouvoir interagir avec Amazon. Avec tout cela de fait, il pourra exécuter son code C++ avec une base de données sur AWS. Pour plus de détails sur l'installation et les commandes, je lui propose le guide d'Amazon : https://docs.aws.amazon.com/cloud9/latest/user-guide/sample-cplusplus.html.
### Source : https://docs.aws.amazon.com/cloud9/latest/user-guide/sample-cplusplus.html