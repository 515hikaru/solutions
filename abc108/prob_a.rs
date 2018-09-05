use std::io::Read;

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let k: i64 = buf.trim().parse().unwrap();
    let total = if k % 2 == 0 {
        (k / 2) * (k / 2)
    } else {
        (k / 2) * ((k + 1) / 2)
    };
    println!("{}", total);
}
