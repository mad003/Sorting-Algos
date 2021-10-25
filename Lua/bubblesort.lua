local bubblesort = {}

local function printtable(o)
    if type(o) == 'table' then
       local s = '{ '
       for k,v in pairs(o) do
          if type(k) ~= 'number' then k = '"'..k..'"' end
          s = s .. printtable(v) .. ','
       end
       return s .. '} '
    else
       return tostring(o)
    end
end

bubblesort.swap = function(a, b, table)
    if table[a] == nil or table[b] == nil then
        return false
    end

    if table[a] > table[b] then
        table[a], table[b] = table[b], table[a]
        return true
    end

    return false
end

bubblesort.check = function(ci, tbl)
    if bubblesort.swap(ci, ci+1, tbl) then
        ci = ci - 1
        bubblesort.check(ci, tbl)
    end
end

bubblesort.bubbleSort = function(tbl)
    for i=1, table.maxn(tbl) do
        local ci = i
        
        bubblesort.check(ci, tbl)
    end
end

local tbl = {0, 3, 5, 3, 2}

print("Bubble Sort!")

print("Table:       ", printtable(tbl))

bubblesort.bubbleSort(tbl)

print("Sorted Table:", printtable(tbl))