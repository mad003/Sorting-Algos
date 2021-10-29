local bogosort = {}

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
 

bogosort.checkSorted = function(tbl)
    local current = tbl[1]
    for i, num in ipairs(tbl) do
        if num < current then
            return false
        end
        current = num
    end
    return true
end

bogosort.bogoSort = function(tbl)
    if not bogosort.checkSorted(tbl) then
        for i = #tbl, 2, -1 do -- shuffle table
            local j = math.random(i)
            tbl[i], tbl[j] = tbl[j], tbl[i]
        end

        return bogosort.bogoSort(tbl)
    else
        return tbl
    end
end

print("Bogo Sort!")

local tbl = {0, 3, 5, 3, 2}

print("Table:       ", printtable(tbl))

bogosort.bogoSort(tbl)

print("Sorted Table:", printtable(tbl))