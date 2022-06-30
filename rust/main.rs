fn f(x: u32) -> u32 {
    if x > 0 {
        let y = f(x - 1) as u32;
        return x.pow(y);
    }
    return x;
}

fn main() {
    println!("{}", f(4));
}