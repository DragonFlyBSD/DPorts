# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: databases/sharedance/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sharedance
PORTVERSION=	0.6
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	http://download.pureftpd.org/pub/sharedance/

MAINTAINER=	gslin@gslin.org
COMMENT=	A daemon to centralize keys and associated data

LIB_DEPENDS=	libevent-1.4.so:${PORTSDIR}/devel/libevent

CONFIGURE_ARGS=	--with-largefile
GNU_CONFIGURE=	yes
USE_BZIP2=	yes

NO_STAGE=	yes
post-install:
	${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/php/*.php ${DATADIR}

.include <bsd.port.mk>
