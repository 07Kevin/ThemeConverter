#include <chrono>
#include <span>
#include <random>
#include <ranges>
#include <list>
#include <fstream>
#include <iomanip>

#include "gd/gd_utf8.h"
#include "gd/gd_cli_options.h"
#include "gd/gd_arguments.h"
#include "gd/gd_arguments_shared.h"
#include "gd/gd_file.h"
#include "gd/gd_sql_value.h"
#include "gd/gd_variant_common.h"
#include "gd/gd_strings.h"

//#include "pugixml/pugixml.hpp"
#include "pugixml/pugixml.cpp"

#include "main.h"

#include "catch2/catch_amalgamated.hpp"

TEST_CASE("Read xml file", "[read]")
{
   pugi::xml_document document_;

   pugi::xml_parse_result result_ = document_.load_file("D:/temp/resources/xml_test/test.xml");

   if( !result_ )
   {
      std::cout << "failed to open file\n";
      return;
   }

   pugi::xml_node xml_nodePerson = document_.child("person");
   std::string stringName = xml_nodePerson.child("name").child_value();

   std::cout << stringName << std::endl;

}

TEST_CASE("Write xml file", "[write]")
{

}