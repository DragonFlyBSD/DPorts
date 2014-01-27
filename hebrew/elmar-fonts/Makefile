# Created by: nadav@cs.technion.ac.il
# $FreeBSD: hebrew/elmar-fonts/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	elmar-fonts
PORTVERSION=	3.3
PORTREVISION=	2
CATEGORIES=	hebrew x11-fonts
MASTER_SITES=	ftp://ftp.elmar.co.il/Portable/fonts/
DISTNAME=	H.fonts
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	sterling@camdensoftware.com
COMMENT=	A collection of Hebrew fonts from El-Mar software Ltd

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/lib/X11/fonts/hebrew
	${TAR} -C ${PREFIX}/lib/X11/fonts/hebrew -xZpf \
		${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
