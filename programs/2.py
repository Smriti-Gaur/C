print("use of assert statement")
def negativecheck(number):
    assert(number>=0),"OPPS...negative number"
    print(number*number)
    print (negativecheck(100))
    print (negativecheck(-350))