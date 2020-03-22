//minLongitude function choosing for testing
#include<stdio.h>
#include "minimlongitude_N0783935.h"
#include <boost/test/unit_test.hpp>
#include <ostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include "route.h"


//boolean type that defines the file condition true or false
const bool gfile_occurs = false;
using namespace GPS;



//constructor call
minimlongitude_N0783935::minimlongitude_N0783935()
{

}

//test case to find minimum distance between amsterdam POSITIVE
BOOST_AUTO_TEST_CASE(Amsterdamminlongitude_distance_dis)
{
    const std::string mindata ="<gpx><rte><name>amsterdam</name><rtept uithom=\"421.3331\" amster=\"131.3412\"></rtept></rte></gpx>";
    Route path = Route(mindata, gfile_occurs);
    BOOST_ISNOT_EQUAL_CHECK( "421.331" ,path.minLongitude );

}

//test case to find minimum distance between Woerden
BOOST_AUTO_TEST_CASE(Woerdenminlongitude_distance_dis)
{
   const std::string mindata ="<gpx><rte><name>wOERDEN</name><rtept Ziest=\"32.3112\" Woerden=\"-231.33\"></rtept></rte></gpx>";
    Route path = Route(mindata, gfile_occurs);
    BOOST_ISNOT_EQUAL_CHECK( "32.3112" ,path.minLongitude );
}

//test case to find minimum distance between Almere
BOOST_AUTO_TEST_CASE(Almereminlongitude_distance_dis)
{
    const std::string mindata ="<gpx><rte><name>alMERE</name><rtept uganda=\"04.321\" almere=\"12.2903\"></rtept></rte></gpx>";
    Route path = Route(mindata, gfile_occurs);
    BOOST_ISNOT_EQUAL_CHECK( "04.321" ,path.minLongitude );
}

//test case for poland negative 
BOOST_AUTO_TEST_CASE(NegativeEddges)
{
    const std::string mindata ="<gpx><rte><name>poland/name><rtept longitude=\"-43.3221\" latitude=\"-334.31234\"></rtept></rte></gpx>";
    Route path = Route(mindata, gfile_occurs);
    BOOST_ISNOT_EQUAL_CHECK( "-43.3221" , path.minLongitude );
}


