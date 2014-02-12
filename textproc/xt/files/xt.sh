#!/bin/sh
# $FreeBSD: head/textproc/xt/files/xt.sh 340872 2014-01-24 00:14:07Z mat $

IAM=`basename ${0}`

if [ "${IAM}" = "xt-xml4j" ]
then
	JAVA_ARGS="${JAVA_ARGS} -Dcom.jclark.xsl.sax.parser=org.apache.xerces.parsers.SAXParser"
fi

export CLASSPATH=`"%%LOCALBASE%%/bin/classpath"`
"%%LOCALBASE%%/bin/javavm" ${JAVA_ARGS} com.jclark.xsl.sax.Driver $*
