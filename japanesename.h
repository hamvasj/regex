#ifndef JAPANESENAME_H
#define JAPANESENAME_H

#endif // JAPANESENAME_H
#include <QString>
#include <iostream>
#include <string>

class JapaneseName{

    public:
        JapaneseName();
        ~JapaneseName();
        QString GetJapaneseName(QString forename, QString lastname);

    private :
        QString japaneseABC[26] = {"ka", "zu", "mi", "te", "ku", "lu", "ji", "ri", "ki", "zu", "me", "ta", "rin",
                         "to", "mo", "no", "ke", "shi", "ari", "chi", "do", "ru", "mei", "na", "fu", "zi"};
        QChar swapChars[2][9] ={    {'Á','É','Í','Ó','Ö','Ő','Ú','Ü','Ű'},
                                    {'A','E','I','O','O','O','U','U','U'} };
        int swapCharsArraySize;
        QString Convert(QString name, int count);
};
