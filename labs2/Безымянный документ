function solution(input, markers)
{
  let lines = input.split('\n');
  for (let i = 0; i < lines.length; ++i)
    for (let j = 0; j < markers.length; ++j)
      lines[i] = lines[i].split(markers[j])[0].trim();
  return lines.join('\n');
}
