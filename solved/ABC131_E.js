log = console.log;

var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin.split("\n")
var line = lines[0].split(" ").map(Number)
var N = line[0]
var K = line[1]

if(N < K){
  log("-1")
} else {
  for(var i=1;i<N-1;i++){
    for(var q=i+1;q<N;q++){
      if(!(i===1 && q<=K+1)){
        log(i,q);
      }
    }
  }
}