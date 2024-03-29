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
/*
 * CoreNetworkTypeRm.h
 *
 *
 */

#ifndef CoreNetworkTypeRm_H_
#define CoreNetworkTypeRm_H_

#include "CoreNetworkType.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class CoreNetworkTypeRm : public CoreNetworkType {
 public:
  CoreNetworkTypeRm();
  virtual ~CoreNetworkTypeRm() = default;

  bool validate(
      std::stringstream& msg, const std::string& pathPrefix) const override;

  friend void to_json(nlohmann::json& j, const CoreNetworkTypeRm& o);
  friend void from_json(const nlohmann::json& j, CoreNetworkTypeRm& o);

 protected:
};

}  // namespace oai::model::common

#endif /* CoreNetworkTypeRm_H_ */
