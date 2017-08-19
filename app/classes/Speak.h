#ifndef SPEAK_H
#define SPEAK_H

class Speak {
    public:
        Speak();
        ~Speak();
        void setLang(const char* lang);
        void speak(const char* text);
        void setSpeed(int speed);
        void setVoices(unsigned char gender, unsigned char age);
    
    private:
};

#endif
