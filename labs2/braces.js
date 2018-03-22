function validBraces(braces){
  depth = []
  for (let i = 0 ; i < braces.length; i++) {
    switch (braces[i]) {
      case '(': case '[': case '{': depth.push(braces[i]); break;
      case ')': if (depth.pop() != '(') return false; break;
      case ']': if (depth.pop() != '[') return false; break;
      case '}': if (depth.pop() != '{') return false; break;
    }
  }
  return depth.length === 0;
}
