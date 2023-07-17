firstName = input("Please enter your first name: ")
middleName = input("Please enter your middle name: ")
lastName = input("Please enter your last name: ")

print("Your initials are: " + firstName[0] + middleName[0] + lastName[0])

lotNumber = "037-00901-00027"
countryCode = lotNumber[0:3]
productCode = lotNumber[4:9]
batchNumber = lotNumber[-5:]

print("The country code is: " + countryCode)
print("The product code is: " + productCode)
print("The batch number is: " + batchNumber)