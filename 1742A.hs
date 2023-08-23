isSum :: Int -> Int -> Int -> Bool
isSum a b c = a == b + c || b == a + c || c == a + b

convertToTuple :: String -> (Int, Int, Int)
convertToTuple str = let [a,b,c] = map read (words str) in (a , b, c)

evaluateTestCase :: String -> String
evaluateTestCase str = 
  let (a, b, c) = convertToTuple str
  in if isSum a b c then "YES" else "NO"

evaluateTestCases :: [String] -> [String]
evaluateTestCases = map evaluateTestCase

main :: IO()
main = do
  t <- readLn :: IO Int
  testCases <- sequence (replicate t getLine)
  let results = evaluateTestCases testCases
  mapM_ putStrLn results