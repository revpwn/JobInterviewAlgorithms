  function anagramCheck(x, y){
  str  = x.toLowerCase()
             .replace(/\s/g, "")
             .split("")
             .sort()
             .join("");
  str2 = y.toLowerCase()
              .replace(/\s/g, "")
              .split("")
              .sort()
              .join("");
    return str === str2;
}
anagramCheck("Hello World", "dlroW olleH");
