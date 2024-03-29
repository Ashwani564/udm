/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RecordIdList.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

RecordIdList::RecordIdList() {}

void RecordIdList::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RecordIdList::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RecordIdList::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RecordIdList" : pathPrefix;

  /* RecordIdList */ {
    const std::vector<std::string>& value = m_RecordIdList;
    const std::string currentValuePath    = _pathPrefix + ".recordIdList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const std::string& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        i++;
      }
    }
  }

  return success;
}

bool RecordIdList::operator==(const RecordIdList& rhs) const {
  return

      (getRecordIdList() == rhs.getRecordIdList())

          ;
}

bool RecordIdList::operator!=(const RecordIdList& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RecordIdList& o) {
  j                 = nlohmann::json();
  j["recordIdList"] = o.m_RecordIdList;
}

void from_json(const nlohmann::json& j, RecordIdList& o) {
  j.at("recordIdList").get_to(o.m_RecordIdList);
}

std::vector<std::string> RecordIdList::getRecordIdList() const {
  return m_RecordIdList;
}
void RecordIdList::setRecordIdList(std::vector<std::string> const& value) {
  m_RecordIdList = value;
}

}  // namespace oai::model::udsf
