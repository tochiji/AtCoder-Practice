log = console.log;

var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin.split("\n");
var N = lines[0].split(" ").map(Number)[0];
var ABs = lines
  .slice(1)
  .filter(v => v !== "")
  .map(v => v.split(" ").map(Number));

ABs.sort((a,b)=>{
  return a[1] - b[1] 
})

var flag = "Yes"
var sum = 0
for(var i=0;i<N;i++){
  sum += ABs[i][0];
  if(sum > ABs[i][1]){
    flag = "No"
    break;
  }
}

log(flag);