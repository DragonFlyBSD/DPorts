# Ports collection makefile for:  findhier
# Date created:			  Sat, Apr 28, 2007
# Whom:				  Hiroki Sato <hrs@FreeBSD.org>
#
# $FreeBSD: ports/cad/findhier/Makefile,v 1.2 2012/11/17 05:54:53 svnexp Exp $
#

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

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fh ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/fh.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
