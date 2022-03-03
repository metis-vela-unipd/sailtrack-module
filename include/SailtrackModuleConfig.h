#ifndef SAILTRACK_MODULE_CONFIG_H
#define SAILTRACK_MODULE_CONFIG_H

#define TASK_HIGH_PRIORITY 3
#define TASK_MEDIUM_PRIORITY 2
#define TASK_LOW_PRIORITY 1

#define TASK_BIG_STACK_SIZE 8192
#define TASK_MEDIUM_STACK_SIZE 4096
#define TASK_SMALL_STACK_SIZE 2048

#define STATUS_PUBLISH_RATE 0.1
#define LOG_PUBLISH_RATE 0.1
#define OTA_HANDLE_RATE 1

#define WIFI_DEFAULT_SSID "SailTrack-Net"
#define WIFI_DEFAULT_PASSWORD "sailtracknet"
#define WIFI_DEFAULT_GATEWAY IPAddress(192, 168, 42, 1)
#define WIFI_DEFAULT_SUBNET IPAddress(255, 255, 255, 0)
#define WIFI_CONNECTION_TIMEOUT_MS 10 * 1e3
#define WIFI_SLEEP_DURATION_US 60 * 1e6

#define MQTT_DEFAULT_HOST WIFI_DEFAULT_GATEWAY
#define MQTT_DEFAULT_PORT 1883
#define MQTT_DEFAULT_USERNAME "mosquitto"
#define MQTT_DEFAULT_PASSWORD "dietpi"
#define MQTT_CONNECTION_TIMEOUT_MS 20 * 1e3
#define MQTT_OUTPUT_BUFFER_SIZE 800

#endif
