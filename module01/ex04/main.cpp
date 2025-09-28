#include <iostream>
#include <fstream>

void  replace_function(char **arr, std::ifstream &in_file, std::ofstream &out_file)
{
  std::string line;
  std::string s1 = arr[2];
  std::string s2 = arr[3];
  std::string before;
  std::string after;
  
  while (std::getline(in_file, line))
  {
    size_t start_pos = 0;
    while ((start_pos = line.find(s1, start_pos)) != std::string::npos)
    {
      before = line.substr(0, start_pos);
      after = line.substr(start_pos + s1.length());
      line = before + s2 + after;
      start_pos += s2.length();
    }
    out_file << line;
    out_file << std::endl;
  }
}

void  open_and_read(char **arr)
{
  std::ifstream in_file;
  std::ofstream out_file;

  in_file.open(arr[1]);
  if (!in_file.is_open())
  {
    std::cerr << "the in_file maybe not open !\n";
    return ;
  }

  out_file.open("out_file.txt");
  if (!out_file.is_open())
  {
    std::cerr << "the out_file maybe not open !\n";
    return ;
  }

  replace_function(arr, in_file, out_file);

  std::cout << "we finish !!" << std::endl;
}

int main (int argc, char *argv[])
{
  if (argc != 4)
  {
    std::cerr << "Oops you don't pass enough argument !" << std::endl;
    return (1);
  }
  open_and_read(argv);
  return 0;
}
