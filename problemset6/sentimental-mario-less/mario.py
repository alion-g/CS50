while(True):
    x=int(input("Height:"))
    if(x>0 and x<9):
        for i in range(x):
             print((x-i-1)*" ",(i+1)*"#",sep="")
        break
