#pragma once

#include <cstdint>

#include "CExoFile.hpp"
#include "CExoString.hpp"
#include "TLK_FILE_HEADER.hpp"

namespace NWNXLib {

namespace API {

struct CTlkFile
    : CExoFile
{
    TLK_FILE_HEADER m_header;

    // The below are auto generated stubs.
    CTlkFile();
    CTlkFile(const CTlkFile&);
    CTlkFile& operator=(const CTlkFile&);

    CTlkFile(CExoString);
    int32_t ReadHeader();
};

void CTlkFile__CTlkFileCtor(CTlkFile* thisPtr, CExoString);
int32_t CTlkFile__ReadHeader(CTlkFile* thisPtr);

}

}