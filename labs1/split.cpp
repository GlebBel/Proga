#include <string>
#include <utility>

std::string encrypt(std::string text, int n)
{
  if(n<=0) return text;

  std::string text2 = text;
  std::string &src = text;
  std::string &dst = text2;

  size_t len = text.size();

  while(n--) {
      for(int i=0,j=len/2;i<len/2;++i,++j) {
        dst[i] = src[2*i+1];
        dst[j] = src[2*i];
      }
      std::swap(src,dst);
  }
  return src;
}

std::string decrypt(std::string text, int n)
{
  if(n<=0) return text;

  std::string text2 = text;
  std::string &src = text;
  std::string &dst = text2;

  size_t len = text.size();

  while(n--) {
      for(int i=0,j=len/2;i<len/2;++i,++j) {
        dst[2*i+1] = src[i];
        dst[2*i] = src[j];
      }
      std::swap(src,dst);
  }
  return src;
}
