'use strict'

const fs = require('fs');
const input = process.argv[2];
const output = process.argv[3];
let scores = [];

fs.readFile(input, (err, data) => {
	const info = data.toString('utf8');
	const arr = info.split('\n');
	for(let i = 1; i < arr.length - 1; i++){
		scores.push(countScore(arr[i]));
	}
	fs.writeFileSync(output, '');
	scores.sort(compareScores).forEach((elem) => {
		fs.appendFileSync(output, elem.team + ',' + elem.score + '\n');
	})
})

const countScore = (score) => {
	const arr = score.split(',')
	let quantity = 0;
	console.log(arr[0])
	for(let i = 1; i < arr.length ; i++){
		score = arr[i].split(':');
		if(score[0] < score[1]){
			quantity--
		}else if(score[0] > score[1]){
			quantity += 3;
		}
		console.log(quantity)
	}
	return {
		team: arr[0],
		score: quantity,
	}
}
const compareScores = (a, b) => {
  if (a.score > b.score) return -1;
  if (a.score < b.score) return 1;
}