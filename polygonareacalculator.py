import math
def determinant(x1,y1,x2,y2,x3,y3):
    return abs((x1*y2+y1*x3+x2*y3 - y2*x3 - y1*x2 - x1*y3)/2)

n = int(input("How many sides does the polygon have?\n"))
if (n > 2):
    x = [0]*n
    y = [0]*n
    AREA = 0
    TOTAL_AREA = 0
    for i in range (0,n):
        xy = input("Enter the cartesian coordinates of the " + str(i+1) + ". corner.\n").split()
        x[i] = int(xy[0])
        y[i] = int(xy[1])
    for i in range (2, n):
        AREA = determinant(x[0], y[0], x[i-1], y[i-1], x[i],y[i])
        TOTAL_AREA += AREA
    print("The area of the polygon is: ")
    print(TOTAL_AREA)
else:
    print("A polygon has to have at least 3 sides!\n")

    
    
    
