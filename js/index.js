const f = (x) => x > 0 ? x ** f(x-1) : x

console.log(f(5))