#include "test_enum.h"

#include <iostream>

void Test()
{
	try
	{
		auto eq = CSomeEnum::ToEnum("q");
		auto ew = CSomeEnum::ToEnum("w");
		auto ee = CSomeEnum::ToEnum("e");

		auto sq = CSomeEnum::ToString(eq);
		std::cout << "String equivalent of the 'q' literal is: " << sq <<std::endl;

		auto sw = CSomeEnum::ToString(ew);
		std::cout << "String equivalent of the 'w' literal is: " << sw << std::endl;

		auto se = CSomeEnum::ToString(ee);
		std::cout << "String equivalent of the 'e' literal is: " << se << std::endl;

		auto ew2 = CSomeEnum2::ToEnum("ww");
		
		auto sw2 = CSomeEnum2::ToString(ew2);
		std::cout << "String equivalent of the 'ww' literal is: " << sw2 << std::endl;

		std::cout << "Everuthing was converted correctly." << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << "There is some conversion error."<< std::endl;
	}

	try
	{
		CSomeEnum::ToEnum("455");
		std::cout << "There is some error in the SMART_ENUM. 455' is not presented in the CSomeEnum, the message must not be shown." << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << "The string: '455' is not presented in the CSomeEnum (expected behavior)." << std::endl;
	}
}