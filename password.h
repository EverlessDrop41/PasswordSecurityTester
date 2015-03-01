#ifndef PASSWORD_H_INCLUDED
	#define PASSWORD_H_INCLUDED

	int typesFound(std::string password);
	std::string getRatingString(int securityRating);

	bool hasNumber(std::string word);
	bool hasLetterCase(std::string word, bool lowerCheck);

#endif // PASSWORD_H_INC