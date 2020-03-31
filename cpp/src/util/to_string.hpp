#ifndef TWISTERX_SRC_UTIL_TO_STRING_H_
#define TWISTERX_SRC_UTIL_TO_STRING_H_

#include <string>
#include <arrow/array.h>
namespace twisterx {
namespace util {

template<typename TYPE>
std::string do_to_string_numeric(const std::shared_ptr<arrow::Array> &array, int index) {
  auto casted_array = std::static_pointer_cast<arrow::NumericArray<TYPE>>(array);
  return std::to_string(casted_array->Value(index));
}

std::string array_to_string(const std::shared_ptr<arrow::Array> &array, int index) {
  switch (array->type()->id()) {
    case arrow::Type::NA:return "NA";
    case arrow::Type::BOOL:break;
    case arrow::Type::UINT8:return do_to_string_numeric<arrow::UInt8Type>(array, index);
    case arrow::Type::INT8:return do_to_string_numeric<arrow::Int8Type>(array, index);
    case arrow::Type::UINT16:return do_to_string_numeric<arrow::UInt16Type>(array, index);
    case arrow::Type::INT16:return do_to_string_numeric<arrow::Int8Type>(array, index);
    case arrow::Type::UINT32:return do_to_string_numeric<arrow::UInt32Type>(array, index);
    case arrow::Type::INT32:return do_to_string_numeric<arrow::Int32Type>(array, index);
    case arrow::Type::UINT64:return do_to_string_numeric<arrow::UInt64Type>(array, index);
    case arrow::Type::INT64:return do_to_string_numeric<arrow::Int64Type>(array, index);
    case arrow::Type::HALF_FLOAT:return do_to_string_numeric<arrow::HalfFloatType>(array, index);
    case arrow::Type::FLOAT:return do_to_string_numeric<arrow::FloatType>(array, index);
    case arrow::Type::DOUBLE:return do_to_string_numeric<arrow::DoubleType>(array, index);
    case arrow::Type::STRING:return std::static_pointer_cast<arrow::StringArray>(array)->GetString(index);
    case arrow::Type::BINARY:break;
    case arrow::Type::FIXED_SIZE_BINARY:break;
    case arrow::Type::DATE32:break;
    case arrow::Type::DATE64:break;
    case arrow::Type::TIMESTAMP:break;
    case arrow::Type::TIME32:break;
    case arrow::Type::TIME64:break;
    case arrow::Type::INTERVAL:break;
    case arrow::Type::DECIMAL:break;
    case arrow::Type::LIST:break;
    case arrow::Type::STRUCT:break;
    case arrow::Type::UNION:break;
    case arrow::Type::DICTIONARY:break;
    case arrow::Type::MAP:break;
    case arrow::Type::EXTENSION:break;
    case arrow::Type::FIXED_SIZE_LIST:break;
    case arrow::Type::DURATION:break;
    case arrow::Type::LARGE_STRING:break;
    case arrow::Type::LARGE_BINARY:break;
    case arrow::Type::LARGE_LIST:break;
  }
  return "NA";
}
}
}

#endif //TWISTERX_SRC_UTIL_TO_STRING_H_
