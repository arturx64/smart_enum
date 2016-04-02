#pragma once

#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <exception>

#define EXPAND( x ) x
#define GENERATE_ARRAY_1( p1 ) int arr[] = {(Fitter)p1};
#define GENERATE_ARRAY_2( p1, p2 ) int arr[] = { (Fitter)p1, (Fitter)p2};
#define GENERATE_ARRAY_3( p1, p2, p3 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3 };
#define GENERATE_ARRAY_4( p1, p2, p3, p4 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4 };
#define GENERATE_ARRAY_5( p1, p2, p3, p4, p5 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5 };
#define GENERATE_ARRAY_6( p1, p2, p3, p4, p5, p6 )  int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6 };
#define GENERATE_ARRAY_7( p1, p2, p3, p4, p5, p6, p7 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7 };
#define GENERATE_ARRAY_8( p1, p2, p3, p4, p5, p6, p7, p8 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8 };
#define GENERATE_ARRAY_9( p1, p2, p3, p4, p5, p6, p7, p8, p9 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9 };
#define GENERATE_ARRAY_10( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10 };
#define GENERATE_ARRAY_11( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10, (Fitter)p11 };
#define GENERATE_ARRAY_12( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10, (Fitter)p11, (Fitter)p12 };
#define GENERATE_ARRAY_13( p1, p2, p3, p4, p5, p6, p7, p8,  p9, p10, p11, p12, p13 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10, (Fitter)p11, (Fitter)p12, (Fitter)p13 };
#define GENERATE_ARRAY_14( p1, p2, p3, p4, p5, p6, p7, p8,  p9, p10, p11, p12, p13, p14 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10, (Fitter)p11, (Fitter)p12, (Fitter)p13, (Fitter)p14 };
#define GENERATE_ARRAY_15( p1, p2, p3, p4, p5, p6, p7, p8,  p9, p10, p11, p12, p13, p14, p15 ) int arr[] = { (Fitter)p1, (Fitter)p2, (Fitter)p3, (Fitter)p4, (Fitter)p5, (Fitter)p6, (Fitter)p7, (Fitter)p8, (Fitter)p9, (Fitter)p10, (Fitter)p11, (Fitter)p12, (Fitter)p13, (Fitter)p14, (Fitter)p15 };
#define GENERATE_ARRAY_BY_CNT( a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, ... ) a16
#define GENERATE_ARRAY_ARG_SELECTOR( ... ) EXPAND(GENERATE_ARRAY_BY_CNT( __VA_ARGS__ , GENERATE_ARRAY_15, GENERATE_ARRAY_14, GENERATE_ARRAY_13, GENERATE_ARRAY_12, GENERATE_ARRAY_11, GENERATE_ARRAY_10, GENERATE_ARRAY_9,  GENERATE_ARRAY_8,  GENERATE_ARRAY_7,  GENERATE_ARRAY_6,  GENERATE_ARRAY_5,  GENERATE_ARRAY_4,  GENERATE_ARRAY_3, GENERATE_ARRAY_2, GENERATE_ARRAY_1 )(__VA_ARGS__))
#define GENERATE_ARRAY( ... ) EXPAND(GENERATE_ARRAY_ARG_SELECTOR(__VA_ARGS__))
#define PP_NARG(...) EXPAND(PP_NARG_(__VA_ARGS__, EXPAND(PP_RSEQ_N())))
#define PP_NARG_(...) EXPAND(PP_ARG_N(__VA_ARGS__))
#define PP_ARG_N( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, N, ...) N
#define PP_RSEQ_N() 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define SMART_ENUM(EnumName, ...) \
enum EnumName {__VA_ARGS__}; \
class C##EnumName \
{ \
	static const size_t DATA_SIZE_FACTOR = 10; \
public: \
	static EnumName ToEnum(const std::string& str) \
	{ \
		return instance().ToEnum(str); \
	} \
	static std::string ToString(EnumName en) \
	{ \
		return instance().ToString(en); \
	} \
private: \
	struct Fitter \
	{ \
		template <typename Any> \
		EnumName& operator = (Any value) { return m_value; } \
		Fitter(EnumName value) : m_value(value) { } \
		operator EnumName() const { return m_value; } \
	private: \
		EnumName  m_value; \
	}; \
	struct SEnumHelper \
	{ \
		SEnumHelper() \
		{ \
			makeEnum(); \
		} \
		EnumName ToEnum(const std::string& str) const \
		{ \
			return m_data.m_implementation.findEnum(str); \
		} \
		std::string ToString(EnumName en) const \
		{ \
			return m_data.m_implementation.findString(en); \
		} \
	private: \
		void makeEnum() \
		{ \
			EXPAND(GENERATE_ARRAY(__VA_ARGS__)); \
			std::string strs(#__VA_ARGS__); \
			auto startSim = std::string::npos; \
			do \
			{ \
				startSim = strs.find_first_of('='); \
				if (startSim != std::string::npos) \
				{ \
					auto endSim = strs.find_first_of(',', startSim); \
					if (endSim != std::string::npos) \
					{ \
						strs.erase(startSim, endSim - startSim); \
					} \
					else \
					{ \
						strs.erase(startSim, endSim - strs.size()); \
					} \
				} \
			} while (startSim != std::string::npos); \
			std::replace(strs.begin(), strs.end(), ',', ' '); \
			std::vector<std::string> tokens; \
			std::istringstream iss(strs); \
			std::copy(std::istream_iterator<std::string>(iss), \
				std::istream_iterator<std::string>(), \
				std::back_inserter(tokens)); \
			m_data.m_implementation.init(tokens, arr); \
		} \
		struct SEnumData \
		{ \
			static const size_t ENUM_SIZE = EXPAND(PP_NARG(__VA_ARGS__)); \
			template <size_t SIZE> \
			struct SArray \
			{ \
			private: \
				std::pair<int, std::string> enumIdStrings[SIZE]; \
			public: \
				void init(const std::vector<std::string>& tokens, int* arrEnum) \
				{ \
					for (size_t index = 0; index < SIZE; ++index) \
					{ \
						enumIdStrings[index] = std::make_pair(arrEnum[index], tokens[index]); \
					} \
				} \
				EnumName findEnum(const std::string& str) const \
				{ \
					for (size_t index = 0; index < SIZE; ++index) \
					{ \
						if (enumIdStrings[index].second == str) \
							return (EnumName)enumIdStrings[index].first; \
					} \
					throw std::exception(); \
					return EnumName(); \
				} \
				std::string findString(EnumName en) const \
				{ \
					for (size_t index = 0; index < SIZE; ++index) \
					{ \
						if ((EnumName)(enumIdStrings[index].first == en)) \
							return enumIdStrings[index].second; \
					} \
					throw std::exception(); \
					return std::string(); \
				} \
			}; \
			template <size_t SIZE> \
			struct SHash \
			{ \
			private: \
				std::unordered_map<int, const char*> enumIds; \
				std::unordered_map<std::string, int> enumStings; \
			public: \
				void init(const std::vector<std::string>& tokens, int* arrEnum) \
				{ \
					for (size_t index = 0; index < SIZE; ++index)  \
					{ \
						std::pair<std::unordered_map<std::string, int>::iterator, bool> iter = enumStings.emplace(tokens[index], arrEnum[index]); \
						enumIds[arrEnum[index]] = iter.first->first.c_str(); \
					} \
				} \
				EnumName findEnum(const std::string& str) const \
				{ \
					const auto& res = enumStings.find(str); \
					if (res != enumStings.end()) \
					{ \
						return (EnumName)res->second; \
					} \
					throw std::exception(); \
					return EnumName(); \
				} \
				std::string findString(EnumName en) const \
				{ \
					const auto& res = enumIds.find(en); \
					if (res != enumIds.end()) \
					{ \
						return res->second; \
					} \
					throw std::exception(); \
					return std::string(); \
				} \
			}; \
			template<bool, typename L, typename R> struct IF { typedef R type; }; \
			template< typename L, typename R> struct IF<true, L, R>{ typedef L type; }; \
			IF< (ENUM_SIZE <= DATA_SIZE_FACTOR), SArray<ENUM_SIZE>, SHash<ENUM_SIZE> >::type m_implementation; \
		} m_data; \
	}; \
	static SEnumHelper& instance() \
	{ \
		static SEnumHelper helper; \
		return helper; \
	} \
};
