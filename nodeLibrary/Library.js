// 2行目以降を配列として入力するもの
var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin.split("\n");

var N = lines[0].split(" ").map(Number)[0];
var T = lines
  .slice(1)
  .filter(v => v !== "")
  .map(Number);


// 2行目が横に伸びていく標準入力
var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin
  .split("\n")
  .filter(v => v !== "")
  .map(v => v.split(" ").map(Number));

var N = lines[0];
a = lines[1];

/// 何行もあって各行分離するもの
var stdin = require("fs").readFileSync("/dev/stdin", "UTF-8");
var lines = stdin.split("\n");
var N = lines[0].split(" ").map(Number)[0];
var M = lines[0].split(" ").map(Number)[1];
var A = lines
  .slice(1)
  .filter(v => v !== "")
  .map(v => v.split(" ").map(Number));
