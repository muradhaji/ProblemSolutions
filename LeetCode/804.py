#Link: https://leetcode.com/problems/unique-morse-code-words/

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",\
                 "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",\
                 "..-","...-",".--","-..-","-.--","--.."]
        morse_word = set()
        for word in words:
            transformation = ""
            for ch in word:
                transformation += morse[ord(ch) - ord('a')]
            morse_word.add(transformation)
        return len(morse_word)
        