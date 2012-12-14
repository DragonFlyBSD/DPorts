# New ports collection makefile for:	KDE iconset Cezanne
# Date created:		Mon Nov 15 20:20:32 UTC 2004
# Whom:			Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/kde-icons-cezanne/Makefile,v 1.2 2012/11/17 06:03:32 svnexp Exp $
#

PORTNAME=	cezanne
PORTVERSION=	0.3b
MASTER_SITES=	http://homepage.ntlworld.com/christopher.townson/
DISTNAME=	Cezanne_packaged

COMMENT=	KDE Cezanne iconset

USE_BZIP2=	yes

WRKSRC=		${WRKDIR}/Cezanne
PORT_SHAREDIR?=	"${PORTNAME}-${PORTVERSION}"

PLIST_FILE_PATTERN_EXTRA=	-v "buildset"

.include "${.CURDIR}/../kde-icons-noia/Makefile.icons"
