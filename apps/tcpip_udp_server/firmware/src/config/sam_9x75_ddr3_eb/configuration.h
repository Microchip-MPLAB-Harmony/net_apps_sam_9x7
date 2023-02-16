/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************

#define SYS_CMD_ENABLE
#define SYS_CMD_DEVICE_MAX_INSTANCES       SYS_CONSOLE_DEVICE_MAX_INSTANCES
#define SYS_CMD_PRINT_BUFFER_SIZE          4096
#define SYS_CMD_BUFFER_DMA_READY


/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (32)
#define SYS_TIME_HW_COUNTER_PERIOD                  (4294967295U)
#define SYS_TIME_HW_COUNTER_HALF_PERIOD             (SYS_TIME_HW_COUNTER_PERIOD>>1)
#define SYS_TIME_CPU_CLOCK_FREQUENCY                (800000000)
#define SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES    (470)


#define SYS_DEBUG_ENABLE
#define SYS_DEBUG_GLOBAL_ERROR_LEVEL       SYS_ERROR_DEBUG
#define SYS_DEBUG_BUFFER_DMA_READY
#define SYS_DEBUG_USE_CONSOLE


#define SYS_CONSOLE_DEVICE_MAX_INSTANCES   			1
#define SYS_CONSOLE_UART_MAX_INSTANCES 	   			1
#define SYS_CONSOLE_USB_CDC_MAX_INSTANCES 	   		0
#define SYS_CONSOLE_PRINT_BUFFER_SIZE        		200


#define SYS_CONSOLE_INDEX_0                       0






// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** MIIM Driver Configuration ***/
#define DRV_MIIM_ETH_MODULE_ID_0                GMAC_BASE_ADDRESS
#define DRV_MIIM_DRIVER_INDEX_0                 0
#define DRV_MIIM_INSTANCES_NUMBER           1
#define DRV_MIIM_INSTANCE_OPERATIONS        4
#define DRV_MIIM_INSTANCE_CLIENTS           2
#define DRV_MIIM_CLIENT_OP_PROTECTION   false
#define DRV_MIIM_COMMANDS   false
#define DRV_MIIM_DRIVER_OBJECT              DRV_MIIM_OBJECT_BASE_Default            





// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************


/*** DNS Client Configuration ***/
#define TCPIP_STACK_USE_DNS
#define TCPIP_DNS_CLIENT_SERVER_TMO					60
#define TCPIP_DNS_CLIENT_TASK_PROCESS_RATE			200
#define TCPIP_DNS_CLIENT_CACHE_ENTRIES				5
#define TCPIP_DNS_CLIENT_CACHE_ENTRY_TMO			0
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV4_ADDRESS		5
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV6_ADDRESS		1
#define TCPIP_DNS_CLIENT_ADDRESS_TYPE			    IP_ADDRESS_TYPE_IPV4
#define TCPIP_DNS_CLIENT_CACHE_DEFAULT_TTL_VAL		1200
#define TCPIP_DNS_CLIENT_LOOKUP_RETRY_TMO			2
#define TCPIP_DNS_CLIENT_MAX_HOSTNAME_LEN			64
#define TCPIP_DNS_CLIENT_MAX_SELECT_INTERFACES		4
#define TCPIP_DNS_CLIENT_DELETE_OLD_ENTRIES			true
#define TCPIP_DNS_CLIENT_CONSOLE_CMD               	true
#define TCPIP_DNS_CLIENT_USER_NOTIFICATION   false


/*** GMAC Configuration ***/
#define DRV_GMAC
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_GMAC_RX_BUFF_SIZE_DUMMY            64
#define TCPIP_GMAC_TX_BUFF_SIZE_DUMMY            64
/*** QUEUE 0 TX Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE0                 1536
/*** QUEUE 0 RX Configuration ***/
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE0                    1536
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE0            8
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE0              2
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE0         1
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE0             2
/*** QUEUE 1 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE1             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE1                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE1             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE1                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE1             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE1               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE1          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE1              0
/*** QUEUE 2 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE2             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE2                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE2             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE2                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE2             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE2               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE2          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE2              0
/*** QUEUE 3 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE3             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE3                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE3             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE3                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE3             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE3               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE3          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE3              0
/*** QUEUE 4 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE4             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE4                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE4             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE4                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE4             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE4               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE4          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE4              0
/*** QUEUE 5 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE5             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE5                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE5             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE5                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE5             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE5               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE5          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE5              0
#define TCPIP_GMAC_RX_FILTERS                       \
                                                        TCPIP_MAC_RX_FILTER_TYPE_BCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_MCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_UCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_CRC_ERROR_REJECT |\
                                                          0
       
#define TCPIP_GMAC_SCREEN1_COUNT_QUE        0 
#define TCPIP_GMAC_SCREEN2_COUNT_QUE        0       

#define TCPIP_GMAC_ETH_OPEN_FLAGS                   \
                                                        TCPIP_ETH_OPEN_AUTO |\
                                                        TCPIP_ETH_OPEN_FDUPLEX |\
                                                        TCPIP_ETH_OPEN_HDUPLEX |\
                                                        TCPIP_ETH_OPEN_1000 |\
                                                        TCPIP_ETH_OPEN_100 |\
                                                        TCPIP_ETH_OPEN_10 |\
                                                        TCPIP_ETH_OPEN_MDIX_AUTO |\
                                                        TCPIP_ETH_OPEN_RGMII |\
                                                        0

#define TCPIP_GMAC_MODULE_ID                       GMAC_BASE_ADDRESS

#define TCPIP_INTMAC_PERIPHERAL_CLK                 266666666

#define DRV_GMAC_RX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)           
#define DRV_GMAC_TX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)       
#define TCPIP_GMAC_TX_PRIO_COUNT                1
#define TCPIP_GMAC_RX_PRIO_COUNT                1
#define DRV_GMAC_NUMBER_OF_QUEUES               6
#define DRV_GMAC_RMII_MODE                      0




/*** ICMPv4 Server Configuration ***/
#define TCPIP_STACK_USE_ICMP_SERVER
#define TCPIP_ICMP_ECHO_ALLOW_BROADCASTS    false



/*** UDP Configuration ***/
#define TCPIP_UDP_MAX_SOCKETS		                	10
#define TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE		    	512
#define TCPIP_UDP_SOCKET_DEFAULT_TX_QUEUE_LIMIT    	 	3
#define TCPIP_UDP_SOCKET_DEFAULT_RX_QUEUE_LIMIT			3
#define TCPIP_UDP_USE_POOL_BUFFERS   false
#define TCPIP_UDP_USE_TX_CHECKSUM             			true
#define TCPIP_UDP_USE_RX_CHECKSUM             			true
#define TCPIP_UDP_COMMANDS   false
#define TCPIP_UDP_EXTERN_PACKET_PROCESS   false



/*** DHCP Configuration ***/
#define TCPIP_STACK_USE_DHCP_CLIENT
#define TCPIP_DHCP_TIMEOUT                          10
#define TCPIP_DHCP_TASK_TICK_RATE                   5
#define TCPIP_DHCP_HOST_NAME_SIZE                   20
#define TCPIP_DHCP_CLIENT_CONNECT_PORT              68
#define TCPIP_DHCP_SERVER_LISTEN_PORT               67
#define TCPIP_DHCP_CLIENT_CONSOLE_CMD               true

#define TCPIP_DHCP_USE_OPTION_TIME_SERVER           0
#define TCPIP_DHCP_TIME_SERVER_ADDRESSES            0
#define TCPIP_DHCP_USE_OPTION_NTP_SERVER            0
#define TCPIP_DHCP_NTP_SERVER_ADDRESSES             0
#define TCPIP_DHCP_ARP_LEASE_CHECK_TMO              1000
#define TCPIP_DHCP_WAIT_ARP_FAIL_CHECK_TMO          10



/*** ARP Configuration ***/
#define TCPIP_ARP_CACHE_ENTRIES                 		5
#define TCPIP_ARP_CACHE_DELETE_OLD		        	true
#define TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO			1200
#define TCPIP_ARP_CACHE_PENDING_ENTRY_TMO			60
#define TCPIP_ARP_CACHE_PENDING_RETRY_TMO			2
#define TCPIP_ARP_CACHE_PERMANENT_QUOTA		    		50
#define TCPIP_ARP_CACHE_PURGE_THRESHOLD		    		75
#define TCPIP_ARP_CACHE_PURGE_QUANTA		    		1
#define TCPIP_ARP_CACHE_ENTRY_RETRIES		    		3
#define TCPIP_ARP_GRATUITOUS_PROBE_COUNT			1
#define TCPIP_ARP_TASK_PROCESS_RATE		        	2000
#define TCPIP_ARP_PRIMARY_CACHE_ONLY		        	true
#define TCPIP_ARP_COMMANDS false



	/*** tcpip_cmd Configuration ***/
	#define TCPIP_STACK_COMMAND_ENABLE



/* Network Configuration Index 0 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX0 "GMAC"
#define TCPIP_IF_GMAC_SAM9X7  

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX0              "MCHPBOARD_C"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX0               "00:04:25:1C:A0:02"

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX0         "192.168.100.11"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX0            "255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX0            "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX0                "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX0         "0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX0         "full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX0            \
                                                    TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_IP_STATIC
                                                    
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX0         DRV_GMAC_Object


#define TCPIP_STACK_NETWORK_INTERAFCE_COUNT  	1






#define DRV_KSZ9131_PHY_CONFIG_FLAGS       ( 0 \
                                                    | DRV_ETHPHY_CFG_RGMII \
                                                    | DRV_ETHPHY_CFG_DEFAULT \
                                                    )

#define DRV_KSZ9131_PHY_LINK_INIT_DELAY        500
#define DRV_KSZ9131_PHY_ADDRESS                7
#define DRV_KSZ9131_PHY_PERIPHERAL_ID          GMAC_BASE_ADDRESS
#define DRV_ETHPHY_KSZ9131_NEG_INIT_TMO        1
#define DRV_ETHPHY_KSZ9131_NEG_DONE_TMO        2000
#define DRV_ETHPHY_KSZ9131_RESET_CLR_TMO       500



/*** IPv4 Configuration ***/
#define TCPIP_IPV4_ARP_SLOTS                        10
#define TCPIP_IPV4_EXTERN_PACKET_PROCESS   false

#define TCPIP_IPV4_COMMANDS false

#define TCPIP_IPV4_FORWARDING_ENABLE    false 





/*** TCPIP Heap Configuration ***/
#define TCPIP_STACK_USE_INTERNAL_HEAP
#define TCPIP_STACK_DRAM_SIZE                       39250
#define TCPIP_STACK_DRAM_RUN_LIMIT                  2048

#define TCPIP_STACK_MALLOC_FUNC                     malloc

#define TCPIP_STACK_CALLOC_FUNC                     calloc

#define TCPIP_STACK_FREE_FUNC                       free



#define TCPIP_STACK_HEAP_USE_FLAGS                   TCPIP_STACK_HEAP_FLAG_ALLOC_UNCACHED

#define TCPIP_STACK_HEAP_USAGE_CONFIG                TCPIP_STACK_HEAP_USE_DEFAULT

#define TCPIP_STACK_SUPPORTED_HEAPS                  1




// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Stack Configuration
// *****************************************************************************
// *****************************************************************************

#define TCPIP_STACK_USE_IPV4
#define TCPIP_STACK_USE_UDP

#define TCPIP_STACK_TICK_RATE		        		5
#define TCPIP_STACK_SECURE_PORT_ENTRIES             10

#define TCPIP_STACK_ALIAS_INTERFACE_SUPPORT   false

#define TCPIP_PACKET_LOG_ENABLE     0

/* TCP/IP stack event notification */
#define TCPIP_STACK_USE_EVENT_NOTIFICATION
#define TCPIP_STACK_USER_NOTIFICATION   false
#define TCPIP_STACK_DOWN_OPERATION   true
#define TCPIP_STACK_IF_UP_DOWN_OPERATION   true
#define TCPIP_STACK_MAC_DOWN_OPERATION  true
#define TCPIP_STACK_INTERFACE_CHANGE_SIGNALING   false
#define TCPIP_STACK_CONFIGURATION_SAVE_RESTORE   true
#define TCPIP_STACK_EXTERN_PACKET_PROCESS   false
#define TCPIP_STACK_RUN_TIME_INIT   false

#define TCPIP_STACK_INTMAC_COUNT           1







// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
