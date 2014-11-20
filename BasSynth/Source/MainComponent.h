#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include "CustomComponent.h"

class MainContentComponent   : public Component, private KeyListener
{
public:
    MainContentComponent();
    
private:
    CustomComponent custom;
    double frequency;
    int cents;
    void noteOn(); //still need to be made
    void noteOff(); //still need to be made
    bool keyPressed (const KeyPress& key, Component* originatingComponent);
    bool keyStateChanged (bool isKeyDown, Component* originatingComponent);
};
#endif