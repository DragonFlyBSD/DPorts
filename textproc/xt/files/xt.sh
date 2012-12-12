#!/bin/sh
# $FreeBSD: ports/textproc/xt/files/xt.sh,v 1.2 2012/11/17 06:02:25 svnexp Exp $

IAM=`basename ${0}`

if [ "${IAM}" = "xt-xml4j" ]
then
	JAVA_ARGS="${JAVA_ARGS} -Dcom.jclark.xsl.sax.parser=org.apache.xerces.parsers.SAXParser"
fi

export CLASSPATH=`"%%LOCALBASE%%/bin/classpath"`
"%%LOCALBASE%%/bin/javavm" ${JAVA_ARGS} com.jclark.xsl.sax.Driver $*
