/*
 *  NeuroForgeur – Runtime ultra-léger pour Cortex-M4
 *  © 2025 – Licence MIT
 */

#include <stdint.h>
#include <string.h>

/* Mémoire réservée pour l'inference (12 Ko max) */
static int8_t  activations[12*1024];
static int32_t poids[3*1024];

/*
 *  Point d'entrée de l'inference.
 *  @param image  28x28 int8_t plat
 *  @return classe 0-9
 */
int8_t neuro_forger_infer(const int8_t* image)
{
    /* TODO: déployer le graphe généré par forgeur.py */
    (void)image;
    return 4;  /* chiffre magique temporaire */
}
