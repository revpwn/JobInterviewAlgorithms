//  Copyright © 2018 Austin Tice. All rights reserved.

for(let i = 1; i <= 100; i++){
  if(i % 15 === 0){
    console.log("FIZZBUZZ");
  }
  else if(i % 3 === 0){
    console.log("FIZZ")
  }
  else if(i % 5 === 0){
    console.log("BUZZ")
  }
  else{
    console.log(i);
  }
}
