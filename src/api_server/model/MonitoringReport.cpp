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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringReport.h"
#include "Helpers.h"

#include <sstream>

namespace oai::udm::model {

MonitoringReport::MonitoringReport() {
  m_ReferenceId                   = 0;
  m_ReportIsSet                   = false;
  m_ReachabilityForSmsReportIsSet = false;
  m_Gpsi                          = "";
  m_GpsiIsSet                     = false;
  m_TimeStamp                     = "";
  m_ReachabilityReportIsSet       = false;
}

void MonitoringReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool MonitoringReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool MonitoringReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "MonitoringReport" : pathPrefix;

  if (gpsiIsSet()) {
    const std::string& value           = m_Gpsi;
    const std::string currentValuePath = _pathPrefix + ".gpsi";
  }

  return success;
}

bool MonitoringReport::operator==(const MonitoringReport& rhs) const {
  return

      (getReferenceId() == rhs.getReferenceId()) &&

      (getEventType() == rhs.getEventType()) &&

      ((!reportIsSet() && !rhs.reportIsSet()) ||
       (reportIsSet() && rhs.reportIsSet() &&
        getReport() == rhs.getReport())) &&

      ((!reachabilityForSmsReportIsSet() &&
        !rhs.reachabilityForSmsReportIsSet()) ||
       (reachabilityForSmsReportIsSet() &&
        rhs.reachabilityForSmsReportIsSet() &&
        getReachabilityForSmsReport() == rhs.getReachabilityForSmsReport())) &&

      ((!gpsiIsSet() && !rhs.gpsiIsSet()) ||
       (gpsiIsSet() && rhs.gpsiIsSet() && getGpsi() == rhs.getGpsi())) &&

      (getTimeStamp() == rhs.getTimeStamp()) &&

      ((!reachabilityReportIsSet() && !rhs.reachabilityReportIsSet()) ||
       (reachabilityReportIsSet() && rhs.reachabilityReportIsSet() &&
        getReachabilityReport() == rhs.getReachabilityReport()))

          ;
}

bool MonitoringReport::operator!=(const MonitoringReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MonitoringReport& o) {
  j                = nlohmann::json();
  j["referenceId"] = o.m_ReferenceId;
  j["eventType"]   = o.m_EventType;
  if (o.reportIsSet()) j["report"] = o.m_Report;
  if (o.reachabilityForSmsReportIsSet())
    j["reachabilityForSmsReport"] = o.m_ReachabilityForSmsReport;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  j["timeStamp"] = o.m_TimeStamp;
  if (o.reachabilityReportIsSet())
    j["reachabilityReport"] = o.m_ReachabilityReport;
}

void from_json(const nlohmann::json& j, MonitoringReport& o) {
  j.at("referenceId").get_to(o.m_ReferenceId);
  j.at("eventType").get_to(o.m_EventType);
  if (j.find("report") != j.end()) {
    j.at("report").get_to(o.m_Report);
    o.m_ReportIsSet = true;
  }
  if (j.find("reachabilityForSmsReport") != j.end()) {
    j.at("reachabilityForSmsReport").get_to(o.m_ReachabilityForSmsReport);
    o.m_ReachabilityForSmsReportIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  j.at("timeStamp").get_to(o.m_TimeStamp);
  if (j.find("reachabilityReport") != j.end()) {
    j.at("reachabilityReport").get_to(o.m_ReachabilityReport);
    o.m_ReachabilityReportIsSet = true;
  }
}

int32_t MonitoringReport::getReferenceId() const {
  return m_ReferenceId;
}
void MonitoringReport::setReferenceId(int32_t const value) {
  m_ReferenceId = value;
}
EventType MonitoringReport::getEventType() const {
  return m_EventType;
}
void MonitoringReport::setEventType(EventType const& value) {
  m_EventType = value;
}
Report MonitoringReport::getReport() const {
  return m_Report;
}
void MonitoringReport::setReport(Report const& value) {
  m_Report      = value;
  m_ReportIsSet = true;
}
bool MonitoringReport::reportIsSet() const {
  return m_ReportIsSet;
}
void MonitoringReport::unsetReport() {
  m_ReportIsSet = false;
}
ReachabilityForSmsReport MonitoringReport::getReachabilityForSmsReport() const {
  return m_ReachabilityForSmsReport;
}
void MonitoringReport::setReachabilityForSmsReport(
    ReachabilityForSmsReport const& value) {
  m_ReachabilityForSmsReport      = value;
  m_ReachabilityForSmsReportIsSet = true;
}
bool MonitoringReport::reachabilityForSmsReportIsSet() const {
  return m_ReachabilityForSmsReportIsSet;
}
void MonitoringReport::unsetReachabilityForSmsReport() {
  m_ReachabilityForSmsReportIsSet = false;
}
std::string MonitoringReport::getGpsi() const {
  return m_Gpsi;
}
void MonitoringReport::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool MonitoringReport::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void MonitoringReport::unsetGpsi() {
  m_GpsiIsSet = false;
}
std::string MonitoringReport::getTimeStamp() const {
  return m_TimeStamp;
}
void MonitoringReport::setTimeStamp(std::string const& value) {
  m_TimeStamp = value;
}
ReachabilityReport MonitoringReport::getReachabilityReport() const {
  return m_ReachabilityReport;
}
void MonitoringReport::setReachabilityReport(ReachabilityReport const& value) {
  m_ReachabilityReport      = value;
  m_ReachabilityReportIsSet = true;
}
bool MonitoringReport::reachabilityReportIsSet() const {
  return m_ReachabilityReportIsSet;
}
void MonitoringReport::unsetReachabilityReport() {
  m_ReachabilityReportIsSet = false;
}

}  // namespace oai::udm::model