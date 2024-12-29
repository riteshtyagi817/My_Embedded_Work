fn main()
{
    println!("The sum is {}.", 80 + 34);
    println!("{} + {} = {}.",34,80,80+34);
    println!("{} + {} = {}.",34.,80.,80.+34.);
    println!("{}","These 
                    are 
                    three 
                    lines");
    println!("{}","This \
                    is \
                    just \
                    one line");
    println!("{}","This\n\
                    is\n\
                    just\n\
                    one line");
    let number = 12;
    let other_number = 53;
    print!("{}",number + other_number);

}
