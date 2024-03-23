package mypack; // The package name should be written in lower case to avoid conflict with class names
class MyPackageClass {
    public static void main(String[] args) {
        System.out.println("This is my package");
    }
}


// Run by this command 
// javac -d . MyPackageClass.java
// This forces the compiler to create the "mypack" package.
// The -d keyword specifies the destination for where to save the class file
