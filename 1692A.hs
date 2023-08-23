countInFront :: Int -> Int -> Int -> Int -> Int
countInFront a b c d = length $ filter (> a) [b, c, d]

convertToTuple :: String -> (Int, Int, Int, Int)
convertToTuple str = let [a, b, c, d] = map read (words str) in (a, b, c, d)

evaluateTestCase :: String -> Int
evaluateTestCase str = 
    let (a, b, c, d) = convertToTuple str
    in countInFront a b c d

evaluateTestCases :: [String] -> [Int]
evaluateTestCases = map evaluateTestCase

printResults :: [Int] -> IO ()
printResults [] = return ()
printResults (x:xs) = do
    print x
    printResults xs

main :: IO ()
main = do
    t <- readLn :: IO Int  
    testCases <- sequence (replicate t getLine)  
    let results = evaluateTestCases testCases  
    printResults results  
