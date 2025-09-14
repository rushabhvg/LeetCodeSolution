/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public String normalizeVowels(String word) {
        return word.toLowerCase().replaceAll("[aeiou]", "*");
    }
    
    public String[] spellchecker(String[] wordlist, String[] queries) {
        Set<String> exactMatchSet = new HashSet<>(Arrays.asList(wordlist));
        Map<String, String> caseInsensitiveMap = new HashMap<>();
        Map<String, String> vowelInsensitiveMap = new HashMap<>();

        for (String word : wordlist) {
            String lower = word.toLowerCase();
            caseInsensitiveMap.putIfAbsent(lower, word);
            vowelInsensitiveMap.putIfAbsent(normalizeVowels(lower), word);
        }

        String[] results = new String[queries.length];
        for (int i = 0; i < queries.length; i++) {
            String query = queries[i];
            if (exactMatchSet.contains(query)) {
                results[i] = query;
                continue;
            }

            String lowerQuery = query.toLowerCase();
            if (caseInsensitiveMap.containsKey(lowerQuery)) {
                results[i] = caseInsensitiveMap.get(lowerQuery);
                continue;
            }

            String vowelNormalized = normalizeVowels(lowerQuery);
            if (vowelInsensitiveMap.containsKey(vowelNormalized)) {
                results[i] = vowelInsensitiveMap.get(vowelNormalized);
                continue;
            }

            results[i] = "";
        }
        return results;
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
