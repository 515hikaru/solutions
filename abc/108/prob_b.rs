use std::io::Read;

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_to_string(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let x1: i64 = iter.next().unwrap().parse().unwrap();
    let y1: i64 = iter.next().unwrap().parse().unwrap();
    let x2: i64 = iter.next().unwrap().parse().unwrap();
    let y2: i64 = iter.next().unwrap().parse().unwrap();
    let delta_x = x2 - x1;
    let delta_y = y2 - y1;
    let x3 = x2 - delta_y;
    let y3 = y2 + delta_x;
    let x4 = x3 - delta_x;
    let y4 = y3 - delta_y;
    println!("{} {} {} {}", x3, y3, x4, y4);
}
