/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SnssaiSmfInfoItem.h
 *
 * Set of parameters supported by SMF for a given S-NSSAI
 */

#ifndef SnssaiSmfInfoItem_H_
#define SnssaiSmfInfoItem_H_

#include "DnnSmfInfoItem.h"
#include "Snssai.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
/// Set of parameters supported by SMF for a given S-NSSAI
/// </summary>
class SnssaiSmfInfoItem {
 public:
  SnssaiSmfInfoItem();
  virtual ~SnssaiSmfInfoItem() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const SnssaiSmfInfoItem& rhs) const;
  bool operator!=(const SnssaiSmfInfoItem& rhs) const;

  /////////////////////////////////////////////
  /// SnssaiSmfInfoItem members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSNssai() const;
  void setSNssai(oai::model::common::Snssai const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::nrf::DnnSmfInfoItem> getDnnSmfInfoList() const;
  void setDnnSmfInfoList(
      std::vector<oai::model::nrf::DnnSmfInfoItem> const& value);

  friend void to_json(nlohmann::json& j, const SnssaiSmfInfoItem& o);
  friend void from_json(const nlohmann::json& j, SnssaiSmfInfoItem& o);

  [[nodiscard]] std::string to_string(int indent_level) const;

 protected:
  oai::model::common::Snssai m_SNssai;

  std::vector<oai::model::nrf::DnnSmfInfoItem> m_DnnSmfInfoList;
};

}  // namespace oai::model::nrf

#endif /* SnssaiSmfInfoItem_H_ */
