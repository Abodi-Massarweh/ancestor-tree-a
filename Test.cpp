#include "doctest.h"
#include "familytree.hpp"
//using namespace ariel;

TEST_CASE("Test case 1 (BETA)") {
    family::Tree T("jack");
    T.addFather("jack","willson");
    T.addMother("jack","fedora");
    T.addMother("willson","smye");
    T.addMother("fedora","samya");
    T.addFather("willson","sami");
    T.addFather("fedora","messi");



            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));

}

TEST_CASE("Test case 2") {
    family::Tree T("jack");
    T.addFather("jack","willson");
    T.addMother("jack","fedora");
    T.addMother("willson","smye");
    T.addMother("fedora","samya");
    T.addFather("willson","sami");
    T.addFather("fedora","messi");



            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));

            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
            CHECK(T.relation("jack") == string("me"));
            CHECK(T.relation("willson") == string("father"));
            CHECK(T.relation("fedora") == string("mother"));
            CHECK(T.relation("smye") == string("grandmother"));
            CHECK(T.relation("samya") == string("grandmother"));
            CHECK(T.relation("sami") == string("grandfather"));
            CHECK(T.relation("messi") == string("grandfather"));
}