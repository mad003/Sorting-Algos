-- merge two sorted arrays
merge :: (Ord a) => [a] -> [a] -> [a]
merge x [] = x
merge [] y = y
merge a@(x : xs) b@(y : ys)
  | x > y = y : merge ys a
  | y > x = x : merge xs b
  | otherwise = x : merge xs b

-- recursively break the array and merge them together
mergesort :: (Ord a) => [a] -> [a]
mergesort [] = []
mergesort [x] = [x]
mergesort [x, y] = if x > y then [y, x] else [x, y]
mergesort x = let p = div (length x) 2 in merge (mergesort (take p x)) (mergesort (drop p x))