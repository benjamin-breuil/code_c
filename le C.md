# à savoir
  - Inventer au cours de l'années 1972
  - Plusieurs version (normes)
  - à été utiliser pour créer unix (ancêtre de linux), microsoft windows
  - Très facile de s'informer car populaire

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
  - Très facile de s'informer car populaire

# Désavantage :
  - Difficile de faire de la programmation orienter objet
  - Permet pas de créer des espaces des noms
  - Failles de sécurité

# Utiliser dans quoi :
  - Création d'utilitaire
  - Systèmes d'exploitation
  - Jeux vidéo
  - Moins utiliser pour créer des applications (jeu, bureau, web, phone) car d'autre logiciel sont plus adaptées

# Pourquoi utiliser :


   
# Comment ça marche : 
  - Langage de programmation impératif
  - Séquentiel
  - Chacune des tâches une par une jusqu'à la fin

# Caractéristique du C
- Impératif, généraliste, simple ( impératif = principe de langage) 
- Langage Bas niveau
- Supporte les types énumérés, composé, opaque
- Le C ne gére pas les objets, pas d'espace de nom
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

## Variables

Variable = données stocker dans la ram

Intérieur mémoire vive --> adresse = nombre qui permet à l'ordinateur de se repérer dans la mèmoire vive (commence par 0)

chaque adresse on peut stocker une valeur (Adresse | Valeur)

Ordinateur va chercher adresse pour connaître la valeur

Une valeur : c'est le nombre qu'elle stocke, par exemple 5.

Un nom : c'est ce qui permet de la reconnaître. En programmant en C, on n'aura pas à retenir l'adresse mémoire à la place, on va juste indiquer des noms de variables. C'est le compilateur qui fera la conversion entre le nom et l'adresse.

Variable en C : camelCase, tiret_du_huit, minuscule

**Il existe plusieur type de variable :** 

Voici les principaux types de variables existant en langage C, que l'on peut classer en deux catégories :

ceux qui permettent de stocker des nombres entiers : ```signed char```  , ```int```    ,   ```long``` ;

ceux qui permettent de stocker des nombres décimaux (aussi appelés "nombres flottants") : ```float```  ,  ```double``` .

Créer une variable :



```c
int age
```
Les variables ce déclare au debut d'une fonction

```c
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) // Équivalent de int main()
{
  int age; 
     
  return 0;
}
```

donner une valeur à la variable il faut indiquer le nom de la variable puis faire un signe égal et indiquer la valeur

quand la variable est seulement déclarer la valeur peut être n'importe quoi si l'adresse mémoire n'a jamais été modifié, il peut avoir le reste d'un vieux programme.

donc après avoir déclarer une variable il faut toujours lui affecté une valeur, pour être sûr que la valeur de la variable est correct

```c
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) // Équivalent de int main()
{
  int age = 5;
     
  return 0;
}
```

comment être sur qu'une variable a une valeur constance, devant le type mettre ```const```

(par convention les const s'écrivent toujours en majuscule pour différencier les const des variabbles)

```c
const int AGE = 5;
```

**afficher une variable :**

**Demande**

Demander un chiffre ```scanf```

# Lancer un programme en C depuis le terminal marche à suivre :

# Compiler c'est quoi ?
# Switch

Switch est une structure conditionel

avec switch on peut uniquement traiter l'égaliter
# Raccourcie

En C il existe des techniques permettant de raccourcir l'écriture d'une opérations ou des opératoins

C'est pratique lorsque on a des opérations répétitives grâce à l'incrémentation

```c
int nombre = 2;

nombre += 4; // nombre vaut 6...
nombre -= 3; // ... nombre vaut maintenant 3
nombre *= 5; // ... nombre vaut 15
nombre /= 3; // ... nombre vaut 5
nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)
```
# Conditions

# Pourquoi préciser le type ?

Quand on déclare une variable, la variable va réserver un bout de mémoire dans l'ordinateur et la taille du bout de mémoire varie en fonction du type

```c
char caractere; // 1 octet (8 bits) : -128 à 127
unsigned char caractere; // 1 octet (8 bits) : 0 à 255
int nombreEntier; // 2 à 4 octets : -32 768 à 32,767 ou de -2 147 483 648 à 2 147 483 647
```

# Boucles 

3 types de boucles

  - while
  - do while
  - for

## Boucles "while"

While signifie "tant que"

```c
while (/* Condition */)
{
    // Instructions à répéter
}
```

```c
int nombreEntre = 0;

while (nombreEntre != 47)
{
    printf("Tapez le nombre 47 ! ");
    scanf("%d", &nombreEntre);
}
```

Tant que le chiffre 47 est pas tapé le programme ne peut pas s'arrêter

on va demander à l'utilisateur de taper le nombre 47. Tant qu'il n'a pas tapé le nombre 47, on lui redemande le nombre. Le programme ne pourra s'arrêter que si l'utilisateur tape le nombre 47 

```c
    while (compteur < 10)
    {
        printf("Bienvenue !\n");
        compteur++;
    }
```

```c
  while (1)
  {
      printf("Boucle infinie\n");
  }
```

La boucle est infinie car 1 = vrai et vu que la condition est toujours vrai la boucle ne s'arrêtera jamais

Le programme ne s'arrête pas tant que le compteur n'est pas à 10, cela veut dire que le programme va imprimé 10 fois "Bienvenue"
compteur++ sers a incrémenter +1 à chaque boucle c'est quand le chiffre va arriver a sa 10ème incrémentation que la boucle s'arrêtera

## Boucles "do while"

## Boucles "for"

```c
  int compteur;

  for (compteur = 0 ; compteur < 10 ; compteur++)
  {
      printf("Bienvenue !\n");
  }
```
## En résumé

    Les boucles sont des structures qui nous permettent de répéter une série d'instructions plusieurs fois.

    Il existe plusieurs types de boucles : while, do… while et for. Certaines sont plus adaptées que d'autres selon les cas.

    "for" est probablement celle qu'on utilise le plus. On y fait très souvent des incrémentations ou des décrémentations de variables.
# Booléen

Vrai n'est pas true

  true = 1  

Faux n'est pas false

  false = 0

# Aide / Lien / Source

https://openclassrooms.com/en/courses/19980-apprenez-a-programmer-en-c/7669321-ecrivez-votre-premier-programme