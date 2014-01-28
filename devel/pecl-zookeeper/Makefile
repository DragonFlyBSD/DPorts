# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/pecl-zookeeper/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	zookeeper
PORTVERSION=	0.2.2
CATEGORIES=	devel
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	gslin@gslin.org
COMMENT=	PHP extension for interfacing with Apache ZooKeeper

LICENSE=	PHP301

LIB_DEPENDS=	libzookeeper_mt.so:${PORTSDIR}/devel/zookeeper

USE_PHP=	session
USE_PHP_BUILD=	session
USE_PHPEXT=	yes

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/zookeeper-api.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
