/******************************************************************************
**	COPYRIGHT (c) 2016		Bosch Connected Devices and Solutions GmbH
**
**	The use of this software is subject to the XDK SDK EULA
**
*******************************************************************************
**
**	OBJECT NAME:	mqttConfig.h
**
**	DESCRIPTION:	Configuration header for the MQTT Paho Client
**
**	PURPOSE:        Contains the common macro, typedef, variables and function
**	                definitions for the entire project
**
**	AUTHOR(S):      Bosch Connected Devices and Solutions GmbH (BCDS)
**
**	Revision History:
**
**	Date			 Name		Company      Description
**  2016.Apr         crk        BCDS         Initial Release
**
*******************************************************************************/

/* header definition ******************************************************** */
#ifndef _MQTT_CONFIG_H_
#define _MQTT_CONFIG_H_

/* Config interface declaration ********************************************** */

/* Config type and macro definitions */
#define XDK_PAHO_DEMO_REVISION       "0.2.0"

#define NUMBER_UINT8_ZERO		     UINT8_C(0)     /**< Zero value */
#define NUMBER_UINT32_ZERO 		     UINT32_C(0)    /**< Zero value */
#define NUMBER_UINT16_ZERO 		     UINT16_C(0)    /**< Zero value */
#define NUMBER_INT16_ZERO 		     INT16_C(0)     /**< Zero value */

#define POINTER_NULL 			     NULL          /**< ZERO value for pointers */

#define TIMER_AUTORELOAD_ON          1             /**< Auto reload timer */
#define TIMER_AUTORELOAD_OFF         0             /**< One Shot Timer */

#define ENABLED         1
#define DISABLED        0

#warning Provide Default WLAN and MQTT Configuration Here
// Default Network Configuration Settings
#define	WLAN_SSID	  		"xiang"      	    /**< WLAN SSID Name */
#define	WLAN_PWD	  		"xiang123"          /**< WLAN PWD */
#define	MQTT_CLIENT_ID	    "pub_v1"            /**< MQTT Client ID */
#define MQTT_BROKER_NAME    "113.59.226.244"  /**< MQTT Broker of Yulinfeng Server*/
//#define MQTT_BROKER_NAME    "120.55.163.126"    /**< MQTT Broker of LiXiang Server */
#define MQTT_PORT           1883                /**< MQTT Port Number */

/***cat1 server ip and port**/
#define CAT1_SERVER_IP				"\"113.59.226.244\""     /**< MQTT Broker of Yulinfeng Server*/
//#define CAT1_SERVER_IP					"\"120.55.163.126\""     /**< MQTT Broker of LiXiang Server */
#define	CAT1_SERVER_PORT				"\"1883\""


// Default Data Configuration Settings
#define STREAM_RATE         1000/portTICK_RATE_MS /**< Stream Data Rate in MS */
//#define STREAM_RATE         4000
#define ACCEL_EN            ENABLED               /**< Accelerometer Data Enable */
#define GYRO_EN             ENABLED               /**< Gyroscope Data Enable */
#define MAG_EN              ENABLED               /**< Magnetometer Data Enable */
#define ENV_EN              ENABLED               /**< Environmental Data Enable */
#define LIGHT_EN            ENABLED               /**< Ambient Light Data Enable */
#define ADC_EN            	ENABLED               /**< Ambient water Data Enable */


#define WDG_FREQ            1000
#define WDG_TIMEOUT         2000

/* global function prototype declarations */

/* global variable declarations */

/* global inline function definitions */

#endif /* _MQTT_CONFIG_H_ */

/** ************************************************************************* */
