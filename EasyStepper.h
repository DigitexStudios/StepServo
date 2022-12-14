/*
    EasyStepper.h - Library for easy stepper control
    Created by Liam Timpane, June 30, 2022
    Copyright (c) Liam Timpane, 2022. All rights reserved.
*/

#ifndef EasyStepper_h
#define EasyStepper_h

#include <Arduino.h>

class EasyStepper
{
    public:
        EasyStepper(int stepPin, int dirPin, int enPin);
        void run();
        void moveTo(double deg);
        void moveBy(double deg);
        void setEndStops(double startDeg, double endDeg);
        void setRPM(double RPM);
        void setMicrosteps(double microStps);
        void enable();
        void disable();
        void useBlockingMode(bool state);
        double endStop1;
        double endStop2;
        double RPM;
        double microSteps;
        void setStepAngle(double angle);
        double stepAngle;
        bool endStopCollision;
        bool enabled;
        bool blocking;
        double currentAngle;
        void zero();
        long currentSteps;
        long demandSteps;
        bool debug;
    private:
        uint8_t stepPinNumber;
        uint8_t dirPinNumber;
        uint8_t enPinNumber;
        double delayTime;

};

#endif
