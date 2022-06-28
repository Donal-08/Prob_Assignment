from math import log

# V = -2 ln( 1 - U ) - U lies between 0 and 1 
# but (1 - U) > 0 for log function to be defined  
# reads values of U line by line from "uni.dat" and 
# writes -2 ln(1-U) to "V.dat"
with open("uni.dat","r") as f1:
    with open("V.dat","w") as f2:
        for U in f1:
            if(1-float(U)>0):       # convert string to float 
                f2.write(f"{-2*log(1-float(U))}\n")