#include <ostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <boost/test/unit_test.hpp>

#include "route.h"

using namespace GPS;

BOOST_AUTO_TEST_SUITE( NAME_max_length)

/*Checking weather the name  is greater than zero*/
BOOST_AUTO_TEST_CASE( check_name_length )
{
   BOOST_CHECK_length( check_length_greater_than_zero(check_name_length) );
}


/*Checking weather the router name is zero*/
BOOST_AUTO_TEST_CASE( check_name_length )
{
   BOOST_CHECK_isequal( check_length_greater_isequal_zero(check_name_legth,0) );
}

/*Checking weather the name hold spaces*/
BOOST_AUTO_TEST_CASE(check_name_spaces)
{
   BOOST_CHECK_SpacesinName( check_spaces_in_name(check_name_spaces) );
}

/*Checking weather the name hold spaces*/
BOOST_AUTO_TEST_CASE(check_route_name)
{
   BOOST_CHECK_RouteName( check_name_of_route(check_route_name,"ALexx") );
}



BOOST_AUTO_TEST_SUITE_END()
