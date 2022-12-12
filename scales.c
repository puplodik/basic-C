#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


char* A;

char* input() {
    char* Answer = malloc(10);
    scanf("%s", Answer);
    return Answer;
}

void Space(int Spaces) {
    for (int i = 0; i < Spaces; i++) {
        printf(" ");
    }
}

void confirmation(){
    printf("\n");
    Space(8);
    printf("WHICH TYPE OF SCALE IS WANTED? ");
    while(1){
        A = input();
        if (strcmp(A, "stop") == 0) {
            break;
        }
        else if (strcmp(A, "ma") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Major scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d  Ad    Cd  Dd  Ed\n");
            printf("\n");
        }
        else if (strcmp(A, "na") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Nat'l minor scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d      Cd\n");
            printf("\n");
        }
         else if (strcmp(A, "ha") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Harm'c minor scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d      Cd    Ed\n");
            printf("\n");
        }
         else if (strcmp(A, "me") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Mel'c minor scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d      Cd  Dd  Ed\n");
            printf("\n");
        }
        else if (strcmp(A, "do") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Dorian mode on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d      Cd  Dd\n");
            printf("\n");
        }
        else if (strcmp(A, "ph") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Phrygian mode on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("Cd\n");
            printf("\n");
        }
        else if (strcmp(A, "ly") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Lydian mode on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d  Ad  Bd  Cd  Dd  Ed\n");
            printf("\n");
        }
        else if (strcmp(A, "mi") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Mixolydian node on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d  Ad    Cd  Dd\n");
            printf("\n");
        }
        else if (strcmp(A, "lo") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Locrian Mode on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("\n");
            printf("\n");
        }
        else if (strcmp(A, "hu") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Hung'n minor scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d    Bd  Cd    Ed\n");
            printf("\n");
        }
        else if (strcmp(A, "wh") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Whole tone scale on\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("6d  Ad  Bd\n");
            printf("\n");
        }
        else if (strcmp(A, "macb") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Major scale on Cb\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("Cb  Db  Eb  Fb  Gb  Ab  Bb  Cb\n");
            printf("\n");
        }
        else if (strcmp(A, "lydb") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Lydian mode on Db\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("Db  Eb  F   G   Ab  Bb  C   Db\n");
            printf("\n");
        }
        else if (strcmp(A, "mieb") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Mixolydian node on Eb\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("Eb  F   G   Ab  Bb  C   Db  Eb\n");
            printf("\n");
        }
        else if (strcmp(A, "whgb") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Whole tone scale on Gb\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("Gb  Ab  Bb  C   EbbFb  Gb\n");
            printf("\n");
        }
        else if (strcmp(A, "naf#") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Nat'l minor scale on F#\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("F#  G#  A   B   C#  D   E   F#\n");
            printf("\n");
        }
        else if (strcmp(A, "hag#") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Harm'c minor scale on G#\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("G#  A#  B   C#  D#  E   Fx  G#\n");
            printf("\n");
        }
        else if (strcmp(A, "mea#") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Mel'c minor scale on A#\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("A#  B#  C#  D#  E#  Fx  Gx  A#\n");
            printf("\n");
        }
        else if (strcmp(A, "loc#") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Locrian Mode on C#\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("C#  D   E   F#  G   A   B   C#\n");
            printf("\n");
        }
        else if (strcmp(A, "doc") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Dorian mode on C\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("C   D   Eb  F   G   A   Bb  C\n");
            printf("\n");
        }
        else if (strcmp(A, "phd") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Phrygian mode on D\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("D   Eb  F   G   A   Bb  C   D\n");
            printf("\n");
        }
        else if (strcmp(A, "hue") == 0) {
            printf("\n");
            Space(18);
            printf("SCALE ASKED --------");
            printf("Hung'n minor scale on E\n");
            printf("\n");
            printf("ANSWER (in letter names) ----------\n");
            printf("\n");
            Space(16);
            printf("E   F#  G   A#  B   C   D#  E\n");
            printf("\n");
        }
        confirmation();
        //  else if (getch()) {
        //     Else();
        // }
    }
}



int main(){
    Space(28);
    printf("SAFE\n");
    Space(20);
    printf("CREATIVE CONFUTING\n");
    Space(18);
    printf("MORRISTOWN, NEW JERSEYG\n");
    printf("\n\nELEVEN SCALE TYPES -- MAJOR, MINOR, MODAL, AND WHOLE TONE\n");
    printf("This program prints in letter names one octave upward,");
    printf("the major,\n");
    printf("the natural, harmonic, melodic, and Hungarian minors, the\n");
    printf("dorian, phrygian, lydian, mixolydian, and locrian modes, and\n");
    printf("the whole tone scales.\n");
    printf("\n");
    printf("Use a 3- or 4-character input: the first 2 char's are the scale\n");
    printf("type, and the 3rd char'r is the single letter tonic, or the\n");
    printf("last two char's are the tonic degree or the key signature.\n");
    printf("SCALE TYPES-- ma na ha me do ph ly mi lo hu and wh\n");
    printf("Input either a tonic or a signature.\n");
    printf("EXAMPLES: macb lydb mieb whgb naf# hag# mea# loc# doc phd hue\n");
    confirmation();
}