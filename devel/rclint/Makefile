# $FreeBSD: devel/rclint/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	rclint
PORTVERSION=	0.0.6
CATEGORIES=	devel textproc python
MASTER_SITES=	http://www.bayofrum.net/dist/rclint/	\
		LOCAL/crees/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Checks rc scripts for style and common errors

LICENSE=	BSD

NO_BUILD=	yes
USE_PYTHON=	yes
SUB_FILES=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}
PORTDATA=	${PORTNAME}.py errors.en

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e "s,\(DATADIR = \)'\.',\1'${DATADIR}'," \
		${WRKSRC}/${PORTNAME}.py

do-install:
	${MKDIR} ${DATADIR}
.for f in ${PORTDATA}
	${INSTALL_SCRIPT} ${WRKSRC}/$f ${DATADIR}
.endfor
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
