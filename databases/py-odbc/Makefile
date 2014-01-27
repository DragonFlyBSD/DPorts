# Created by: April 15 2009
# $FreeBSD: databases/py-odbc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pyodbc
PORTVERSION=	3.0.7
CATEGORIES=	databases python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rob.kruus@gmail.com
COMMENT=	ODBC connections for python

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes
PYEASYINSTALL_ARCHDEP=	yes

OPTIONS_DEFINE= UNIXODBC
OPTIONS_DEFAULT=UNIXODBC

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MUNIXODBC}
LIB_DEPENDS+=	libodbc.so:${PORTSDIR}/databases/unixODBC
BUILD_DEPENDS+=	unixODBC>=2.2.14_1:${PORTSDIR}/databases/unixODBC
.else
LIB_DEPENDS+=	libiodbc.so:${PORTSDIR}/databases/libiodbc
.endif

.include <bsd.port.mk>
