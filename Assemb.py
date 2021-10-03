def assenbly_line_cost(Assemble , Main , Entry , Exit):
    
    cnt1 = Entry[0] + Assemble[0][1]
    cnt2 = Entry[1] + Assemble[0][1]

    #for i in range(len(Assemble[0])):

        Upper = min(cnt1 + Assemble[0][i], cnt2 + Main[1][i] + Assemble[0][i])
        Lower = min(cnt1 + Assemble[1][i], cnt2 + Main[0][i] + Assemble[1][i])
        cnt1 = Upper
        cnt2 = Lower
    
    cnt1 = cnt1 + Exit[0]
    cnt2 = cnt2 + Exit[1]
    return  min(cnt1 , cnt2)

Assemble = [[10,5,6,7,6,11,15,13,12,11,9,8,13,6,10] , [7,11,8,5,6,9,11,12,15,7,14,9,13,12,10]]
Main = [[0,12,5,6,7,3,4,5,7,11,8,5,6,9,11] , [0,3,5,7,11,8,5,6,9,11,12,5,2,8,13]]
Entry = [5 , 7]
Exit = [11 , 13]

print("The minimum amount required to pass from the assembly line:")
print(f"{assenbly_line_cost(Assemble, Main, Entry, Exit)} units")
