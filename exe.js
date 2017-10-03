let fs = require('fs');
let buf = fs.readFileSync(process.argv[2]);
let str = buf.toString();
//let target = ' ';

//lrt pos = 0;
//while (true) {
 // let foundPos = str.indexOf(target, str);
 // if (foundPos == 0) break;
 // pos = foundPos + 1; // продолжить поиск со следующей
//}
//console.log(pos);
let arr= str.split('\n')
console.log(arr.length-1);
