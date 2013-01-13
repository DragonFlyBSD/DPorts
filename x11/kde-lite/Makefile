# -*-mode: makefile-*-
# New ports collection makefile for:	KDE release ports
# Date created:				Sun Nov 30 19:55 EST 2003
# Whom:					Will Andrews <will@FreeBSD.org>
#
# $FreeBSD: ports/x11/kde-lite/Makefile,v 1.7 2012/11/17 06:03:16 svnexp Exp $
#

PKGNAMESUFFIX=		-lite

MAINTAINER=		re@FreeBSD.org
COMMENT=		The FreeBSD release "meta-port" for (a subset of) KDE

DESCR=			${PORTSDIR}/x11/kde-lite/pkg-descr

MASTERDIR=		${.CURDIR}/../../x11/kde3
.if defined(IS_INTERACTIVE)
CONFLICTS=		kde-[0-9]*
.endif

WITHOUT_KDEVELOP=	yes
WITHOUT_KDEEDU=		yes
WITHOUT_KDEGAMES=	yes
WITHOUT_KDESDK=		yes
WITHOUT_KDETOYS=	yes
WITHOUT_KDEWEBDEV=	yes
WITHOUT_KOFFICE=	yes

.include "${MASTERDIR}/Makefile"
