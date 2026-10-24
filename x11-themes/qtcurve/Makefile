PORTNAME=	qtcurve
PORTVERSION=	1.9.0
PORTREVISION?=	0
CATEGORIES=	x11-themes
MASTER_SITES=	KDE/stable/${PORTNAME}
DISTNAME=	${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	jhale@FreeBSD.org
COMMENT?=	Widget styles for Qt and GTK toolkits
WWW=		https://invent.kde.org/system/qtcurve

.if !defined(QTCURVE_SLAVE)
DFLY_PATCHDIR=	${MASTERDIR}/none
.endif

.include <bsd.port.mk>
