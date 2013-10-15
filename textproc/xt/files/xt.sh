#!/bin/sh
# $FreeBSD: textproc/xt/files/xt.sh 300897 2012-07-14 14:29:18Z beat $

IAM=`basename ${0}`

if [ "${IAM}" = "xt-xml4j" ]
then
	JAVA_ARGS="${JAVA_ARGS} -Dcom.jclark.xsl.sax.parser=org.apache.xerces.parsers.SAXParser"
fi

export CLASSPATH=`"%%LOCALBASE%%/bin/classpath"`
"%%LOCALBASE%%/bin/javavm" ${JAVA_ARGS} com.jclark.xsl.sax.Driver $*
