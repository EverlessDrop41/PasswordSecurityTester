#PASSWORD TESTER
from __future__ import print_function

userPassword = input("Enter a password: ") #Get the users password to check it

rating = ["INSECURE","WEAK","MEDIUM","STRONG","SUPER STRONG"] #The array of security ratings

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

#Print the rating 
print (rating[typesContained(userPassword)])
