#ifndef SAILTRACK_MODULE_CALLBACKS_H
#define SAILTRACK_MODULE_CALLBACKS_H

class SailtrackModuleCallbacks {
    public:
        virtual void onWifiConnectionBegin() {}
        virtual void onWifiConnectionResult(wl_status_t status) {}
        virtual void onWifiDisconnected() {}

        virtual void onMqttConnectionBegin() {}
        virtual void onMqttConnectionResult(bool connected) {}
        virtual void onMqttDisconnected() {}
        virtual void onMqttMessage(const char * topic, const char * message) {}

        virtual DynamicJsonDocument getStatus();
};

#endif
