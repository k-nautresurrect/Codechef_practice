const fs = require('fs');
const express = require('express');
const app = express();
const bodyParser = require('body-parser');
const port = 12345;
app.use(bodyParser.json());
app.post('/',(req, res) => {
	const data = req. body;
	tests = []
	for(test of data["tests"]){
		tests.push({
			"test" : test["input"],
			"correct_answer": [test["output"].trim()]
		})
	}
	
	console.log("loaded");
	fs.writeFile('/home/kaynaut/Desktop/Codechef_practice/Codechef.java:tests',JSON.stringify(tests),function(){})
	res.sendStatus(200);
});
app.listen(port, err => {
	if (err) {
		console.error(err);
		process.exit(1);
	}
	console.log('listening' , {port});
}); 