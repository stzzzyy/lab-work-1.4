#include <iostream>

int main() {

    unsigned short usUnsignedShortValue;
    int            nIntValue;
    float          fFloatValue;
    double         dDoubleValue;

    unsigned short* pusUnsignedShortValue = &usUnsignedShortValue;
    int*            pnIntValue            = &nIntValue;
    float*          pfFloatValue          = &fFloatValue;
    double*         pdDoubleValue         = &dDoubleValue;

    *pusUnsignedShortValue = 177;
    *pnIntValue            = -189;
    *pfFloatValue          = 84.353535f;
    *pdDoubleValue         = -2.6e13;

    unsigned short& refUnsignedShortValue = usUnsignedShortValue;
    int&            refIntValue           = nIntValue;
    float&          refFloatValue         = fFloatValue;
    double&         refDoubleValue        = dDoubleValue;

    void* pVoid;


    std::cout << "\n            PART-1: Variables (initialized via *pointer) \n\n";
    std::cout << "usUnsignedShortValue: "          << usUnsignedShortValue                          << std::endl;
    std::cout << "nIntValue: "                     << nIntValue                                     << std::endl;
    std::cout << "fFloatValue: "                   << fFloatValue                                   << std::endl;
    std::cout << "dDoubleValue: "                  << dDoubleValue                                  << std::endl;
    std::cout << "\n";

    std::cout << "\n            PART-2: Sizes of base variables and pointers \n\n";
    std::cout << "Size of usUnsignedShortValue: "  << sizeof(usUnsignedShortValue)      << " bytes" << std::endl;
    std::cout << "Size of pusUnsignedShortValue: " << sizeof(pusUnsignedShortValue)     << " bytes" << std::endl;
    std::cout << "Size of nIntValue: "             << sizeof(nIntValue)                 << " bytes" << std::endl;
    std::cout << "Size of pnIntValue: "            << sizeof(pnIntValue)                << " bytes" << std::endl;
    std::cout << "Size of fFloatValue: "           << sizeof(fFloatValue)               << " bytes" << std::endl;
    std::cout << "Size of pfFloatValue: "          << sizeof(pfFloatValue)              << " bytes" << std::endl;
    std::cout << "Size of dDoubleValue: "          << sizeof(dDoubleValue)              << " bytes" << std::endl;
    std::cout << "Size of pdDoubleValue: "         << sizeof(pdDoubleValue)             << " bytes" << std::endl;
    std::cout << "\n";

    std::cout << "\n            PART-3: Sizes of references \n\n";
    std::cout << "Size of refUnsignedShortValue: " << sizeof(refUnsignedShortValue)     << " bytes" << std::endl;
    std::cout << "Size of refIntValue: "           << sizeof(refIntValue)               << " bytes" << std::endl;
    std::cout << "Size of refFloatValue: "         << sizeof(refFloatValue)             << " bytes" << std::endl;
    std::cout << "Size of refDoubleValue: "        << sizeof(refDoubleValue)            << " bytes" << std::endl;
    std::cout << "\n";

    std::cout << "\n            PART-4: Generic pointer void* addressing \n\n";
    pVoid = &pusUnsignedShortValue;
    std::cout << "pVoid:                  " << pVoid                     << std::endl;
    std::cout << "&pusUnsignedShortValue: " << &pusUnsignedShortValue    << std::endl;
    std::cout << "\n";

    pVoid = &pnIntValue;
    std::cout << "pVoid:                  " << pVoid                     << std::endl;
    std::cout << "&pnIntValue:            " << &pnIntValue               << std::endl;
    std::cout << "\n";

    pVoid = &pfFloatValue;
    std::cout << "pVoid:                  " << pVoid                     << std::endl;
    std::cout << "&pfFloatValue:          " << &pfFloatValue             << std::endl;
    std::cout << "\n";

    pVoid = &pdDoubleValue;
    std::cout << "pVoid:                  " << pVoid                     << std::endl;
    std::cout << "&pdDoubleValue:         " << &pdDoubleValue            << std::endl;
    std::cout << "\n";

    std::cout << "Size of pVoid:          " << sizeof(pVoid) << " bytes" << std::endl;


    return 0;

}
