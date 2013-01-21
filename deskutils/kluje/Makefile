# New ports collection makefile for:	kluje
# Date created:				27 July 2003
# Whom:                                 Jesse McConnell <jesse@gallup.com>
#
# $FreeBSD: ports/deskutils/kluje/Makefile,v 1.27 2012/12/30 18:55:45 svnexp Exp $
#

PORTNAME=	kluje
PORTVERSION=	0.8
PORTREVISION=	6
CATEGORIES=	deskutils kde
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A KDE client for the popular online journal site LiveJournal

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_KDELIBS_VER=	3
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g ; \
		s|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
