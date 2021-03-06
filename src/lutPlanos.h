//
//  lutPlanos.hpp
//  lutBaqOF
//
//  Created by Paulo Guerra on 9/27/16.
//
//

#ifndef lutPlanos_h
#define lutPlanos_h

#include "ofMain.h"
#include "ofxAnimatableFloat.h"

class lutPlanos{
    
public:
    vector <ofImage> imagenes;
    int numfots = 0;
    int currentfot = 0;
    int lastChanged = 0;
    float opacity = 255.0;
    ofImage img;
    int tiempoDeCambio = 15000;
    void setup();
    void initAnim();
    void setNewImages();
    void update();
    void change();
    void dibujar();
    ofxAnimatableFloat alpha;
    bool isChanging = false;
};


#endif /* lutPlanos_h */
