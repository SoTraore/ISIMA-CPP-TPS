#include "catch.hpp"
#include <sstream> // a mettre en commentaire 
#include "Humanoide.hpp"

TEST_CASE("Humain1") {
  const char * nom ="Alex";
  const Humain alex(nom, HOMME, 35);

  CHECK( nom   == alex.getNom()   );
  CHECK( HOMME == alex.getGenre() );
  // ou enum class Genre.HOMME
  CHECK( 35    == alex.getAge()   );
}

TEST_CASE("Humain2") {
  Humain thomas("thomas", HOMME, 26);

  thomas.setNom("conchita");
  thomas.setAge(27);
  thomas.setGenre(FEMME);
  
  CHECK( "conchita" == thomas.getNom()   );
  CHECK( FEMME      == thomas.getGenre() );
  CHECK( 27         == thomas.getAge()   );
}

TEST_CASE("Machine") {
  Machine stylet("stylet Apple", 2*24*3600, 1);

  CHECK( "stylet Apple" == stylet.getType()      );
  CHECK( 2*24*3600      == stylet.getAutonomie() );
  CHECK( 1              == stylet.getIfixit()    );
}

TEST_CASE("Robocop") {
  Humanoide robocop("Murphy", "Robocop 1.0", HOMME, 35);
    
  CHECK( "Murphy"      == robocop.getNom()    );
  CHECK( "Robocop 1.0" == robocop.getType()   );
  CHECK( HOMME         == robocop.getGenre()  );
  CHECK( 35            == robocop.getAge()    );
  CHECK( 3             == robocop.getIfixit() );  
}
