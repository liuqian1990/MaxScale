#!/bin/bash


if [ $# -ne 1 ]
then
    echo "USAGE: $0 VERSION"
    exit 1
fi

version=$1
curl -s "https://jira.mariadb.org/sr/jira.issueviews:searchrequest-csv-current-fields/temp/SearchRequest.csv?jqlQuery=project+%3D+MXS+AND+issuetype+%21%3D+Bug+AND+status+%3D+Closed+AND+fixVersion+%3D+$version"|cut -f 1,2 -d ,|tail -n+2|sed 's/\(.*\),\(.*\)/* (\2)[https:\/\/jira.mariadb.org\/browse\/\2] \1/'
