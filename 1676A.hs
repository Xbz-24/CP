charToInt :: Char -> Int
charToInt c = read [c] :: Int

sumDigits :: [Int] -> Int
sumDigits [] = 0
sumDigits (x:xs) = x  + sumDigits xs

equalSums :: [Int] -> [Int] -> Bool