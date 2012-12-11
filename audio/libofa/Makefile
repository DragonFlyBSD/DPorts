# New ports collection makefile for:	libofa
# Date created:		2006-04-01
# Whom:			Alexander Botero-Lowry <alex@foxybanana.com>
#
# $FreeBSD: ports/audio/libofa/Makefile,v 1.25 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libofa
PORTVERSION=	0.9.3
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	The Open Fingerprint Architecture Library

LICENSE=		APL1 GPLv2
LICENSE_COMB=		dual
LICENSE_GROUPS_APL1=	OSI
LICENSE_NAME_APL1=	Adaptive Public License version 1.0
LICENSE_FILE_APL1=	${WRKSRC}/COPYING
LICENSE_PERMS_APL1=	${_LICENSE_PERMS_DEFAULT}

LIB_DEPENDS=	fftw3:${PORTSDIR}/math/fftw3 \
		expat:${PORTSDIR}/textproc/expat2 \
		curl:${PORTSDIR}/ftp/curl

PROJECTHOST=	musicip-libofa
USE_DOS2UNIX=	yes
USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_JOBS_SAFE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
