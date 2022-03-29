#include <sqlite_orm/sqlite_orm.h>
#include <catch2/catch.hpp>

using namespace sqlite_orm;

TEST_CASE("statement_serializer unique") {
    internal::storage_impl<> storage;
    internal::serializer_context<internal::storage_impl<>> context{storage};
    auto un = unique();
    auto value = serialize(un, context);
    REQUIRE(value == "UNIQUE");
}