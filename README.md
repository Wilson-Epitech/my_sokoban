<div align="center">

# my_sokoban

**Le jeu de Sokoban, dans le terminal.**

<img alt="C" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> <img alt="ncurses" src="https://img.shields.io/badge/ncurses-4B4B4B?style=for-the-badge"/> <img alt="Make" src="https://img.shields.io/badge/Make-427819?style=for-the-badge&logo=gnu&logoColor=white"/>

<sub>Projet solo · 2022</sub>

</div>

<br/>

<p align="center"><img src=".github/assets/my_sokoban.gif" alt="my_sokoban" width="820"/></p>

## En deux mots

Pousser toutes les caisses (`X`) sur leurs emplacements (`O`), au clavier, avec ncurses. Les niveaux sont de simples fichiers texte.

## Ce que ça fait

- Chargement et validation des niveaux depuis un fichier
- Déplacements aux flèches, poussée de caisses, collisions avec les murs
- Détection de la victoire
- Niveaux d'exemple dans [`examples/`](examples)

## Sous le capot

La carte est chargée dans un tableau de chaînes. À chaque touche, on calcule la case visée : si c'est une caisse, on vérifie que la case suivante est libre avant de pousser. 

## Lancer le projet

```bash
make
./my_sokoban examples/level1.txt
```
