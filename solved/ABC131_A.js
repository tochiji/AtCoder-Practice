log = console.log;

var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var line = stdin.split(" ") //.map(Number)
var str = line[0]

var flag = "Good"
if(str[0] === str[1]) flag = "Bad"
if(str[1] === str[2]) flag = "Bad"
if(str[2] === str[3]) flag = "Bad"
log(flag)