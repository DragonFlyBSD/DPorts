# Created by: ijliao
# $FreeBSD: lang/lafontaine/Makefile 316596 2013-04-26 10:44:28Z ak $

PORTNAME=	lafontaine
PORTVERSION=	0.4.1
PORTREVISION=	8
CATEGORIES=	lang
MASTER_SITES=	http://www.nongnu.org/lafontaine/archives/
DISTNAME=	${PORTNAME}_0.4-1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical logo interpreter

WRKSRC=		${WRKDIR}/${PORTNAME}-0.4

USES=        pathfix
USE_GNOME=	gtk20
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_CSTD=	gnu89

.if !defined(WITHOUT_NLS)
USES+=		gettext
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
