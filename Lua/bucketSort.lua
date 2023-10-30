function bucketSort(arr)
    local max = math.max(table.unpack(arr))
    local min = math.min(table.unpack(arr))
    local range = (max - min) / #arr

    local buckets = {}
    for i = 1, #arr do
        buckets[i] = {}
    end
    for i = 1, #arr do
        local index = math.floor((arr[i] - min) / range) + 1
        if not buckets[index] then
            buckets[index] = {}
        end
        table.insert(buckets[index], arr[i])
    end
    local result = {}
    for i = 1, #arr do
        if #buckets[i] > 0 then
            table.sort(buckets[i])
            for j = 1, #buckets[i] do
                table.insert(result, buckets[i][j])
            end
        end
    end

    return result
end
-- Test 
local unsortedList = {3, 6, 8, 1, 4, 9, 2, 7, 5}
local sortedList = bucketSort(unsortedList)
print("Unsorted List:", table.concat(unsortedList, ", "))
print("Sorted List:", table.concat(sortedList, ", "))
