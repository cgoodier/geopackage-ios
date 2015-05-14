//
//  GPKGSqlUtils.h
//  geopackage-ios
//
//  Created by Brian Osborn on 5/14/15.
//  Copyright (c) 2015 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPKGResultSet.h"
#import <sqlite3.h>

@interface GPKGSqlUtils : NSObject

+(void) execWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(GPKGResultSet *) queryWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(int) countWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(int) countWithDatabase: (sqlite3 *) database andTable: (NSString *) table andWhere: (NSString *) where;

+(int) countWithDatabase: (sqlite3 *) database andCountStatement: (NSString *) countStatement;

+(long long) insertWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(int) updateWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(int) deleteWithDatabase: (sqlite3 *) database andStatement: (NSString *) statement;

+(void) closeStatement: (sqlite3_stmt *) statment;

+(void) closeResultSet: (GPKGResultSet *) resultSet;

+(void) closeDatabase: (sqlite3 *) database;

@end
