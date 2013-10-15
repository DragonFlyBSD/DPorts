# Created by: ijliao
# $FreeBSD: devel/sedsed/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	sedsed
PORTVERSION=	1.0
CATEGORIES=	devel
MASTER_SITES=	http://sedsed.sourceforge.net/
EXTRACT_SUFX=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Python script that masters SED scripts

PLIST_FILES=	bin/sedsed
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKDIR}

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

USE_PYTHON=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/sedsed

.include <bsd.port.mk>
