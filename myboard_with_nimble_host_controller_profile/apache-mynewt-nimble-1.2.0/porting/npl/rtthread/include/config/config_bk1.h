// /*
//  * SPDX-License-Identifier: Apache-2.0
//  *
//  * Date           Author       Notes
//  * 2018-12-29     ChenYong     first implementation
//  */

#ifndef __NUMBLE_CONFIG_H__
#define __NUMBLE_CONFIG_H__

// #include <rtconfig.h>

// /**
//  * Bluetooth role support
//  */
// #ifdef PKG_NIMBLE_ROLE_PERIPHERAL
// #define MYNEWT_VAL_BLE_ROLE_PERIPHERAL           (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_CENTRAL
// #define MYNEWT_VAL_BLE_ROLE_CENTRAL              (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_BROADCASTER
// #define MYNEWT_VAL_BLE_ROLE_BROADCASTER          (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_OBSERVER
// #define MYNEWT_VAL_BLE_ROLE_OBSERVER             (1)
// #endif

// #ifdef PKG_NIMBLE_MAX_CONNECTIONS
// #define MYNEWT_VAL_BLE_MAX_CONNECTIONS           (PKG_NIMBLE_MAX_CONNECTIONS)
// #endif

// #ifdef PKG_NIMBLE_MULTI_ADV_INSTANCES
// #define MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES       (PKG_NIMBLE_MULTI_ADV_INSTANCES)
// #endif

// #ifdef PKG_NIMBLE_WHITELIST
// #define MYNEWT_VAL_BLE_WHITELIST                 (1)
// #endif

// #ifdef PKG_NIMBLE_EXT_ADV
// #define MYNEWT_VAL_BLE_EXT_ADV                   (1)
// #endif

// #ifdef PKG_NIMBLE_EXT_ADV_MAX_SIZE
// #define MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE          (PKG_NIMBLE_EXT_ADV_MAX_SIZE)
// #endif

// /**
//  * Host Stack Configuration
//  */ 
// #ifdef PKG_NIMBLE_HOST_THREAD_STACK_SIZE
// #define MYNEWT_VAL_BLE_HOST_THREAD_STACK_SIZE    (PKG_NIMBLE_HOST_THREAD_STACK_SIZE)
// #endif

// #ifdef PKG_NIMBLE_HOST_THREAD_PRIORITY
// #define MYNEWT_VAL_BLE_HOST_THREAD_PRIORITY      (PKG_NIMBLE_HOST_THREAD_PRIORITY)
// #endif

// /**
//  * Mesh Configuration
//  */ 
// #ifdef PKG_NIMBLE_MESH
// #define MYNEWT_VAL_BLE_MESH                      (1)
// #endif

// #ifdef PKG_NIMBLE_MESH_DEVICE_NAME
// #define MYNEWT_VAL_BLE_MESH_DEVICE_NAME          PKG_NIMBLE_MESH_DEVICE_NAME
// #endif

// #ifdef PKG_NIMBLE_MESH_ADV_THREAD_STACK_SIZE
// #define MYNEWT_VAL_BLE_MESH_ADV_THREAD_STACK_SIZE (PKG_NIMBLE_MESH_ADV_THREAD_STACK_SIZE)
// #endif

// #ifdef PKG_NIMBLE_MESH_ADV_THREAD_PRIORITY
// #define MYNEWT_VAL_BLE_MESH_ADV_THREAD_PRIORITY  (PKG_NIMBLE_MESH_ADV_THREAD_PRIORITY)
// #endif

// #ifdef PKG_NIMBLE_MESH_CFG_CLI
// #define BLE_MESH_CFG_CLI                         (1)
// #endif

// /**
//  * Controller Configuration
//  */ 
// #ifdef PKG_NIMBLE_CTLR_THREAD_STACK_SIZE
// #define MYNEWT_VAL_BLE_CTLR_THREAD_STACK_SIZE   (PKG_NIMBLE_CTLR_THREAD_STACK_SIZE)
// #endif

// #ifdef PKG_NIMBLE_CTLR_THREAD_PRIORITY
// #define MYNEWT_VAL_BLE_CTLR_THREAD_PRIORITY     (PKG_NIMBLE_CTLR_THREAD_PRIORITY)
// #endif

// #ifdef PKG_NIMBLE_BSP_NRF52
// #define MYNEWT_VAL_BSP_NRF52                     (1)
// #endif

// #ifdef PKG_NIMBLE_BSP_NRF52840
// #define MYNEWT_VAL_BSP_NRF52840                  (1)
// #endif


// #ifdef PKG_NIMBLE_ROLE_PERIPHERAL
// #define MYNEWT_VAL_BLE_ROLE_PERIPHERAL           (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_CENTRAL
// #define MYNEWT_VAL_BLE_ROLE_CENTRAL              (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_BROADCASTER
// #define MYNEWT_VAL_BLE_ROLE_BROADCASTER          (1)
// #endif

// #ifdef PKG_NIMBLE_ROLE_OBSERVER
// #define MYNEWT_VAL_BLE_ROLE_OBSERVER             (1)
// #endif

// #ifdef PKG_NIMBLE_MAX_CONNECTIONS
// #define MYNEWT_VAL_BLE_MAX_CONNECTIONS           (PKG_NIMBLE_MAX_CONNECTIONS)
// #endif

// #ifdef PKG_NIMBLE_MULTI_ADV_INSTANCES
// #define MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES       (PKG_NIMBLE_MULTI_ADV_INSTANCES)
// #endif

// #ifdef PKG_NIMBLE_WHITELIST
// #define MYNEWT_VAL_BLE_WHITELIST                 (1)
// #endif

// #ifdef PKG_NIMBLE_EXT_ADV
// #define MYNEWT_VAL_BLE_EXT_ADV                   (1)
// #endif

// #ifdef PKG_NIMBLE_EXT_ADV_MAX_SIZE
// #define MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE          (PKG_NIMBLE_EXT_ADV_MAX_SIZE)
// #endif

// /**
//  * Host Stack Configuration
//  */ 
// #ifdef PKG_NIMBLE_HOST_THREAD_STACK_SIZE
// #define MYNEWT_VAL_BLE_HOST_THREAD_STACK_SIZE    (PKG_NIMBLE_HOST_THREAD_STACK_SIZE)
// #endif

// #ifdef PKG_NIMBLE_HOST_THREAD_PRIORITY
// #define MYNEWT_VAL_BLE_HOST_THREAD_PRIORITY      (PKG_NIMBLE_HOST_THREAD_PRIORITY)
// #endif

// /**
//  * Mesh Configuration
//  */ 
// #ifdef PKG_NIMBLE_MESH
// #define MYNEWT_VAL_BLE_MESH                      (1)
// #endif

// #ifdef PKG_NIMBLE_MESH_DEVICE_NAME
// #define MYNEWT_VAL_BLE_MESH_DEVICE_NAME          PKG_NIMBLE_MESH_DEVICE_NAME
// #endif

// #ifdef PKG_NIMBLE_MESH_ADV_THREAD_STACK_SIZE
// #define MYNEWT_VAL_BLE_MESH_ADV_THREAD_STACK_SIZE (PKG_NIMBLE_MESH_ADV_THREAD_STACK_SIZE)
// #endif

// #ifdef PKG_NIMBLE_MESH_ADV_THREAD_PRIORITY
// #define MYNEWT_VAL_BLE_MESH_ADV_THREAD_PRIORITY  (PKG_NIMBLE_MESH_ADV_THREAD_PRIORITY)
// #endif

// #ifdef PKG_NIMBLE_MESH_CFG_CLI
// #define BLE_MESH_CFG_CLI                         (1)
// #endif



#endif

