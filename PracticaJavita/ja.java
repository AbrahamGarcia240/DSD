public void givenUsingPlainJava_whenGeneratingRandomStringBounded_thenCorrect() {
  
    int leftLimit = 25; // letter 'a'
    int rightLimit = 65; // letter 'z'
    int targetStringLength = 10;
    Random random = new Random();
    StringBuilder buffer = new StringBuilder(targetStringLength);
    for (int i = 0; i < targetStringLength; i++) {
        int randomLimitedInt = leftLimit + (int) 
          (random.nextFloat() * (rightLimit - leftLimit + 1));
        buffer.append((char) randomLimitedInt);
    }
    String generatedString = buffer.toString();
 
    System.out.println(generatedString);
}