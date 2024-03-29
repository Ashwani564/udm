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

#include "Atom.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

Atom::Atom() {
  m_Attr          = "";
  m_Negative      = false;
  m_NegativeIsSet = false;
}

void Atom::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool Atom::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Atom::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "Atom" : pathPrefix;

  return success;
}

bool Atom::operator==(const Atom& rhs) const {
  return

      (getAttr() == rhs.getAttr()) &&

      (getValue() == rhs.getValue()) &&

      ((!negativeIsSet() && !rhs.negativeIsSet()) ||
       (negativeIsSet() && rhs.negativeIsSet() &&
        isNegative() == rhs.isNegative()))

          ;
}

bool Atom::operator!=(const Atom& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Atom& o) {
  j          = nlohmann::json();
  j["attr"]  = o.m_Attr;
  j["value"] = o.m_Value;
  if (o.negativeIsSet()) j["negative"] = o.m_Negative;
}

void from_json(const nlohmann::json& j, Atom& o) {
  j.at("attr").get_to(o.m_Attr);
  j.at("value").get_to(o.m_Value);
  if (j.find("negative") != j.end()) {
    j.at("negative").get_to(o.m_Negative);
    o.m_NegativeIsSet = true;
  }
}

std::string Atom::getAttr() const {
  return m_Attr;
}
void Atom::setAttr(std::string const& value) {
  m_Attr = value;
}
nlohmann::json Atom::getValue() const {
  return m_Value;
}
void Atom::setValue(nlohmann::json const& value) {
  m_Value = value;
}
bool Atom::isNegative() const {
  return m_Negative;
}
void Atom::setNegative(bool const value) {
  m_Negative      = value;
  m_NegativeIsSet = true;
}
bool Atom::negativeIsSet() const {
  return m_NegativeIsSet;
}
void Atom::unsetNegative() {
  m_NegativeIsSet = false;
}

}  // namespace oai::model::common
