#include "espeak_path.h"
#include "Speak.h"
#include <string.h>

Speak::Speak(){
    espeak_Initialize(AUDIO_OUTPUT_PLAYBACK, 0, NULL, 0);
}

Speak::~Speak(){
    espeak_Terminate();
}

void Speak::setLang(const char* lang="pt"){
    espeak_SetVoiceByName(lang);
}

void Speak::speak(const char* text=""){
    espeak_Synth(text, strlen(text) + 1, 0, POS_CHARACTER, 0, espeakCHARS_AUTO, NULL, NULL);
    espeak_Synchronize();
}

void Speak::setSpeed(int speed=100){
    espeak_SetParameter(espeakRATE, speed, 0);
}

void Speak::setVoices(unsigned char gender='0', unsigned char age='0'){
    espeak_VOICE *voice = espeak_GetCurrentVoice();
    voice->gender = gender;
    voice->age = age;
}
