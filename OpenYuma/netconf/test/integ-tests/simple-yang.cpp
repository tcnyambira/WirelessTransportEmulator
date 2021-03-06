#define BOOST_TEST_MODULE IntegTestSimpleYang

#include "configure-yuma-integtest.h"

namespace YumaTest {

// ---------------------------------------------------------------------------|
// Initialise the spoofed command line arguments 
// ---------------------------------------------------------------------------|
const char* SpoofedArgs::argv[] = {
    ( "yuma-test" ),
    ( "--modpath=../../modules/netconfcentral"
               ":../../modules/ietf"
               ":../../modules/yang"
               ":../modules/yang"
               ":../../modules/test/pass" ),
    ( "--runpath=../modules/sil" ),
    ( "--access-control=off" ),
    ( "--log=./yuma-op/yuma-out.txt" ),
    ( "--target=running" ),
    ( "--module=simple_yang_test" ),
    ( "--no-startup" ),         // ensure that no configuration from previous 
                                // tests is present
};

#include "define-yuma-integtest-global-fixture.h"

} // namespace YumaTest
