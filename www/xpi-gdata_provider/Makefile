# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: www/xpi-gdata_provider/Makefile 341205 2014-01-26 15:09:46Z miwi $

PORTNAME=	gdata_provider
PORTVERSION=	0.25
DISTVERSIONSUFFIX=	-tb+sm
CATEGORIES=	www deskutils

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Allows bidirectional access to Google Calendar

XPI_DISTNAME=	provider_for_google_calendar
XPI_NUM=	4631
XPI_ID=		{a62ef8ec-5fdc-40c2-873c-223b8a6925cc}

# XXX Remove me on next update!
xpi-post-extract:
	${RM} ${WRKSRC}/chrome/.ttt.sh.swp

.include "../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
