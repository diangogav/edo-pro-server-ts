#ifndef ZONES_REFRESHER
#define ZONES_REFRESHER

#include <vector>
#include "QueryRequest.h"
#include "DuelLocations.h"

class ZonesRefresher {
public:
  static void refreshAllMZones(std::vector<QueryRequest>& queryRequests);
  static void refreshAllSZones(std::vector<QueryRequest>& queryRequests);
  static void refreshAllHands(std::vector<QueryRequest>& queryRequests);
  static void refreshAllDecks(std::vector<QueryRequest>& queryRequests);
  static void refreshAllGraves(std::vector<QueryRequest>& queryRequests);
  static void refreshAllExtras(std::vector<QueryRequest>& queryRequests);
  static void refreshAllRemoved(std::vector<QueryRequest>& queryRequests);
  static void refreshAll(std::vector<QueryRequest>& queryRequests);
};

#endif