#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
TEST_CASE( "Test Sign", "[sign]" ) {
    SECTION("positive numbers") {
        REQUIRE( Sign(1) == 1 );
        REQUIRE( Sign(2) == 1 );
        REQUIRE( Sign(3) == 1 );
        REQUIRE( Sign(10) == 1 );
    }

    SECTION("negative  numbers") {
        REQUIRE( Sign(-1) == -1 );
        REQUIRE( Sign(-2) == -1 );
        REQUIRE( Sign(-3) == -1 );
        REQUIRE( Sign(-10) == -1 ); 
    }
}
