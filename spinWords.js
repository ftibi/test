function spinWords(sentence){
	var sentarr = sentence.split(" ");
	var res = [];
	for (var j = 0; j < sentarr.length; j++){
		if (sentarr[j].length >= 5){
			var newword = "";
			for (var i = 0; i < sentarr[j].length; i++){
				newword += sentarr[j][sentarr[j].length - 1 - i];
			}
			res.push(newword);
		}
		else {
			res.push(sentarr[j]);
		}
		return res.join(" ");
	}

	console.log(spinWords("salut les gens"));
