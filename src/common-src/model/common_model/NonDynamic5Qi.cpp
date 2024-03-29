/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NonDynamic5Qi.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

NonDynamic5Qi::NonDynamic5Qi() {
  m_PriorityLevel              = 0;
  m_PriorityLevelIsSet         = false;
  m_AverWindow                 = 2000;
  m_AverWindowIsSet            = false;
  m_MaxDataBurstVol            = 0;
  m_MaxDataBurstVolIsSet       = false;
  m_ExtMaxDataBurstVol         = 0;
  m_ExtMaxDataBurstVolIsSet    = false;
  m_CnPacketDelayBudgetDl      = 0;
  m_CnPacketDelayBudgetDlIsSet = false;
  m_CnPacketDelayBudgetUl      = 0;
  m_CnPacketDelayBudgetUlIsSet = false;
}

void NonDynamic5Qi::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool NonDynamic5Qi::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NonDynamic5Qi::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NonDynamic5Qi" : pathPrefix;

  if (priorityLevelIsSet()) {
    const int32_t& value               = m_PriorityLevel;
    const std::string currentValuePath = _pathPrefix + ".priorityLevel";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 127) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 127;";
    }
  }

  if (averWindowIsSet()) {
    const int32_t& value               = m_AverWindow;
    const std::string currentValuePath = _pathPrefix + ".averWindow";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 4095) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 4095;";
    }
  }

  if (maxDataBurstVolIsSet()) {
    const int32_t& value               = m_MaxDataBurstVol;
    const std::string currentValuePath = _pathPrefix + ".maxDataBurstVol";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 4095) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 4095;";
    }
  }

  if (extMaxDataBurstVolIsSet()) {
    const int32_t& value               = m_ExtMaxDataBurstVol;
    const std::string currentValuePath = _pathPrefix + ".extMaxDataBurstVol";

    if (value < 4096) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 4096;";
    }
    if (value > 2000000) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 2000000;";
    }
  }

  if (cnPacketDelayBudgetDlIsSet()) {
    const int32_t& value               = m_CnPacketDelayBudgetDl;
    const std::string currentValuePath = _pathPrefix + ".cnPacketDelayBudgetDl";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  if (cnPacketDelayBudgetUlIsSet()) {
    const int32_t& value               = m_CnPacketDelayBudgetUl;
    const std::string currentValuePath = _pathPrefix + ".cnPacketDelayBudgetUl";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  return success;
}

bool NonDynamic5Qi::operator==(const NonDynamic5Qi& rhs) const {
  return

      ((!priorityLevelIsSet() && !rhs.priorityLevelIsSet()) ||
       (priorityLevelIsSet() && rhs.priorityLevelIsSet() &&
        getPriorityLevel() == rhs.getPriorityLevel())) &&

      ((!averWindowIsSet() && !rhs.averWindowIsSet()) ||
       (averWindowIsSet() && rhs.averWindowIsSet() &&
        getAverWindow() == rhs.getAverWindow())) &&

      ((!maxDataBurstVolIsSet() && !rhs.maxDataBurstVolIsSet()) ||
       (maxDataBurstVolIsSet() && rhs.maxDataBurstVolIsSet() &&
        getMaxDataBurstVol() == rhs.getMaxDataBurstVol())) &&

      ((!extMaxDataBurstVolIsSet() && !rhs.extMaxDataBurstVolIsSet()) ||
       (extMaxDataBurstVolIsSet() && rhs.extMaxDataBurstVolIsSet() &&
        getExtMaxDataBurstVol() == rhs.getExtMaxDataBurstVol())) &&

      ((!cnPacketDelayBudgetDlIsSet() && !rhs.cnPacketDelayBudgetDlIsSet()) ||
       (cnPacketDelayBudgetDlIsSet() && rhs.cnPacketDelayBudgetDlIsSet() &&
        getCnPacketDelayBudgetDl() == rhs.getCnPacketDelayBudgetDl())) &&

      ((!cnPacketDelayBudgetUlIsSet() && !rhs.cnPacketDelayBudgetUlIsSet()) ||
       (cnPacketDelayBudgetUlIsSet() && rhs.cnPacketDelayBudgetUlIsSet() &&
        getCnPacketDelayBudgetUl() == rhs.getCnPacketDelayBudgetUl()))

          ;
}

bool NonDynamic5Qi::operator!=(const NonDynamic5Qi& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NonDynamic5Qi& o) {
  j = nlohmann::json();
  if (o.priorityLevelIsSet()) j["priorityLevel"] = o.m_PriorityLevel;
  if (o.averWindowIsSet()) j["averWindow"] = o.m_AverWindow;
  if (o.maxDataBurstVolIsSet()) j["maxDataBurstVol"] = o.m_MaxDataBurstVol;
  if (o.extMaxDataBurstVolIsSet())
    j["extMaxDataBurstVol"] = o.m_ExtMaxDataBurstVol;
  if (o.cnPacketDelayBudgetDlIsSet())
    j["cnPacketDelayBudgetDl"] = o.m_CnPacketDelayBudgetDl;
  if (o.cnPacketDelayBudgetUlIsSet())
    j["cnPacketDelayBudgetUl"] = o.m_CnPacketDelayBudgetUl;
}

void from_json(const nlohmann::json& j, NonDynamic5Qi& o) {
  if (j.find("priorityLevel") != j.end()) {
    j.at("priorityLevel").get_to(o.m_PriorityLevel);
    o.m_PriorityLevelIsSet = true;
  }
  if (j.find("averWindow") != j.end()) {
    j.at("averWindow").get_to(o.m_AverWindow);
    o.m_AverWindowIsSet = true;
  }
  if (j.find("maxDataBurstVol") != j.end()) {
    j.at("maxDataBurstVol").get_to(o.m_MaxDataBurstVol);
    o.m_MaxDataBurstVolIsSet = true;
  }
  if (j.find("extMaxDataBurstVol") != j.end()) {
    j.at("extMaxDataBurstVol").get_to(o.m_ExtMaxDataBurstVol);
    o.m_ExtMaxDataBurstVolIsSet = true;
  }
  if (j.find("cnPacketDelayBudgetDl") != j.end()) {
    j.at("cnPacketDelayBudgetDl").get_to(o.m_CnPacketDelayBudgetDl);
    o.m_CnPacketDelayBudgetDlIsSet = true;
  }
  if (j.find("cnPacketDelayBudgetUl") != j.end()) {
    j.at("cnPacketDelayBudgetUl").get_to(o.m_CnPacketDelayBudgetUl);
    o.m_CnPacketDelayBudgetUlIsSet = true;
  }
}

int32_t NonDynamic5Qi::getPriorityLevel() const {
  return m_PriorityLevel;
}
void NonDynamic5Qi::setPriorityLevel(int32_t const value) {
  m_PriorityLevel      = value;
  m_PriorityLevelIsSet = true;
}
bool NonDynamic5Qi::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}
void NonDynamic5Qi::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}
int32_t NonDynamic5Qi::getAverWindow() const {
  return m_AverWindow;
}
void NonDynamic5Qi::setAverWindow(int32_t const value) {
  m_AverWindow      = value;
  m_AverWindowIsSet = true;
}
bool NonDynamic5Qi::averWindowIsSet() const {
  return m_AverWindowIsSet;
}
void NonDynamic5Qi::unsetAverWindow() {
  m_AverWindowIsSet = false;
}
int32_t NonDynamic5Qi::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}
void NonDynamic5Qi::setMaxDataBurstVol(int32_t const value) {
  m_MaxDataBurstVol      = value;
  m_MaxDataBurstVolIsSet = true;
}
bool NonDynamic5Qi::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}
void NonDynamic5Qi::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}
int32_t NonDynamic5Qi::getExtMaxDataBurstVol() const {
  return m_ExtMaxDataBurstVol;
}
void NonDynamic5Qi::setExtMaxDataBurstVol(int32_t const value) {
  m_ExtMaxDataBurstVol      = value;
  m_ExtMaxDataBurstVolIsSet = true;
}
bool NonDynamic5Qi::extMaxDataBurstVolIsSet() const {
  return m_ExtMaxDataBurstVolIsSet;
}
void NonDynamic5Qi::unsetExtMaxDataBurstVol() {
  m_ExtMaxDataBurstVolIsSet = false;
}
int32_t NonDynamic5Qi::getCnPacketDelayBudgetDl() const {
  return m_CnPacketDelayBudgetDl;
}
void NonDynamic5Qi::setCnPacketDelayBudgetDl(int32_t const value) {
  m_CnPacketDelayBudgetDl      = value;
  m_CnPacketDelayBudgetDlIsSet = true;
}
bool NonDynamic5Qi::cnPacketDelayBudgetDlIsSet() const {
  return m_CnPacketDelayBudgetDlIsSet;
}
void NonDynamic5Qi::unsetCnPacketDelayBudgetDl() {
  m_CnPacketDelayBudgetDlIsSet = false;
}
int32_t NonDynamic5Qi::getCnPacketDelayBudgetUl() const {
  return m_CnPacketDelayBudgetUl;
}
void NonDynamic5Qi::setCnPacketDelayBudgetUl(int32_t const value) {
  m_CnPacketDelayBudgetUl      = value;
  m_CnPacketDelayBudgetUlIsSet = true;
}
bool NonDynamic5Qi::cnPacketDelayBudgetUlIsSet() const {
  return m_CnPacketDelayBudgetUlIsSet;
}
void NonDynamic5Qi::unsetCnPacketDelayBudgetUl() {
  m_CnPacketDelayBudgetUlIsSet = false;
}

}  // namespace oai::model::common
