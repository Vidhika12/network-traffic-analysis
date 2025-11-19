import java.util.Scanner;

public class Hospital {
    public static void main(String[] args) {
        int age;
        String name;
        int phoneno;
        String gender;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to Healwell Hospital");
        System.out.println("Enter your details:");

        System.out.print("Name of the patient: ");
        name = scanner.nextLine();

        System.out.print("Age of the patient: ");
        age = scanner.nextInt();
        scanner.nextLine(); // consume leftover newline

        System.out.print("Phone number of the patient: ");
        phoneno = scanner.nextInt();
        scanner.nextLine(); // consume leftover newline

        System.out.print("Gender of the patient: ");
        gender = scanner.nextLine();

        System.out.println("\n--- Patient Details ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("Phone number: " + phoneno);
        System.out.println("available services:1 general consultation");
        System.out.println("2-Blood test");
        System.out.println("3-Covid test");
        System.out.println("4-X-ray");
        System.out.println("5-MRI");
        System.out.println("choose an option(1,2,3,4)");
        switch(choice){
            case '1':
                 System.out.println("cost for gc:1500");
                 break;
            case '2':
                 System.out.println("cost for BT:850");
                 break;
            case '3':
                 System.out.println("cost for ct:450");
                 break;
            case '4':
                 System.out.println("cost for xr:400");
                 break;
            case '5':
                 System.out.println("cost for mri:2000");
                 break;
            default:
                 System.out.println("invalid choice");
                 break;
        }
    }
}
