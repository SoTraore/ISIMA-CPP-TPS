#include "catch.hpp"
#include <cstring>
#include <sstream>
#include "Chaine.hpp"

TEST_CASE("Surcharge <<") {
    const char * chaine = "une nouvelle surcharge";
    Chaine s(chaine);
    std::stringstream ss;
    ss << s.c_str();  // :-)

    CHECK( ss.str() == chaine ); //  test de std::string, again :-))
}

TEST_CASE("exceptions aux bornes") {
  Chaine s(10);
    
  REQUIRE_THROWS_AS( s[-1] == 0, Chaine::OutOfRangeException);
  // OU
  REQUIRE_THROWS_AS( s[-1] == 0, std::out_of_range);
  REQUIRE_THROWS_AS( s[12] == 0, std::bad_alloc);  // :-)
}

TEST_CASE("exception sur pointeur null") {
  Chaine s(0);
    
  // verification que l'heritage est bien fait  
  std::logic_error * pe = new null_pointer;  
  delete pe;

  REQUIRE_THROWS_AS( s[1] == 0, null_pointer);
}

