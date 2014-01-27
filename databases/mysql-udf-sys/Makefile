# Created by: David Cornejo <dave@dogwood.com>
# $FreeBSD: databases/mysql-udf-sys/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mysql-udf-sys
PORTVERSION=	0.0.3
CATEGORIES=	databases
MASTER_SITES=	http://www.mysqludf.org/lib_mysqludf_sys/
DISTNAME=	lib_mysqludf_sys_${PORTVERSION}

MAINTAINER=	dave@dogwood.com
COMMENT=	System access UDFs

USE_MYSQL=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}

PLIST_FILES=	lib/mysql/plugin/lib_mysqludf_sys.so
PLIST_DIRS=	lib/mysql/plugin

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|; s|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/Makefile

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
