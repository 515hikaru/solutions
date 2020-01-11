use std::io::Read;

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let n: i64 = iter.next().unwrap().parse().unwrap();
    let k: i64 = iter.next().unwrap().parse().unwrap();
    let mut c: u64 = 0;
    let mut c2: u64 = 0;
    if k % 2 != 0 {
        for a in 1..(n + 1) {
            if a % k == 0 {
                c += 1;
            }
        }
        println!("{}", c.pow(3));
    } else {
        for a in 1..(n + 1) {
            if a % k == 0 {
                c += 1;
            } else if a % k == k / 2 {
                c2 += 1;
            }
        }
        println!("{}", c.pow(3) + c2.pow(3));
    }
}
