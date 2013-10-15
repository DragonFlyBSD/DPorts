# Created by: Hiroki Sato <hrs@FreeBSD.org>
# $FreeBSD: cad/findhier/Makefile 327711 2013-09-20 15:58:41Z bapt $

PORTNAME=	findhier
PORTVERSION=	1.14
CATEGORIES=	cad
MASTER_SITES=	http://www.iclab.snu.ac.kr/~chilly/Work/CAD/
DISTNAME=	fh${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Hierarchy Viewer for magic/CIF/GDSII/PCSTR/GED/TeX

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/fh

MAN1=		fh.1

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fh ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/fh.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
