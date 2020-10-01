def dynamicArray(n, queries):                      #Function Declaration for Dynamic Array taking arguments n=Number of sequences and queries = list of queries for the seqList
    lastAnswer = 0
    seqList = []               #Declaring the Empty Sequence List seqList
    results = []               #Declaring an empty list for storing the results of the type '2' queries in order of execution
    for i in range(n):
        seqList.append([])          #Appending the n Empty Sequences in the sequence list seqList
    for i in range(len(queries)):    #Running a for loop for the necessary functions. The loop runs len(queries) number of times
        if(queries[i][0]==1):        #If Else statement for checking the condition of type '1' or type '2' Queries 
            seqList[((queries[i][1]^lastAnswer)%n)].append(queries[i][2])      #Execution statement for type '1' Query
        elif(queries[i][0]==2):
            seq = seqList[((queries[i][1]^lastAnswer)%n)]            #Execution Statements for type '2' Query 
            size = len(seq)
            lastAnswer = seq[queries[i][2]%size]
            print(lastAnswer)
            results.append(lastAnswer)
    return results                                            #Returning the corresponding result of every type '2' query in order of execution


n = int(input("\nEnter the number of sequences to be created: "))    
q = int(input("\nEnter the number of queries to be created: "))

queries = []

for i in range(q):                                     #Creating the Queries List
    queries.append([])
    type = int(input("\nEnter the type of query: "))
    queries[i].append(type)
    x = int(input("\nEnter integer x for the query: "))
    queries[i].append(x)
    y = int(input("\nEnter integer y for the query: "))
    queries[i].append(y)

result = dynamicArray(n,queries)                      #Calling the function dynamicArray
print("\nResult of the type 2 queries in order of execution is: ",result)




