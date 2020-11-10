#ifndef CONFIG_H
#define CONFIG_H

#ifdef __cplusplus
    extern "C" {
#endif

#include "main.h"

/**
 * Definições Gerais
 */
#define DEBUG 0
#define DEBUG_MACHINE_MONITOR 1

#define CONFIG_WIFI_SSID        "SOLARFLATHOTEL"
#define CONFIG_WIFI_PASSWORD    "solar@2019"
//#define CONFIG_WIFI_SSID        "Alho_Home"
//#define CONFIG_WIFI_PASSWORD    "P!nn@pl#"

#define BOTAO_DESLIGA_MAQUINA           GPIO_NUM_5
#define BOTAO_PARADA_EMERGENCIA_MAQUINA GPIO_NUM_4

#ifdef __cplusplus
    }
#endif

#endif