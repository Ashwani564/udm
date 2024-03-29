/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SmPolicyDecision.h
 *
 *
 */

#ifndef SmPolicyDecision_H_
#define SmPolicyDecision_H_

#include "UsageMonitoringData.h"
#include "ChargingData.h"
#include "PccRule.h"
#include "SmPolicyAssociationReleaseCause.h"
#include <string>
#include "ChargingInformation.h"
#include "ConditionData.h"
#include "RequestedRuleData.h"
#include "BridgeManagementContainer.h"
#include <vector>
#include "QosCharacteristics.h"
#include "PresenceInfoRm.h"
#include "PolicyControlRequestTrigger.h"
#include "RequestedUsageData.h"
#include "TrafficControlData.h"
#include "SessionRule.h"
#include "QosFlowUsage.h"
#include "QosData.h"
#include "QosMonitoringData.h"
#include "PortManagementContainer.h"
#include <map>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class SmPolicyDecision {
 public:
  SmPolicyDecision();
  virtual ~SmPolicyDecision() = default;

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

  bool operator==(const SmPolicyDecision& rhs) const;
  bool operator!=(const SmPolicyDecision& rhs) const;

  /////////////////////////////////////////////
  /// SmPolicyDecision members

  /// <summary>
  /// A map of Sessionrules with the content being the SessionRule as described
  /// in subclause 5.6.2.7.
  /// </summary>
  std::map<std::string, oai::model::pcf::SessionRule> getSessRules() const;
  void setSessRules(
      std::map<std::string, oai::model::pcf::SessionRule> const& value);
  bool sessRulesIsSet() const;
  void unsetSessRules();
  /// <summary>
  /// A map of PCC rules with the content being the PCCRule as described in
  /// subclause 5.6.2.6.
  /// </summary>
  std::map<std::string, oai::model::pcf::PccRule> getPccRules() const;
  void setPccRules(
      std::map<std::string, oai::model::pcf::PccRule> const& value);
  bool pccRulesIsSet() const;
  void unsetPccRules();
  /// <summary>
  /// If it is included and set to true, it indicates the P-CSCF Restoration is
  /// requested.
  /// </summary>
  bool isPcscfRestIndication() const;
  void setPcscfRestIndication(bool const value);
  bool pcscfRestIndicationIsSet() const;
  void unsetPcscfRestIndication();
  /// <summary>
  /// Map of QoS data policy decisions.
  /// </summary>
  std::map<std::string, oai::model::pcf::QosData> getQosDecs() const;
  void setQosDecs(std::map<std::string, oai::model::pcf::QosData> const& value);
  bool qosDecsIsSet() const;
  void unsetQosDecs();
  /// <summary>
  /// Map of Charging data policy decisions.
  /// </summary>
  std::map<std::string, oai::model::pcf::ChargingData> getChgDecs() const;
  void setChgDecs(
      std::map<std::string, oai::model::pcf::ChargingData> const& value);
  bool chgDecsIsSet() const;
  void unsetChgDecs();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::ChargingInformation getChargingInfo() const;
  void setChargingInfo(oai::model::pcf::ChargingInformation const& value);
  bool chargingInfoIsSet() const;
  void unsetChargingInfo();
  /// <summary>
  /// Map of Traffic Control data policy decisions.
  /// </summary>
  std::map<std::string, oai::model::pcf::TrafficControlData> getTraffContDecs()
      const;
  void setTraffContDecs(
      std::map<std::string, oai::model::pcf::TrafficControlData> const& value);
  bool traffContDecsIsSet() const;
  void unsetTraffContDecs();
  /// <summary>
  /// Map of Usage Monitoring data policy decisions.
  /// </summary>
  std::map<std::string, oai::model::pcf::UsageMonitoringData> getUmDecs() const;
  void setUmDecs(
      std::map<std::string, oai::model::pcf::UsageMonitoringData> const& value);
  bool umDecsIsSet() const;
  void unsetUmDecs();
  /// <summary>
  /// Map of QoS characteristics for non standard 5QIs. This map uses the 5QI
  /// values as keys.
  /// </summary>
  std::map<std::string, oai::model::pcf::QosCharacteristics> getQosChars()
      const;
  void setQosChars(
      std::map<std::string, oai::model::pcf::QosCharacteristics> const& value);
  bool qosCharsIsSet() const;
  void unsetQosChars();
  /// <summary>
  /// Map of QoS Monitoring data policy decisions.
  /// </summary>
  std::map<std::string, oai::model::pcf::QosMonitoringData> getQosMonDecs()
      const;
  void setQosMonDecs(
      std::map<std::string, oai::model::pcf::QosMonitoringData> const& value);
  bool qosMonDecsIsSet() const;
  void unsetQosMonDecs();
  /// <summary>
  ///
  /// </summary>
  int32_t getReflectiveQoSTimer() const;
  void setReflectiveQoSTimer(int32_t const value);
  bool reflectiveQoSTimerIsSet() const;
  void unsetReflectiveQoSTimer();
  /// <summary>
  /// A map of condition data with the content being as described in
  /// subclause 5.6.2.9.
  /// </summary>
  std::map<std::string, oai::model::pcf::ConditionData> getConds() const;
  void setConds(
      std::map<std::string, oai::model::pcf::ConditionData> const& value);
  bool condsIsSet() const;
  void unsetConds();
  /// <summary>
  ///
  /// </summary>
  std::string getRevalidationTime() const;
  void setRevalidationTime(std::string const& value);
  bool revalidationTimeIsSet() const;
  void unsetRevalidationTime();
  /// <summary>
  /// Indicates the offline charging is applicable to the PDU session when it is
  /// included and set to true.
  /// </summary>
  bool isOffline() const;
  void setOffline(bool const value);
  bool offlineIsSet() const;
  void unsetOffline();
  /// <summary>
  /// Indicates the online charging is applicable to the PDU session when it is
  /// included and set to true.
  /// </summary>
  bool isOnline() const;
  void setOnline(bool const value);
  bool onlineIsSet() const;
  void unsetOnline();
  /// <summary>
  /// Defines the policy control request triggers subscribed by the PCF.
  /// </summary>
  std::vector<oai::model::pcf::PolicyControlRequestTrigger>
  getPolicyCtrlReqTriggers() const;
  void setPolicyCtrlReqTriggers(
      std::vector<oai::model::pcf::PolicyControlRequestTrigger> const& value);
  bool policyCtrlReqTriggersIsSet() const;
  void unsetPolicyCtrlReqTriggers();
  /// <summary>
  /// Defines the last list of rule control data requested by the PCF.
  /// </summary>
  std::vector<oai::model::pcf::RequestedRuleData> getLastReqRuleData() const;
  void setLastReqRuleData(
      std::vector<oai::model::pcf::RequestedRuleData> const& value);
  bool lastReqRuleDataIsSet() const;
  void unsetLastReqRuleData();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::RequestedUsageData getLastReqUsageData() const;
  void setLastReqUsageData(oai::model::pcf::RequestedUsageData const& value);
  bool lastReqUsageDataIsSet() const;
  void unsetLastReqUsageData();
  /// <summary>
  /// Map of PRA information.
  /// </summary>
  std::map<std::string, oai::model::common::PresenceInfoRm> getPraInfos() const;
  void setPraInfos(
      std::map<std::string, oai::model::common::PresenceInfoRm> const& value);
  bool praInfosIsSet() const;
  void unsetPraInfos();
  /// <summary>
  ///
  /// </summary>
  int32_t getIpv4Index() const;
  void setIpv4Index(int32_t const value);
  bool ipv4IndexIsSet() const;
  void unsetIpv4Index();
  /// <summary>
  ///
  /// </summary>
  int32_t getIpv6Index() const;
  void setIpv6Index(int32_t const value);
  bool ipv6IndexIsSet() const;
  void unsetIpv6Index();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::QosFlowUsage getQosFlowUsage() const;
  void setQosFlowUsage(oai::model::pcf::QosFlowUsage const& value);
  bool qosFlowUsageIsSet() const;
  void unsetQosFlowUsage();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::SmPolicyAssociationReleaseCause getRelCause() const;
  void setRelCause(
      oai::model::pcf::SmPolicyAssociationReleaseCause const& value);
  bool relCauseIsSet() const;
  void unsetRelCause();
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const& value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::BridgeManagementContainer getTsnBridgeManCont() const;
  void setTsnBridgeManCont(
      oai::model::pcf::BridgeManagementContainer const& value);
  bool tsnBridgeManContIsSet() const;
  void unsetTsnBridgeManCont();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::PortManagementContainer getTsnPortManContDstt() const;
  void setTsnPortManContDstt(
      oai::model::pcf::PortManagementContainer const& value);
  bool tsnPortManContDsttIsSet() const;
  void unsetTsnPortManContDstt();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::pcf::PortManagementContainer> getTsnPortManContNwtts()
      const;
  void setTsnPortManContNwtts(
      std::vector<oai::model::pcf::PortManagementContainer> const& value);
  bool tsnPortManContNwttsIsSet() const;
  void unsetTsnPortManContNwtts();
  /// <summary>
  /// Indicates whether the PDU session is a redundant PDU session. If absent it
  /// means the PDU session is not a redundant PDU session.
  /// </summary>
  bool isRedSessIndication() const;
  void setRedSessIndication(bool const value);
  bool redSessIndicationIsSet() const;
  void unsetRedSessIndication();

  friend void to_json(nlohmann::json& j, const SmPolicyDecision& o);
  friend void from_json(const nlohmann::json& j, SmPolicyDecision& o);

 protected:
  std::map<std::string, oai::model::pcf::SessionRule> m_SessRules;
  bool m_SessRulesIsSet;
  std::map<std::string, oai::model::pcf::PccRule> m_PccRules;
  bool m_PccRulesIsSet;
  bool m_PcscfRestIndication;
  bool m_PcscfRestIndicationIsSet;
  std::map<std::string, oai::model::pcf::QosData> m_QosDecs;
  bool m_QosDecsIsSet;
  std::map<std::string, oai::model::pcf::ChargingData> m_ChgDecs;
  bool m_ChgDecsIsSet;
  oai::model::pcf::ChargingInformation m_ChargingInfo;
  bool m_ChargingInfoIsSet;
  std::map<std::string, oai::model::pcf::TrafficControlData> m_TraffContDecs;
  bool m_TraffContDecsIsSet;
  std::map<std::string, oai::model::pcf::UsageMonitoringData> m_UmDecs;
  bool m_UmDecsIsSet;
  std::map<std::string, oai::model::pcf::QosCharacteristics> m_QosChars;
  bool m_QosCharsIsSet;
  std::map<std::string, oai::model::pcf::QosMonitoringData> m_QosMonDecs;
  bool m_QosMonDecsIsSet;
  int32_t m_ReflectiveQoSTimer;
  bool m_ReflectiveQoSTimerIsSet;
  std::map<std::string, oai::model::pcf::ConditionData> m_Conds;
  bool m_CondsIsSet;
  std::string m_RevalidationTime;
  bool m_RevalidationTimeIsSet;
  bool m_Offline;
  bool m_OfflineIsSet;
  bool m_Online;
  bool m_OnlineIsSet;
  std::vector<oai::model::pcf::PolicyControlRequestTrigger>
      m_PolicyCtrlReqTriggers;
  bool m_PolicyCtrlReqTriggersIsSet;
  std::vector<oai::model::pcf::RequestedRuleData> m_LastReqRuleData;
  bool m_LastReqRuleDataIsSet;
  oai::model::pcf::RequestedUsageData m_LastReqUsageData;
  bool m_LastReqUsageDataIsSet;
  std::map<std::string, oai::model::common::PresenceInfoRm> m_PraInfos;
  bool m_PraInfosIsSet;
  int32_t m_Ipv4Index;
  bool m_Ipv4IndexIsSet;
  int32_t m_Ipv6Index;
  bool m_Ipv6IndexIsSet;
  oai::model::pcf::QosFlowUsage m_QosFlowUsage;
  bool m_QosFlowUsageIsSet;
  oai::model::pcf::SmPolicyAssociationReleaseCause m_RelCause;
  bool m_RelCauseIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
  oai::model::pcf::BridgeManagementContainer m_TsnBridgeManCont;
  bool m_TsnBridgeManContIsSet;
  oai::model::pcf::PortManagementContainer m_TsnPortManContDstt;
  bool m_TsnPortManContDsttIsSet;
  std::vector<oai::model::pcf::PortManagementContainer> m_TsnPortManContNwtts;
  bool m_TsnPortManContNwttsIsSet;
  bool m_RedSessIndication;
  bool m_RedSessIndicationIsSet;
};

std::ostream& operator<<(
    std::ostream& os, const oai::model::pcf::SmPolicyDecision& decision);
}  // namespace oai::model::pcf

#endif /* SmPolicyDecision_H_ */
