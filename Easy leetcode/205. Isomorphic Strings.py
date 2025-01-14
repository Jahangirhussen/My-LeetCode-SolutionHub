class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapS, mapT = {}, {}

        for i in range(len(s)):
            if s[i] not in mapS and t[i] not in mapT:
                mapS[s[i]] = t[i]
                mapT[t[i]] = s[i]
            elif mapS.get(s[i]) != t[i] or mapT.get(t[i]) != s[i]:
                return False

        return True


/**
আমরা s[i] (স্ট্রিং s এর বর্তমান অক্ষর) এবং t[i] (স্ট্রিং t এর বর্তমান অক্ষর) ম্যাপ করেছি।
প্রথমে চেক করছি:
mapS.find(s[i]) == mapS.end() → মানে, যদি s[i] এর জন্য কোনো মান না থাকে mapS-এ।
mapT.find(t[i]) == mapT.end() → মানে, যদি t[i] এর জন্য কোনো মান না থাকে mapT-এ।
যদি এই অক্ষরগুলো আগে ম্যাপ না হয়ে থাকে, তখন:
আমরা s[i] কে t[i]-এ ম্যাপ করি mapS-এ।
এবং t[i] কে s[i]-এ ম্যাপ করি mapT-এ।
---------------------------------------------------------------------------------------------------------------------------------
Input 1: s = "foo", t = "bar"
লুপের প্রতিটি স্টেপের ব্যাখ্যা:
প্রথম লুপ (i = 0):

s[i] = 'f', t[i] = 'b'
mapS.find('f') == mapS.end() → mapS-এ 'f' নেই।
mapT.find('b') == mapT.end() → mapT-এ 'b' নেই।
ফলে, আমরা 'f' কে 'b'-এ ম্যাপ করি mapS-এ এবং 'b' কে 'f'-এ ম্যাপ করি mapT-এ।
অতএব, বর্তমানে:

mapS = {'f': 'b'}
mapT = {'b': 'f'}
দ্বিতীয় লুপ (i = 1):

s[i] = 'o', t[i] = 'a'
mapS.find('o') == mapS.end() → mapS-এ 'o' নেই।
mapT.find('a') == mapT.end() → mapT-এ 'a' নেই।
ফলে, আমরা 'o' কে 'a'-এ ম্যাপ করি mapS-এ এবং 'a' কে 'o'-এ ম্যাপ করি mapT-এ।
অতএব, বর্তমানে:

mapS = {'f': 'b', 'o': 'a'}
mapT = {'b': 'f', 'a': 'o'}
তৃতীয় লুপ (i = 2):

s[i] = 'o', t[i] = 'r'
আমরা চেক করি:
mapS['o'] == 'a' → mapS-এ 'o' রয়েছে, কিন্তু 'a' এর সাথে তুলনা করছি, যা 'r' এর সমান না।
অমিল দেখা যাচ্ছে এবং তাই false রিটার্ন হবে।
Result: False
-------------------------------------------------------------------------------------------------------------------
Input 2: s = "paper", t = "title"
লুপের প্রতিটি স্টেপের ব্যাখ্যা:
প্রথম লুপ (i = 0):

s[i] = 'p', t[i] = 't'
mapS.find('p') == mapS.end() → mapS-এ 'p' নেই।
mapT.find('t') == mapT.end() → mapT-এ 't' নেই।
ফলে, আমরা 'p' কে 't'-এ ম্যাপ করি mapS-এ এবং 't' কে 'p'-এ ম্যাপ করি mapT-এ।
অতএব, বর্তমানে:

mapS = {'p': 't'}
mapT = {'t': 'p'}
দ্বিতীয় লুপ (i = 1):

s[i] = 'a', t[i] = 'i'
mapS.find('a') == mapS.end() → mapS-এ 'a' নেই।
mapT.find('i') == mapT.end() → mapT-এ 'i' নেই।
ফলে, আমরা 'a' কে 'i'-এ ম্যাপ করি mapS-এ এবং 'i' কে 'a'-এ ম্যাপ করি mapT-এ।
অতএব, বর্তমানে:

mapS = {'p': 't', 'a': 'i'}
mapT = {'t': 'p', 'i': 'a'}
তৃতীয় লুপ (i = 2):

s[i] = 'p', t[i] = 't'
আমরা চেক করি:
mapS['p'] == 't' → mapS-এ 'p' এর মান 't' সঠিক।
mapT['t'] == 'p' → mapT-এ 't' এর মান 'p' সঠিক।
অকিছু সমস্যা নেই, এবং আমরা পরবর্তী লুপে চলে যাই।
চতুর্থ লুপ (i = 3):

s[i] = 'e', t[i] = 'l'
mapS.find('e') == mapS.end() → mapS-এ 'e' নেই।
mapT.find('l') == mapT.end() → mapT-এ 'l' নেই।
ফলে, আমরা 'e' কে 'l'-এ ম্যাপ করি mapS-এ এবং 'l' কে 'e'-এ ম্যাপ করি mapT-এ।
অতএব, বর্তমানে:

mapS = {'p': 't', 'a': 'i', 'e': 'l'}
mapT = {'t': 'p', 'i': 'a', 'l': 'e'}
পঞ্চম লুপ (i = 4):

s[i] = 'r', t[i] = 'e'
mapS.find('r') == mapS.end() → mapS-এ 'r' নেই।
mapT.find('e') == mapT.end() → mapT-এ 'e' আছে, কিন্তু তা 'l' এর সাথে ম্যাপ করা। সুতরাং এটি সঠিক নয়।
অমিল দেখা যাচ্ছে, এবং তাই false রিটার্ন হবে।

Result: False
*/

