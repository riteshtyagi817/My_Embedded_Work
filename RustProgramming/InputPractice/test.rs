use std::io;
fn main(){
	while true
	{
		println!("Enter the num1: ");
		let mut str1 = String::new();
		io::stdin()
			.read_line(&mut str1)
			.expect("Failed to read num1");

		println!("Enter the num2: ");
		let mut str2 = String::new();
		io::stdin()
			.read_line(&mut str2)
			.expect("Failed to read num2");


		
		println!("Enter the operator: ");
		let mut opr = String::new();
		io::stdin()
			.read_line(&mut opr)
			.expect("Failed to read operation");

		println!("num1: {}",str1.trim());
		println!("num2: {}",str2.trim());
		println!("operation: {}",opr.trim());

		let num1:i32 = str1.trim().parse().expect("Error in conversion");
		let num2:i32 = str2.trim().parse().expect("Error in conversion");


		if opr.trim() == "+"
		{
			println!("The sum result is {}",num1 + num2);


		}
		else if opr.trim() == "-"
		{

			println!("The sub result is {}",num1 - num2);

		}
		else if opr.trim() == "*"
		{

			println!("The mul result is {}",num1 * num2);

		}
		else if opr.trim() == "/"
		{


			println!("The div result is {}",num1 / num2);
		}	
		else if opr.trim() == "$"
		{
			break;

		}
		else
		{
			println!("Wrong operator entered, (+,-,*,/) are valid");
			break;

		}
	}

}
