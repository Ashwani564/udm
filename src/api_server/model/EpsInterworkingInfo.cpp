/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EpsInterworkingInfo.h"

namespace oai::udm::model {

EpsInterworkingInfo::EpsInterworkingInfo() {
  m_EpsIwkPgwsIsSet = false;
}

EpsInterworkingInfo::~EpsInterworkingInfo() {}

void EpsInterworkingInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const EpsInterworkingInfo& o) {
  j = nlohmann::json();
  if (o.epsIwkPgwsIsSet() || !o.m_EpsIwkPgws.empty())
    j["epsIwkPgws"] = o.m_EpsIwkPgws;
}

void from_json(const nlohmann::json& j, EpsInterworkingInfo& o) {
  if (j.find("epsIwkPgws") != j.end()) {
    j.at("epsIwkPgws").get_to(o.m_EpsIwkPgws);
    o.m_EpsIwkPgwsIsSet = true;
  }
}

std::map<std::string, EpsIwkPgw>& EpsInterworkingInfo::getEpsIwkPgws() {
  return m_EpsIwkPgws;
}
void EpsInterworkingInfo::setEpsIwkPgws(
    std::map<std::string, EpsIwkPgw> const& value) {
  m_EpsIwkPgws      = value;
  m_EpsIwkPgwsIsSet = true;
}
bool EpsInterworkingInfo::epsIwkPgwsIsSet() const {
  return m_EpsIwkPgwsIsSet;
}
void EpsInterworkingInfo::unsetEpsIwkPgws() {
  m_EpsIwkPgwsIsSet = false;
}

}  // namespace oai::udm::model
