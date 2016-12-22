#pragma once 

#include <vector>
#include <string>
#include <gtest/gtest.h>

#include "name.h"


namespace cpp53 {

class UnitTestUtil {
public:
    static void readWireData(const char* datafile, std::vector<unsigned char>& data);
    static void addDataPath(const std::string& directory);
    static void readWireData(const std::string& datastr, std::vector<unsigned char>& data);

    static ::testing::AssertionResult
    matchWireData(const char* dataexp1, const char* lenexp1,
                  const char* dataexp2, const char* lenexp2,
                  const void* data1, size_t len1,
                  const void* data2, size_t len2);

    static ::testing::AssertionResult
    matchName(const char* nameexp1, const char* nameexp2,
              const cpp53::Name& name1, const cpp53::Name& name2);

    /*
    static void
    createRequestMessage(isc::dns::Message& request_message,
                         const isc::dns::Opcode& opcode,
                         const uint16_t qid,
                         const isc::dns::Name& name,
                         const isc::dns::RRClass& rrclass,
                         const isc::dns::RRType& rrtype);
                         */


};
}
