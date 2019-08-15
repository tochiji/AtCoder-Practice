log = console.log;

var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin.split("\n")
var line = lines[0].split(" ").map(Number)
var N = line[0]
var L = line[1]

var Start = L
var Last = L + N - 1
var Sum = (Start + Last) * N / 2

if(Start >= 0 && Last >= 0){
  log(Sum - Start)
}else if (Start < 0 && Last >= 0){
  log(Sum)
} else if(Start<0 && Last < 0){
  log(Sum - Last)
}
