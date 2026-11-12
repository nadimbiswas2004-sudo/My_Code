public class vowels_consonant {
    public static void main(String[] args) {
        String sentence = "Example sentence goes here.";
        int vowels = 0, consonants = 0;

        // Convert the sentence to lowercase to make the program case-insensitive
        String lowerSentence = sentence.toLowerCase();

        // Iterate through each character in the sentence
        for (int i = 0; i < lowerSentence.length(); i++) {
            char ch = lowerSentence.charAt(i);

            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } 
            // Check if the character is a consonant
            else if (ch >= 'a' && ch <= 'z') {
                consonants++;
            }
        }

        // Output the results
        System.out.println("Number of vowels: " + vowels);
        System.out.println("Number of consonants: " + consonants);
    }
}
