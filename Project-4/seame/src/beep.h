#ifndef BEEP_H
#define BEEP_H

#include <QObject>
#include <wiringPi.h>
#include <iostream>

#define BeepPin 4

#define cL 129
#define cLS 139
#define dL 146
#define dLS 156
#define eL 163
#define fL 173
#define fLS 185
#define gL 194
#define gLS 207
#define aL 219
#define aLS 228
#define bL 232

#define cS 277
#define d 294
#define dS 311
#define e 329
#define f 349
#define fS 370
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466

#define q 261
#define cH 523
#define cHS 554
#define dH 587
#define dHS 622
#define eH 659
#define fH 698
#define fHS 740
#define gH 784
#define gHS 830
#define aH 880
#define aHS 910
#define bH 933

class Beep : public QObject
{
    Q_OBJECT
public:
    explicit Beep(QObject *parent = nullptr);

public slots:
    void ultrasonicBeepSlot(int msg);

private:
    void _beep(unsigned int note, unsigned int duration);
    void _starwarsBeep();
};

#endif // BEEP_H
