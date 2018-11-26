/*-------------------------------------------------------------------------
 *
 * multi_explain.h
 *	  Explain support for Citus.
 *
 * Copyright (c) 2012-2016, Citus Data, Inc.
 *-------------------------------------------------------------------------
 */

#ifndef MULTI_EXPLAIN_H
#define MULTI_EXPLAIN_H

#include "executor/executor.h"

/* Config variables managed via guc.c to explain distributed query plans */
extern bool ExplainDistributedQueries;
extern bool ExplainAllTasks;

extern void CitusExplainOneHook(Query *query,
										   int cursorOptions,
										   IntoClause *into,
										   ExplainState *es,
										   const char *queryString,
										   ParamListInfo params,
										   QueryEnvironment *queryEnv);

#endif /* MULTI_EXPLAIN_H */
