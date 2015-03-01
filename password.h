#ifndef PASSWORD_H_INCLUDED
    #define PASSWORD_H_INCLUDED

    int typesFound(string password);
    string getRatingString(int securityRating);

    bool hasNumber(string word);
    bool hasLetterCase(string word,bool lowerCheck);

#endif // PASSWORD_H_INCLUDED
