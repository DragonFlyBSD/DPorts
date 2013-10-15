# Created by: Matt Heckaman <matt@LUCIDA.QC.CA>
# $FreeBSD: net/mmucl/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	mmucl
PORTVERSION=	1.5.2
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	tim@SPYDERWEB.COM.AU
COMMENT=	Powerful GUI MUD client written in TCL

LIB_DEPENDS=	tcl84.1:${PORTSDIR}/lang/tcl84
RUN_DEPENDS=	wish8.4:${PORTSDIR}/x11-toolkits/tk84

USE_GMAKE=	yes
MAKE_ARGS=	BASE_DIR=${PREFIX} TCLSH=tclsh8.4 INFO_DIR=${PREFIX}/info \
		INSTALL_INFO=/usr/bin/install-info
INFO=		mmucl

NO_STAGE=	yes
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CHANGES ${DOCSDIR}

.include <bsd.port.mk>
