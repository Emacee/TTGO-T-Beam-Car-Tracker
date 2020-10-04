#ifndef __GPS_H__
#define __GPS_H__

#include <TinyGPS++.h>
#include <HardwareSerial.h>

#define GPS_TX 34 // Hardware v1.1 compatible
#define GPS_RX 12 // Hardware v1.1 compatible

class gps
{
    public:
        void init();
        bool checkGpsFix();
        void getLatLon(double* lat, double* lon, double *alt, double *kmph, int *sats);
        void encode();

    private:
        char t[32]; // used to sprintf for Serial output
        TinyGPSPlus tGps;
};

#endif
