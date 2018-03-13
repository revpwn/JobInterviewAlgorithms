let array = ["These", "are", "the", "values", "that", "will", "be", "reversed."];
let reverse = arr => arr.forEach(item => console.log(item.split("").reverse().join("")));
reverse(array);
