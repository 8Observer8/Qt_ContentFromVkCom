
#include "gtest/gtest.h"
#include "Authorization.h"

TEST( test001, accessTokenTest )
{
    // Input data
    Authorization auth;
    auth.setAccessToken( "12345" );
    auth.setUserId( "888" );

    // Actual result
    QString actual = auth.accessToken( );

    // Expected result
    QString expected = "12345";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

TEST( test002, userIdTest )
{
    // Input data
    Authorization auth;
    auth.setAccessToken( "12345" );
    auth.setUserId( "888" );

    // Actual result
    QString actual = auth.userId( );

    // Expected result
    QString expected = "888";

    // Check the actual result
    ASSERT_EQ( expected.toStdString( ), actual.toStdString( ) );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
