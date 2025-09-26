from pathlib import Path

# Define file path
file_path2 = Path("/mnt/data/M3CW2_Acevedo.java")

# Create Java content for M3CW2 assignment
java_code2 = """public class M3CW2_Acevedo { 

    public static void main(String[] args) { 

        // ====== INTEGER TYPES ====== 
        byte myByte = 100; 
        short myShort = 20000; 
        int myInt = 100000; 
        long myLong = 10000000000L; 

        // ====== DECIMAL / FLOATING POINT TYPES ====== 
        float myFloat = 3.14f; 
        double myDouble = 3.14159265359; 

        // ====== CHARACTER AND BOOLEAN ====== 
        char myChar = 'A'; 
        boolean myBoolean = true; 

        // ====== REFERENCE TYPE ====== 
        String myString = "Hello, Java!"; 

        // ====== DISPLAY VALUES ====== 
        System.out.println("Byte Value: " + myByte); 
        System.out.println("Short Value: " + myShort); 
        System.out.println("Integer Value: " + myInt); 
        System.out.println("Long Value: " + myLong); 

        System.out.println("Float Value: " + myFloat); 
        System.out.println("Double Value: " + myDouble); 

        System.out.println("Character Value: " + myChar); 
        System.out.println("Boolean Value: " + myBoolean); 

        System.out.println("String Value: " + myString); 
    } 
} 
"""

# Write to file
file_path2.write_text(java_code2)

file_path2
