#ifndef SAILTRACK_MODULE_CONFIG_H
#define SAILTRACK_MODULE_CONFIG_H

#define USE_ESP_IDF_LOG
#undef LOG_LOCAL_LEVEL
#define LOG_LOCAL_LEVEL ESP_LOG_INFO
#define TAG "SAILTRACK_MODULE"

#define TASK_HIGH_PRIORITY 6
#define TASK_MEDIUM_PRIORITY 4
#define TASK_LOW_PRIORITY 2

#define TASK_BIG_STACK_SIZE 4096
#define TASK_MEDIUM_STACK_SIZE 2048
#define TASK_SMALL_STACK_SIZE 1024

#define WIFI_SSID "SailTrack-Net"
#define WIFI_PASSWORD "sailtracknet"
#define WIFI_CONNECTION_TIMEOUT_MS 5 * 1e3
#define WIFI_RECONNECTION_TIMEOUT_MS 5 * 1e3
#define WIFI_SLEEP_DURATION_US 60 * 1e6
#define WIFI_GATEWAY IPAddress(192, 168, 42, 1)
#define WIFI_SUBNET IPAddress(255, 255, 255, 0)

#define MQTT_SERVER "192.168.42.1"
#define MQTT_PORT 1883
#define MQTT_USERNAME "mosquitto"
#define MQTT_PASSWORD "dietpi"
#define MQTT_CONNECTION_TIMEOUT_MS 50 * 1e3
#define MQTT_RECONNECTION_TIMEOUT_MS 5 * 1e3

#define STATUS_PUBLISH_RATE 0.1
#define STATUS_PUBLISH_PERIOD_MS 1000 / STATUS_PUBLISH_RATE

#endif
