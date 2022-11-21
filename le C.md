# à savoir
  - Inventer au cours de l'années 1972
  - Plusieurs version (normes)
  - à été utiliser pour créer unix (ancêtre de linux), microsoft windows
  

# C'est quoi le C ? :
  - Travail directement dans la mémoire 
  - Langage compilé
  - Compilation) Syntaxe --> traduit --> Binaire
  - Un des plus vieux langage encore beaucoup utilisé
  - bas niveau (proche du langage machine (((Complex))) 
  - Syntaxe simplifier
  - Base de java, php, c++

# Avantages :
  - Grande communauté (Populaire)
  - Compatible avec beaucoup de machine
  - Langage ouvert (appartiens à personne) (standard ouvert) (Modifiable)

# Désavantage :
  - Difficile de faire de la programmation orienter objet
  - Permet pas de créer des espaces des noms
  - Failles de sécurité

# Utiliser dans quoi :
  - Création d'utilitaire
  - Systèmes d'exploitation
  - Jeux vidéo
  - Créer des applications (jeu, bureau, web, phone)

# Pourquoi utiliser :
# Comment ça marche : 
  - Langage de programmation impératif
  - Séquentiel
  - Chacune des tâches une par une jusqu'à la fin

#
#
#



C et C++ Très similaire

C++ pas meilleur que C permet de programmer différemment



apostrophe = un seul caractères '' cote
guillemet = chaîne de caractères "" = double cote

Instruction pré-pocesseur traitement du programmer avant compilation

tojours mettre nom : main

variable --> stocker valeur ( faire opérations)
  
type de programme existant : Graphique, console

# Progrme en C :

Le code minimum sers de base pour la plupart des programmes en langage C
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
```

## Directives de pré-processeur

#include --> Directives de pré-processeur

à quoi sa sers : Ces lignes demandent à inclure des fichiers au projet

les fichiers inclus sont des bibliothèques (ou librairies)
ces bibliothèque contienntent du codes tout prêt qui permet d'afficher du tecte à l'écran

```c
 #include <stdio.h>
```

## Fonction

main = nom de la fonction, signifie principale, fonction principale du programme, le programme commence toujours par la fonction main

fonction à un début et une fin délimité par des acolades (Ouvrir, fermer)

la fonction se trouve entre les acolades

les lignes à l'intérieur de la fonction sont des instructions, Chaque instruction est une commande à l'ordinateur. Chacune de ces lignes demande à l'ordinateur de faire quelque chose de précis.

Toutes les instructions se terminent obligatoirement par des points virgules ```;```

    ;



return 0 --> indique qu'on arrive à la fin de la fonction et renvoi le chiffre 0, si la fonction renvoie une autre valeur cela signigie qu'il y a une erreur

chaque programme une fois terminer renvoie une valeur pour dire que tout c'est bien passé

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
```

```printf()``` est une fonction qu'on apelle dans ```main``` qui permet d'afficher un texte, il faut préciser le text ```printf("Hello world");```

```\n``` signifie retour à la ligne



autre façon d'écrire et plus courante

// ATTENTION à REGARDER CE QUE ça SIGNIFIE
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello world!\n");
    return 0;
}
```
// ATTENTION à REGARDER CE QUE ça SIGNIFIE


# Lancer un programme en C depuis le terminal marche à suivre :

# Aide / Lien / Source

https://openclassrooms.com/en/courses/19980-apprenez-a-programmer-en-c/7669321-ecrivez-votre-premier-programme