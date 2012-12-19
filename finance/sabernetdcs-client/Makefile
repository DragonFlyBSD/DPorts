# New ports collection makefile for:   sabernetdcs
# Date created:        29 December 2006
# Whom:                Matthew Ranostay <mranostay@saberlogic.com>
#
# $FreeBSD: ports/finance/sabernetdcs-client/Makefile,v 1.16 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	sabernetdcs
PORTVERSION=	2.0.3
PORTREVISION=	9
CATEGORIES=	finance www
MASTER_SITES=	SF/${PORTNAME}/SaberNet%20DCS/${PORTVERSION}
PKGNAMESUFFIX=	-client
DISTNAME=	sndcs-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SaberNet DCS - A labor data collection system

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyro>=0:${PORTSDIR}/devel/py-pyro

USE_GNOME=	pygtk2
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
USE_BZIP2=	yes
DOCSDIR=	${PREFIX}/share/doc/sndcs
DATADIR=	${PREFIX}/share/sndcs

PYDISTUTILS_PKGNAME=	sndcs

.if defined(NOPORTDOCS)
EXTRA_PATCHES=	${FILESDIR}/extra-patch-setup.py
.endif

post-patch:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/setup.py

do-configure:
	cd ${WRKSRC} && ${CP} "${FILESDIR}/sndcs2.conf" "sndcs/config/sndcs2.conf"

post-install:
	@${ECHO} "	- - - - - - - - - - - - - - - - - - - - - - - - -"
	@${ECHO} "	SaberNet DCS Client is now installed.            "
	@${ECHO} "	Change the settings in ${PREFIX}/etc/sndcs/sndcs2.conf    "
	@${ECHO} "	to suit your needs.                              "
	@${ECHO} "	- - - - - - - - - - - - - - - - - - - - - - - - -"

.include <bsd.port.mk>
