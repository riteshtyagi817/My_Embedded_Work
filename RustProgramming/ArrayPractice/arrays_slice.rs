fn main()
{

    let arr = [1,2,3,4,5];
    let slice = &arr[1..4];
    let slice = &arr[2..4];
    println!("{:?}",slice);
    println!("{:?}",arr);
    println!("{:?}",slice);
    //arr[2] = 43;
    //println!("{:?}",arr);
    //println!("{:?}",slice);
}
