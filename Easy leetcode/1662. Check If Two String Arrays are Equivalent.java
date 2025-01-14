class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder w1 = new StringBuilder();
        StringBuilder w2 = new StringBuilder();

        for (String w : word1) w1.append(w);
        for (String w : word2) w2.append(w);

        return w1.toString().equals(w2.toString());
    }
}

