#This code is contributed by github user muskanapp

N, Q = map( int, input().split() ) #taking input
lastans = 0 #initialise a variable lastans to 0

seqList = [ [] for _ in range( N ) ] #creating a list seqList of n empty sequences
#performing the queries on seqList
for _ in range( Q ):
    t, x, y = map( int, input().split() )
    if t == 1: #query 1
        seqList[ ( x ^ lastans ) % N ].append( y )
    elif t == 2: #query 2
        arr = seqList[ ( x ^ lastans ) % N ]
        val = arr[ y % len(arr) ]
        print( val )
        lastans = val