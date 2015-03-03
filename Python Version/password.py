#PASSWORD TESTER

userPassword = input("Enter a password: ") #Get the users password to check it

rating = ["INSECURE","WEAK","MEDIUM","STRONG"] #The array of security ratings

#Returns the number of different security features of the password
def typesContained(usrString):
    typesNum = 0 #Initialise a variable to store the different types in the pasword
    #Number Check
    for let in usrString: #Loop through the characters in the usrString parameter
        if let.isdigit(): #Check if the character is a number 
            typesNum += 1 #If  it is add one to the types
            break #Stop looping so the number is only added once
    #Upper case check
    for let in usrString: #Loop through the characters in the usrString parameter
        if let.isupper(): #Check if letter is upper case
            typesNum += 1 #If  it is add one to the types
            break #Stop looping so the number is only added once
            
    #Lower case check
    for let in usrString: #Loop through the characters in the usrString parameter
        if let.islower(): #Check if letter is lower case
            typesNum += 1 #If  it is add one to the types
            break #Stop looping so the number is only added once
    
    return typesNum #Return the different types

#Returns a boolean value saying whtether the string is a valid length
def isValidLength(usrString):
    strLength = len(usrString) #check the password length and assign it to a variable
    
    return (strLength >= 6 and strLength <= 12) #Return whether the length is between 6 and 12

#Print the rating
if (isValidLength(userPassword)): #If the password is long enough then check if it's valid
    print (rating[typesContained(userPassword)])#Use the types contained and access the point in the ratings array
else:#If the password is too short
    print ("Your password is not between 6 and 12 characters long")#Tell the user their password is to short
