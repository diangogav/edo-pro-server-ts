#ifndef QUERY_CREATOR
#define QUERY_CREATOR

#include "vector"
#include "iostream"
#include <variant>
#include "../../../shared/Read.h"
#include "../../../shared/QueryRequest.h"
#include "../../../shared/DuelStages.h"
#include "../../../shared/ZonesRefresher.h"
#include "../../../shared/DuelPositions.h"

class QueryCreator {
public:
  std::vector<QueryRequest> run(const std::vector<uint8_t>& message);
};

#endif