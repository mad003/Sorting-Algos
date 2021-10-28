module Sort where

import Data.List

qSort :: Ord a => [a] -> [a]
qSort [] = []
qSort (x:xs) = (qSort l) ++ [x] ++ (qSort r)
    where
        (l, r) = partition ( <= x) xs
