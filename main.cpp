#include <mimalloc-new-delete.h>

int main(int argc, char** argv)
{
  std::set_new_handler(nullptr);

  return 1;  
}