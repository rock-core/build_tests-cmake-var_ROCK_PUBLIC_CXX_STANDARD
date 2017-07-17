#include <boost/test/unit_test.hpp>
#include <var_ROCK_PUBLIC_CXX_STANDARD/Dummy.hpp>

using namespace var_ROCK_PUBLIC_CXX_STANDARD;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    var_ROCK_PUBLIC_CXX_STANDARD::DummyClass dummy;
    dummy.welcome();
}
