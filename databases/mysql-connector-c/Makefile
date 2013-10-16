# Created by: gahr
# $FreeBSD: databases/mysql-connector-c/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	mysql-connector-c
PORTVERSION=	6.0.2
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_MYSQL}
MASTER_SITE_SUBDIR=	Connector-C

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	MySQL database connector for C

LICENSE=	GPLv2

USE_MYSQL=	51+
USES=		cmake
USE_LDCONFIG=	${PREFIX}/lib/${PORTNAME}

PLIST_SUB+=	PORTVERSION=${PORTVERSION}

NO_STAGE=	yes
.include <bsd.port.mk>
